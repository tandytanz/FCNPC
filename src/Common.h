/* =========================================
			
		FCNPC - Fully Controllable NPC
			----------------------

	- File: Common.h
	- Author(s): OrMisicL

  =========================================*/

#ifndef COMMON_H
#define COMMON_H

#include <math.h>

// logprintf function defintion
typedef void (* logprintf_t)(char *szFormat, ...);
extern logprintf_t          logprintf;

// General definitions
#define MAX_PLAYERS         1000
#define MAX_VEHICLES        2000
#define MAX_NODES           64
#define MAX_NAME_LENGTH     24
#define MAX_FILTERSCRIPTS   16
#define INVALID_ENTITY_ID   (0xFFFF)
#define SAFE_DELETE(ptr)    if(ptr) { delete ptr; ptr = NULL; }
#define SAFE_RELEASE(ptr)   if(ptr) { ptr->Release(); ptr = NULL; }
#define PAD(a, b)           char a[b]
#ifndef CHECK_PARAMS
	#define CHECK_PARAMS(m,n)                                                                                           \
		do                                                                                                              \
		{                                                                                                               \
			if (params[0] != (m * 4))                                                                                   \
			{                                                                                                           \
				logprintf("[FCNPC] Error: Incorrect parameter count for \"" n "\", %d != %d\n", m, params[0] / 4); \
				return 0;                                                                                               \
			}                                                                                                           \
		}                                                                                                               \
		while (0)
#endif
// Plugin exports
#define PLUGIN_DATA_NETGAME        225
#define PLUGIN_DATA_RAKSERVER      226
#define PLUGIN_DATA_LOADFSCRIPT    227
#define PLUGIN_DATA_CONSOLE        228
#define PLUGIN_DATA_UNLOADFSCRIPT  229

// Player state
#define PLAYER_STATE_NONE                       0
#define PLAYER_STATE_ONFOOT                     1
#define PLAYER_STATE_DRIVER                     2
#define PLAYER_STATE_PASSENGER                  3
#define PLAYER_STATE_EXIT_VEHICLE               4
#define PLAYER_STATE_ENTER_VEHICLE_DRIVER       5
#define PLAYER_STATE_ENTER_VEHICLE_PASSENGER    6
#define PLAYER_STATE_DEAD                       7
#define PLAYER_STATE_SPAWNED                    8
// Update state
#define UPDATE_STATE_NONE       0
#define UPDATE_STATE_ONFOOT     1
#define UPDATE_STATE_DRIVER     2
#define UPDATE_STATE_PASSENGER  3
// Mouvement type
#define MOVE_TYPE_WALK      0
#define MOVE_TYPE_RUN       1
#define MOVE_TYPE_SPRINT    2
#define MOVE_TYPE_DRIVE     3
// Moving velocity
#define MOVE_SPEED_WALK     0.1552086f
#define MOVE_SPEED_RUN      0.56444f
#define MOVE_SPEED_SPRINT   0.926784f
// Body parts
#define INVALID_BODY_PART   -1
#define BODY_PART_HEAD      0
#define BODY_PART_TORSO     1
#define BODY_PART_LEGS      2
#define BODY_PART_ARMS      3
#define BODY_PART_ALL       4
// Playback types
#define PLAYBACK_TYPE_NONE              0
#define PLAYBACK_TYPE_DRIVER            1
#define PLAYBACK_TYPE_ONFOOT            2
// Vehicle mode info
#define VEHICLE_MODEL_INFO_SIZE         1
#define VEHICLE_MODEL_INFO_FRONTSEAT    2
#define VEHICLE_MODEL_INFO_REARSEAT     3
// Node types
#define NODE_TYPE_NONE                  (-1)
#define NODE_TYPE_PED                   0
#define NODE_TYPE_VEHICLE               1
#define NODE_TYPE_BOAT                  2
// Bullet hit types
#define BULLET_HIT_TYPE_NONE            0
#define BULLET_HIT_TYPE_PLAYER          1
#define BULLET_HIT_TYPE_VEHICLE         2
#define BULLET_HIT_TYPE_OBJECT          3
#define BULLET_HIT_TYPE_PLAYER_OBJECT   4
// Other
#define MAX_DAMAGE_DISTANCE             200.0f
#define MAX_DISTANCE_TO_ENTER_VEHICLE   30.0f
#define DEFAULT_UPDATE_RATE             50

// Hook functions
#ifdef _WIN32
	#define HOOK void _declspec(naked)
#else
	#define HOOK void __attribute__((naked))
#endif

#endif
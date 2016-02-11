/* =========================================
			
		FCNPC - Fully Controllable NPC
			----------------------

	- File: Address.h
	- Author(s): OrMisicL

  =========================================*/


#ifndef ADDRESS_H
#define ADDRESS_H

#ifdef _WIN32
	#define RAKNET_SEND_OFFSET          7
	#define RAKNET_RPC_OFFSET           32
	#define RAKNET_RECEIVE_OFFSET       10
#else
	#define RAKNET_SEND_OFFSET          9
	#define RAKNET_RPC_OFFSET           35
	#define RAKNET_RECEIVE_OFFSET       11
#endif

enum eSAMPVersion
{
	SAMP_VERSION_UNKNOWN,
	SAMP_VERSION_037,
	SAMP_VERSION_037_R2_1,
};

class CAddress
{
	public:
		static void	Initialize(eSAMPVersion sampVersion);

		static DWORD           FUNC_Logprintf_037;
		static DWORD           FUNC_Logprintf_037_R2_1;

		// Functions
		static DWORD           FUNC_CreateNPC_RPC;
		static DWORD           FUNC_CPlayerPool__DeletePlayer;

		static DWORD           FUNC_CPlayer__SpawnForWorld;
		static DWORD           FUNC_CPlayer__Kill;
		static DWORD           FUNC_CPlayer__EnterVehicle;
		static DWORD           FUNC_CPlayer__ExitVehicle;

		static DWORD           FUNC_CConfig__GetValueAsInteger;

		static DWORD           FUNC_GetVehicleModelInfo;

		// Variables
		static DWORD           VAR_ServerPtr;
		static DWORD           VAR_ConfigPtr;
		static DWORD           VAR_RakPeerPtr;
		static DWORD           VAR_ServerAuthentication;

		// Offsets
		static DWORD           OFFSET_NetVersion;
		static DWORD           OFFSET_RemoteSystemManager;
		static DWORD           OFFSET_RemoteSystemSize;
		static DWORD           OFFSET_RemoteSystem__ConnectMode;
		static DWORD           OFFSET_RemoteSystem__Unknown;
		static BYTE            OFFSET_SendBullet_RPC;
		
		// Arrays


};

#endif

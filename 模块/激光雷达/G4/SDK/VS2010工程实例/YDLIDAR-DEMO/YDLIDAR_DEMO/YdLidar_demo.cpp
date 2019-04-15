// YdLidar_demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "lidar.h"
#include <windows.h> 
#include <stdio.h> 

bool ctrlhandler( DWORD fdwctrltype ){ 
    switch( fdwctrltype ) { 
	case CTRL_CLOSE_EVENT:
		Lidar::GetInstance().onDisconnect();
		break;
	}
	return TRUE;
} 

int _tmain(int argc, _TCHAR* argv[])
{
	char serialpath[255]="\\\\.\\com3";
	uint32_t baudrate=230400;
	printf ("EAI INFO : start to open the serialport......\n");
	bool isConnected = Lidar::GetInstance().onConnect(serialpath , baudrate);
	if(!isConnected){
		printf ("EAI INFO : cannot open the serialport......\n");
		Sleep(5*1000);
	}
	printf ("EAI INFO :it is ok to open the serialport......\n");
	
	printf ("EAI INFO : start to check health......\n");
	int errorcode;
    if (!Lidar::GetInstance().checkDeviceHealth(&errorcode)){
		printf("EAI INFO : the health is error.....\n");
		Sleep(5*1000);
    }
	printf ("EAI INFO : health is ok ......\n");

	YDlidarDriver * lidar_drv = Lidar::GetInstance().lidar_drv;
	lidar_drv->startScan();
	printf ("EAI INFO : scaning......\n");
	if(SetConsoleCtrlHandler((PHANDLER_ROUTINE)ctrlhandler, true )) {
		while(1){
			node_info nodes[2048];			
			size_t cnt = sizeof(nodes);
			if (lidar_drv->grabScanData(nodes, cnt, 0)==0){
				printf ("EAI INFO : current size: %d \n" ,  cnt);
				/*for (int pos = 0; pos < (int)cnt; ++pos) {
					if (!nodes[pos].distance_q2) continue;
					printf ("EAI INFO : quality : %d , angle: %f  , dist: %f\n" , (nodes[pos].sync_quality>>LIDAR_RESP_MEASUREMENT_QUALITY_SHIFT) , (nodes[pos].angle_q6_checkbit >> LIDAR_RESP_MEASUREMENT_ANGLE_SHIFT)/64.0f , nodes[pos].distance_q2/4.0f);
				}*/
			}
			Sleep(1000);
		}
	}else{ 
		printf("Unable to install handler!\n");
		return -1;
	} 

		
	return 0;
}


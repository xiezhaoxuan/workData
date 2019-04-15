/*
 *  COPYRIGHT 2015 - 2017 EAI TEAM
 *  http://www.eaibot.com
 *
 */

#include "v8stdint.h"
#include "ydlidar_driver.h"

using namespace ydlidar;

class Lidar {

public:
    static Lidar & GetInstance();
    
    Lidar();
    ~Lidar();
    bool onConnect(const char * port , uint32_t baudrate);
    bool isConnected();
    void onDisconnect();
    bool checkDeviceHealth(int * errorCode = NULL);
	uint32_t getLidarModel();
	void closeLidarDriver();
	void openLidarDriver();

public:
    device_info devinfo;
	static YDlidarDriver * lidar_drv;
	uint32_t lidar_model;
    
protected:
    static Lidar * instance;
    bool  _isConnected;
};
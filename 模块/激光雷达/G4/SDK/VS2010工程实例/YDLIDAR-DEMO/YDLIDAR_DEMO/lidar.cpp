/*
 *  COPYRIGHT 2015 - 2017 EAI TEAM
 *  http://www.eaibot.com
 *
 */

#include "stdafx.h"
#include "lidar.h"

Lidar * Lidar::instance = NULL;
YDlidarDriver * Lidar::lidar_drv = NULL;

Lidar::Lidar()
    : _isConnected(false)
{

}

Lidar::~Lidar()
{
    onDisconnect();
	delete instance;
	instance = NULL;
	YDlidarDriver::done();
}

Lidar & Lidar::GetInstance()
{
    if (instance) return *instance;
    instance = new Lidar();
	YDlidarDriver::initDriver(); 
	lidar_drv=YDlidarDriver::singleton();
    return *instance;
}


bool Lidar::isConnected()
{
	return _isConnected;
}

void Lidar::onDisconnect()
{
    if (_isConnected) {
        lidar_drv->stop();
    }
}


bool  Lidar::checkDeviceHealth(int * errorCode)
{
    int errcode = 0;
    bool ans = false;

    do {
        if (!_isConnected) {
            break;
        }
        device_health healthinfo;
        if (lidar_drv->getHealth(healthinfo)!=0) {
            break;
        }
        if (healthinfo.status != LIDAR_STATUS_OK) {
            errcode = healthinfo.error_code;
            break;
        }
        ans = true;
    } while(0);

    if (errorCode) {
		*errorCode = errcode;
	}
    return ans;
}

bool Lidar::onConnect(const char * port , uint32_t baudrate)
{
    if (_isConnected) return true;

	lidar_drv->disconnect();
    if (lidar_drv->connect(port, baudrate)!=0) return false;

    uint32_t ans = lidar_drv->getDeviceInfo(devinfo);
	if (ans!=0) {
        return false;
    }
	lidar_model = devinfo.model;

    _isConnected = true;
    return true;
}

void Lidar::openLidarDriver()
{
	if (instance) return ;
	instance = new Lidar();
	YDlidarDriver::initDriver(); 
	if (!YDlidarDriver::singleton()) {
		return;
	}
	lidar_drv=YDlidarDriver::singleton();
}

void Lidar::closeLidarDriver()
{
	onDisconnect();
	delete instance;
	instance = NULL;
	YDlidarDriver::done();
}

uint32_t Lidar::getLidarModel()
{
	return lidar_model;
}


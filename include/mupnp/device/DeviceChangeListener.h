/******************************************************************
*
*  mUPnP for C++
*
*  Copyright (C) Satoshi Konno 2002
*
*  File: DeviceChangeListener.h
*
*  Revision:
*
*  10/16/04
*    - first revision
*
******************************************************************/

#ifndef _MUPMPCC_DEVICECHANGELISTENER_H_
#define _MUPMPCC_DEVICECHANGELISTENER_H_

#include <uhttp/util/Listener.h>

namespace mUPnP {
class Device;

class DeviceChangeListener : public uHTTP::Listener {
public:
  virtual bool deviceAdded(Device *dev) = 0;
  virtual bool deviceRemoved(Device *dev) = 0;
};

}

#endif
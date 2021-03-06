
#ifndef INFORMATION_PACKET_MANAGER_IMU_H
#define INFORMATION_PACKET_MANAGER_IMU_H

#include "IPM.h"


class IPM_IMU :
      public IPM {

protected:
  ///////////////////////////////////////////////////////////////////////////////////////
  // VARIABLES
  ///////////////////////////////////////////////////////////////////////////////////////
  double* a;
  double* w;
  
public:
  ///////////////////////////////////////////////////////////////////////////////////////
  // CONSTRUCTORS
  ///////////////////////////////////////////////////////////////////////////////////////
  IPM_IMU();
  
  ///////////////////////////////////////////////////////////////////////////////////////
  // ABSTRACT METHODS
  ///////////////////////////////////////////////////////////////////////////////////////
  virtual double* get_a() = 0;
  virtual double get_Ta() = 0;
  virtual double* get_w() = 0;
  virtual double get_Tw() = 0;
  
};


//#include "IPM_IMU.cpp"


IPM_IMU::IPM_IMU() {
  this->a = new double[3];
  this->w = new double[3];
}

#endif


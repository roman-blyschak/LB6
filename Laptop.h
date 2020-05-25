#include "Computer.h"
#include <iostream>


class CLaptop
	: public CComputer
{
private:
	bool m_bLidIsOpen;
	double m_dblLatitude;
	double m_dblLongitude;
public:
	CLaptop(string brand, string model);
	virtual ~CLaptop();
	virtual bool Boot();
	virtual bool Shutdown();
	virtual bool OpenLid();
	virtual bool CloseLid();
	virtual bool Execute(string command);
	virtual bool SetLatitude(double latitude);
	virtual double GetLatitude();
	virtual bool SetLongitude(double longitude);
	virtual double GetLongitude();
};
#pragma once

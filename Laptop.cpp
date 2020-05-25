#include "Laptop.h"


CLaptop::CLaptop(string brand, string model)
	: CComputer(brand, model)
{
	this->m_bLidIsOpen = 0;
	this->m_dblLatitude = 0.0;
	this->m_dblLongitude = 0.0;
}

CLaptop::~CLaptop()
{
}

bool CLaptop::Boot()
{
	if (m_bIsBooted)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Already booted" << endl;
		return false;
	}
	else if (!m_bLidIsOpen)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Lid is not openned" << endl;
		return false;
	}
	else
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Booting...";
		this->m_bIsBooted = true;
		cout << "done." << endl;
		return true;
	}
}

bool CLaptop::Shutdown()
{
	if (!m_bIsBooted)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Alredy shutdowned.";
		return false;
	}
	else
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Shutdowning...";
		this->m_bIsBooted = false;
		cout << "done" << endl;
		return true;
	}
}

bool CLaptop::OpenLid()
{
	if (m_bLidIsOpen)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Already opened." << endl;
		return false;
	}
	else
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Opening...";
		this->m_bLidIsOpen = true;
		cout << "done" << endl;
		return true;
	}
}

bool CLaptop::CloseLid()
{
	if (!m_bLidIsOpen)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Already closed." << endl;
		return false;
	}
	else
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Closing...";
		this->m_bLidIsOpen = false;
		cout << "done." << endl;
		return true;
	}
}

bool CLaptop::Execute(string command)
{
	if (m_bLidIsOpen && m_bIsBooted)
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Executing [" << command << "]...";
		cout << "done." << endl;
		return true;
	}
	else
	{
		cout << m_pszBrand << "@" << m_pszModel << ": ";
		cout << "Error. Not possible to execute the command." << endl;
		return false;
	}
}

bool CLaptop::SetLatitude(double latitude)
{
	cout << m_pszBrand << "@" << m_pszModel << ": ";
	cout << "Setting latitude...";
	this->m_dblLatitude = latitude;
	cout << "done." << endl;
	return true;
}

double CLaptop::GetLatitude()
{
	cout << m_pszBrand << "@" << m_pszModel << ": ";
	cout << "Latitude: " << m_dblLatitude << endl;
	return true;
}

bool CLaptop::SetLongitude(double longitude)
{
	cout << m_pszBrand << "@" << m_pszModel << ": ";
	cout << "Setting longitude...";
	this->m_dblLongitude = longitude;
	cout << "done" << endl;
	return true;
}

double CLaptop::GetLongitude()
{
	cout << m_pszBrand << "@" << m_pszModel << ": ";
	cout << "Longitude: " << m_dblLongitude << endl;
	return true;
}

#include "Computer.h"


CComputer::CComputer(string brand, string model)
{
	this->m_pszBrand = brand;
	this->m_pszModel = model;
	this->m_bIsBooted = false;
}

CComputer::~CComputer()
{
}

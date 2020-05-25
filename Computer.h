#include <string.h>
#include <string>

using namespace std;


class CComputer
{
protected:
	string m_pszBrand;
	string m_pszModel;
	bool m_bIsBooted;

public:
	CComputer(string brand, string model);
	virtual ~CComputer();
	virtual bool Boot() = 0;
	virtual bool Shutdown() = 0;
	virtual bool Execute(string command) = 0;
};

#pragma once

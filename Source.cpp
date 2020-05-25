#include "Laptop.h"


int main()
{
	CLaptop laptop("ASUS", "Vivobook 14");

	laptop.Boot();
	laptop.OpenLid();
	laptop.Boot();
	laptop.Execute("ls -l");
	laptop.SetLatitude(14.0024);
	laptop.GetLatitude();
	laptop.SetLongitude(24.3250);
	laptop.GetLongitude();
	laptop.Shutdown();
	laptop.CloseLid();
}

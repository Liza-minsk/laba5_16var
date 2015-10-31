#include "stdafx.h"
#include "Karamel.h"
Karamel::Karamel()
{
	kat = "";
}
Karamel::Karamel(int k, int f,double v, double s,std::string n) :Konfeta(f,v,s,n)
{
	 setKat(k);
}

void Karamel::setKat(int k)
{
	switch (k)
	{
	case 1: kat = "Iriska";break;
	case 2: kat = "Vzletnaja"; break;
	case 3: kat = "Dushes"; break;
	}
}

std::string Karamel::getKat()
{
	return kat;
}

void Karamel::print()
{
	
	cout << endl;	
	Konfeta::print();
	cout << "Nazvanie karameli  - " <<getKat() << endl;
}

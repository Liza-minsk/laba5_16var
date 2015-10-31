#include "stdafx.h"
#include "Shok_konf.h"
#include <iostream>


Shok_konfeta::Shok_konfeta()
{
	kat = "";
}

Shok_konfeta::Shok_konfeta(int k, int f, double s,double v, std::string n ) : Konfeta(f,v,s,n)
{
	
	setKategor(k);

}


void Shok_konfeta::setKategor(int k)
{
	switch (k)
	{
	case 1: kat = "Griljash";break;
	case 2: kat = "Krasnaja_chaposhka";break;
	case 3: kat = "Romashki";break;
	case 4: kat = "Aeroflotnii"; break;
	case 5: kat = "Znichka";break;
	case 6: kat = "Detlam";break;
	case 7: kat = "Stolichnie";break;
	case 8: kat = "Molodeshnie";break;
	}
}

std::string Shok_konfeta::getKategor()
{
	return kat;
}

void Shok_konfeta::print()
	{
		std::cout << "\n";
		Konfeta::print();
		std::cout << " Nazvanie shokoladnoi konfeti - " << getKategor() << "\n";
	}


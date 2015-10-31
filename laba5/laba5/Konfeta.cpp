#include "stdafx.h"
#include "Konfeta.h"
#include <iostream>

using namespace std;

Konfeta::Konfeta()
{
	fabric = "";
}

Konfeta::Konfeta( int f, double s,double v, std::string n):Kond_izdel(v,s,n)
{
	
	setFabric(f);
}

void Konfeta::setFabric(int a)
{
	switch (a)
	{
	case 1: fabric = "Komunarka";break;
	case 2: fabric = "Spartak"; break;
	}
}

std::string Konfeta::getFabric()
{
	return fabric;
}

void Konfeta::print()
{
	std::cout << endl;
	Kond_izdel::print();
	cout << " Fabrica " << getFabric() << endl;
}




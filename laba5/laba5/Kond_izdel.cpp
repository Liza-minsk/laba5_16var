#include "stdafx.h"
#include "Kond_izdel.h"
#include<iostream>
using namespace std;
Kond_izdel::Kond_izdel()
{
	std::string name = "";
}

Kond_izdel::Kond_izdel(double v, double s, std::string n )
{
	name = n;
	sahar = s;
	ves = v;
}

Kond_izdel::~Kond_izdel()
{}

void Kond_izdel::setName(std::string n)
{
	name = n;

}

std::string Kond_izdel::getName()
{
	return name;
}
void Kond_izdel::setSahar(double s)
{
	sahar = s;
}

double Kond_izdel::getSahar()
{
	return sahar;
}

void Kond_izdel::setVes(double v)
{
	ves = v;
}

double Kond_izdel::getVes()
{
	return ves;
}

void Kond_izdel::print()
{
	cout << " Konditerskoe izdelie " <<getName()<< endl;
	cout << " Kolichestvo sahara = "<<getSahar() << endl;
}






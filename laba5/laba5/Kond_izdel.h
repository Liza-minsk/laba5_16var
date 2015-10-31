#pragma once

#include"Begin.h"
#include<locale>
#include"string"
class Kond_izdel: public Begin
{
	std::string name;
	double sahar;
	double ves;
public:
	Kond_izdel();
	Kond_izdel(double,double,std::string);
	void setName(std::string);
	std::string getName();
	void setSahar(double);
	double getSahar();
	void setVes(double);
	double getVes();
	void print();
	~Kond_izdel();
};

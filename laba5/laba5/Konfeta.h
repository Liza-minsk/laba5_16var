#pragma once
#include"Kond_izdel.h"
//#include"string"
class Konfeta:public Kond_izdel
{
	
	std::string fabric;
	enum {Komunarca=1, Spartak=2,Ivkon=3};
public:
	Konfeta();
	Konfeta( int, double,double, std::string);
	void setFabric(int a);
	std::string getFabric();
	void print();
};

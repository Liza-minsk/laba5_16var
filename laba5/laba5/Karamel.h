#pragma once
#include"stdafx.h"
#include"Konfeta.h"
class Karamel: public Konfeta 
{
	std::string kat;
	enum {Iriska=1, Vzletnaja, Dushes}; 
public:
	Karamel();
	Karamel( int, int, double,double,std::string);
	void setKat(int k);
	std::string getKat();
	void print();



};
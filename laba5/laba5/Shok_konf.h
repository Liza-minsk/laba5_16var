#pragma once

#include"Konfeta.h"
class Shok_konfeta : public Konfeta
{
	std::string kat;
	enum { Griljash = 1, Krasnaja_chaposhka=2, Romashki=3, Aeroflotnii=4, Znichka=5,  Detlam=6, Stolichnie=7, Molodeshnie=8};
public:
	Shok_konfeta();
	Shok_konfeta(int,int,double,double,std::string);
	void setKategor(int k);
	std::string getKategor();
	void print();
	};

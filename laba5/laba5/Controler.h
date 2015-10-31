#pragma once
#include "stdafx.h"
#include "Begin.h"
class Controler :public Such
{
	Begin  *b;
public:
	Controler(Begin *a) { b = a; };
	double Ves();	
	void Nushnaja_konfeta(double a, double b);
};

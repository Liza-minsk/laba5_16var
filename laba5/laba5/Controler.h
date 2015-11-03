#pragma once
#include "stdafx.h"
#include "Begin.h"
#include"Suchnost.h"
class Controler 
{
	Such  *b;
public:
	Controler(Such *a) { b = a; };
	double Ves();	
	void Nushnaja_konfeta(double a, double b);
};

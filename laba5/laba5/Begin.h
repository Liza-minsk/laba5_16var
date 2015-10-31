#pragma once
#include "stdafx.h"
#include<iostream>
using namespace std;

class Begin
{	
public:	 
	virtual void print() = 0;
	virtual double getVes() = 0;
	virtual double getSahar() = 0;
	friend class Controler;
};
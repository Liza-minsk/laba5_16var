#include"stdafx.h"
#include "Controler.h"

double Controler::Ves()
{
	double c = 0;
	Such *p = head;
	while (p != NULL) {
		c += p->getVes();
		p = p->next;
	}
	return c;
}

void Controler::Nushnaja_konfeta(double a, double b)
{
	Such *p = head;
	while (p != NULL)
	{
		if (p->getSahar()> a &&  p->getSahar()<b)
		{
			p->print();
		}
		p = p->next;

	}
}


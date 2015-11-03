#include"stdafx.h"
#include "Controler.h"
#include"Suchnost.h"



double Controler::Ves()
{
	double c = 0;
	Such *p = new Such();
	p->head =Such::head;
	while (p != NULL) {
		c += p->s->getVes();
		p = p->next;
	}
	return c;
}

void Controler::Nushnaja_konfeta(double a, double b)
{
	/*Begin *p = head;*/
	Such *p = new Such();
	p->head =Such::head;
	while (p != NULL)
	{
		if (p->s->getSahar()> a &&  p->s->getSahar()<b)
		{
			p->s->print();
		}
		p = p->next;

	}
}


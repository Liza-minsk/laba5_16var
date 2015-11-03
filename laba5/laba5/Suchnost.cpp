#include "stdafx.h"
#include "Suchnost.h"
#include"Begin.h"

Such* Such::head = NULL;

void Such::set(int a, Begin* b)
{
	Such* p = new Such();
	p->head = head;
	Such* t = new Such();
	t->next = next;
	int i = 1;
	if (a == 1)
	{
		this->next = head;
		head->s = b;
		return;
	}
	while (t)
	{
		if (i == a - 1)
		{
			p->next->s = b;
			p->next->next = t;
			return;
		}
		p = p->next;
		t = p->next;
		i++;
	}
	p->add(b);
}

Begin * Such::get(int a)
{
	int i = 1;
	Such* p = new Such();
	p->head = head;
	while (p)
	{
		if (i == a)
		{
			return p->s;
		}
		p = p->next;
		i++;
	}
	cout << "otkaz\n";
	return nullptr;
}


void Such::show()
{
	Such* p = new Such();
	p->head = head;
	while (p)
	{
		p->s->print();
		p = p->next;
	}
}

void Such::del(int n)
{
	Such* t = new Such();

	Such* dv = new Such();
	dv->head = head;

	for (int i = 1;i < n && dv != NULL;i++)
		dv = dv->next;
	if (dv != NULL)
	{
		if (dv == head)
		{
			head = head->next;
			dv = head;
		}
		else {
			t = head;
			while (t->next != dv)
				t = t->next;
		t->next = dv->next;
			dv = t;
		}
	}
}

void Such::add(Begin * aa)
{
	if (!head)
	{
		head->s = aa;
		head->next = NULL;
	}
	else
	{
		Such *p = head;
		if (p->next == NULL)
		{
			p->next->s = aa;
			p->next->next = NULL;
		}
		else
		{
			while (p->next != NULL)
				p = p->next;

		}
		p->next->s = aa;
		p->next->next = NULL;
	}
}
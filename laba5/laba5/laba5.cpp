// laba5.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include<iostream>
#include"Shok_konf.h"
#include"Karamel.h"
#include"Controler.h"
#include"Suchnost.h"
using namespace std;


int main()
{
	Begin *h;

	Karamel k1(1,1,6.0,2.4," �onfeta " );
	h = &k1;
	h->add(k1);

	Karamel k2(2,2,5.4,2.2,"Konfeta");
	h = &k2;
	h->add();

	Shok_konfeta sh1(1,2,7.2,1.1," Konfeta ");
	h = &sh1;
	h->add();


	Shok_konfeta sh2(2,1,8.7,3.0," Konfeta ");
	h = &sh2;


	Controler con (h);
	int a, i;
	do
	{
		cout << "Menu" << endl;
		cout << "0 - vihod" << endl;
		cout << "1 - vivesti spisok" << endl;
		cout << "2 - udalit elment spiska" << endl;
		cout << "3 - set" << endl;
		cout << "4 - get" << endl;
		cout << "5 - ves nashego podarka" << endl;
		cout << "6 - ochen sladkie konfeti" << endl;
		cin >> a;
		switch (a)
		{
		case 1: h->show();
			break;
		case 2: cout << "Nomer udal elementa \n"; 
			cin >> i;
			h->del(i); 
			break;
		case 3: cout << "Nomer elementa \n";
			cin >> i;
			h->set(i);
			break;
		case 4: cout << "Nomer elementa ";
			(h->get(i))->print();
			break;
		case 5: 
			cout << "Ves podarka sostavljaet " <<con.Ves()<<" gramm \n";
			break;
		case 6:cout << "Ochen sladkie konfeti : ";
			con.Nushnaja_konfeta(3.00, 6.00);
			break;
			}
	} while (a!=0);
	
	Begin::show();


    return 0;
}


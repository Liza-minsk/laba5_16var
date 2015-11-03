#pragma once
#include"Begin.h"
class Such
{
	
	
public:	
	Begin *s;
	static Such *head;
	Such *next;


	virtual void set(int, Begin*);
	virtual Begin* get(int);
	static void show();
	virtual void del(int);
	void add(Begin *);
};

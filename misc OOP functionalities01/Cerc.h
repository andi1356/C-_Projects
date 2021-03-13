/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#pragma once
#include "Figura.h"

class Cerc : public Figura
{
	int x, y, r;
public:
	double Arie();
	void Afisare();
	Cerc();
	Cerc(std::string culoareNoua, int a, int b, int c) : Figura(culoareNoua), x(a), y(b), r(c) {};
	~Cerc();
};

/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#pragma once
#include "Figura.h"
#include "Cerc.h"

class Dreptunghi : public Figura
{
	int x1, y1, x2, y2;
public:
	double Arie();
	void Afisare();
	double operator!();
	bool contine(Cerc c);
	Dreptunghi();
	Dreptunghi(std::string, int, int, int, int);
	~Dreptunghi();
};

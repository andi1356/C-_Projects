/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "Figura.h"
#include "Dreptunghi.h"
#include "Cerc.h"
#include <iostream>
#include <vector>
int main()
{
	Figura f1("rosu");
	f1.Afisare();

	Dreptunghi d1;
	d1.Afisare();
	Dreptunghi d2("alb", 1, 1, 2, 2);
	d2.Afisare();
	std::cout << "Aria dreptunghiului este: " << d2.Arie() << std::endl;
	std::cout << "Perimetrul dreptunghiului este: " << !d2 << std::endl;

	Cerc c1;
	c1.Afisare();

	Cerc c2("Albastru", 0, 0, 1);
	c2.Afisare();
	std::cout << "Aria cercului este: " << c2.Arie() << std::endl;

	std::cout << std::endl << "Vectorul de pointeri la figura:" << std::endl;
	std::vector<Figura*> fig;
	Dreptunghi d3("Galben", 1, 1, 3, 3);
	Cerc c3("Verde", 0, 0, 2);
	fig.push_back(&d2);
	fig.push_back(&d3);
	fig.push_back(&c2);
	fig.push_back(&c3);

	for (std::vector<Figura*>::iterator i = fig.begin(); i != fig.end(); i++)
	{
		(*i)->Afisare();
		std::cout << "Aria = " << (*i)->Arie() << std::endl;

	}
	return 0;
}

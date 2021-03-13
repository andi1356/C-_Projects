/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <iostream>
#include <vector>
#include "Timp.h"

int main()
{
	Timp t1;
	t1.citire();
	Timp t2(4, 30, "marti");
	std::cout << "T2 afisare:" << std::endl;
	t2.afisare();

	Timp t3(5,30,"marti");
	std::cout << "\nT3 afisare:" << std::endl;

	t3.afisare();


	Timp t4 = t3.operator+(t2);

	std::cout << "Afisare dupa supraincarcare" << std::endl;
	t4.afisare();



	std::vector <Timp> vect;
	vect.push_back(t1);
	vect.push_back(t2);
	vect.push_back(t3);
	vect.push_back(t4);

	std::cout << "\nDimensiunea vectorului= " << vect.size()<<std::endl;

	// Iteratorul:
	std::vector <Timp>::iterator it;

	for (it = vect.begin(); it != vect.end(); ++it){
		(*it).afisare();
		std::cout<<"\n";
	}

	Timp t10 = aduna<Timp>(t3, t2);
	t10.afisare();

	return 0;
}

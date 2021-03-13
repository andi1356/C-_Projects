/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <iostream>
#include <string>
#include "Timp.h"



void Timp::afisare()
{
	std::cout <<"Ora= "<< ora << " " <<"Minunte= "<< minunte <<" "<<"Ziua saptamanii= " << ziuaSaptamanii;
}


Timp::Timp()
{
	this->ora=0;
	this->minunte=0;
	this->ziuaSaptamanii="";
}

Timp::Timp(int oraa, int minuntee, std::string ziuaSaptamaniii) : ora(oraa), minunte(minuntee), ziuaSaptamanii(ziuaSaptamaniii)
{

}

Timp Timp::operator+(Timp c)
{
	Timp temp;
	if (c.ziuaSaptamanii == ziuaSaptamanii)
	{
		temp.ora = ora + c.ora;
		temp.minunte = minunte + c.minunte;
		temp.ziuaSaptamanii = c.ziuaSaptamanii;

		if (temp.minunte >= 60){
			temp.ora++;
			temp.minunte=temp.minunte-60;
		}
	}

	return temp;
}
void Timp::citire(){
	std::cout << "Ora= ";
	std::cin >> ora;
	std::cout << "Minunte= ";
	std::cin >> minunte;
	std::cout << "Ziua saptamanii=";
	std::cin >> ziuaSaptamanii;
}

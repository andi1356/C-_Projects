/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#pragma once

class Timp{
private:
	int ora, minunte;
	std::string ziuaSaptamanii;


public:
	Timp();
	Timp(int oraa, int minuntee, std::string ziuaSaptamaniii="");

	Timp operator+(Timp);

	void citire();
	void afisare();
};

template <typename T>
T aduna(T a, T b)
{
	T c;
	c = a + b;

	return c;
}

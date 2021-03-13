/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#ifndef angajat_h
#define angajat_h
#include <string>
#include <iostream>

class Angajat
{
protected:
    std::string nume;
    unsigned int varsta;
public:
    Angajat() {nume=""; varsta=0;}
    Angajat(std::string _nume, unsigned int _varsta): nume(_nume), varsta(_varsta) {}
    ~Angajat() {std::cout<<"s-a apelat destructorul: angajat\n";}
    void Afisare();
};

void Angajat::Afisare()
{
    std::cout<<"nume: "<<nume<<"\t varsta: "<<varsta<<std::endl;
}

#endif

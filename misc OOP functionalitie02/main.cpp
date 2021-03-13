/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "angajat.h"
#include "programator.h"
#include "teamleader.h"

int main()
{
    // Angajat a;
    // Angajat a1("ion",3);
    // a.Afisare();
    // a1.Afisare();

    Programator p;
    Programator p1("c++",2);
    Programator p2("c++",3);
    bool x;
    std::cout<<(x=p1>p2);
    p1.Afisare();
    p2.Afisare();

    return 0;
}

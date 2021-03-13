/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#ifndef teamleader_h
#define teamleader_h
#include <iostream>

class TeamLeader: public Angajat
{
protected:
    unsigned int nrProgramatori;
public:
    void Afisare();
    ~TeamLeader();
};


#endif

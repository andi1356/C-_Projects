/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#ifndef programator_h
#define programator_h
#include <string>
#include <iostream>

class Programator
{
protected:
    std::string limbajProgramare;
    unsigned int vechime;
public:
    Programator(){limbajProgramare=""; vechime=0;}
    Programator(std::string _limbajProgramare,unsigned int _vechime) : limbajProgramare(_limbajProgramare),vechime(_vechime) {}
    ~Programator() {std::cout<<"s-a apelat destructorul: Programator\n";}
    bool operator>(Programator);
    void Afisare();
};


#endif

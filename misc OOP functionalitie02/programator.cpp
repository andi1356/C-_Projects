/*
	Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include "programator.h"

bool Programator::operator>(Programator aux)
{
    if(this->vechime>aux.vechime)
        return true;
    else
    return false;
}

void Programator::Afisare()
{
    std::cout<<"Limbaj: "<<limbajProgramare<<"\t Vechime: "<<vechime<<std::endl;
}

/*argumente: numOfBuildings , int pt nr de cladiri,
*           buildingOpenTime , int[] pt ora la care se deschide fiecare cladire
*           offLoadTime , int[] reprezentand timpul de descarcare pt fiecare livrare
*
*	  Author: Andrei-Antonio Robu (andrei-antonio.robu@student.tuiasi.ro)
*/
#include <iostream>
#include <vector>
#include <algorithm>
bool compA(int x,int y){ // compare DESCENDING
    return (x<y);
}
bool compD(int x,int y){ //compare ASCENDING
    return (x>y);
}
std::vector<int> sortVectorASC(std::vector<int> v){
    std::sort(v.begin(),v.end(),compA);
    return v;
}
std::vector<int> sortVectorDES(std::vector<int> v){
    std::sort(v.begin(),v.end(),compD);
    return v;
}
int max(int x,int y){
    return x>y ? x : y;
}


int shortestTime(int numOfBuildings,std::vector<int> buildingOpenTime,std::vector<int> offLoadTime){
    // std::vector<int>::iterator itB = buildingOpenTime.begin();
    // std::vector<int>::iterator itT = offLoadTime.begin();
    buildingOpenTime = sortVectorASC(buildingOpenTime);
    offLoadTime = sortVectorDES(offLoadTime);
    int time=buildingOpenTime[0]+offLoadTime[0];
    return time;
}

int main(){
    // int x[]={8,10};
    // int y[]={1,2,3};
    std::vector<int> buildingOpenTime;
    buildingOpenTime.push_back(10);
    buildingOpenTime.push_back(8);
    std::vector<int> offLoadTime;
    offLoadTime.push_back(2);
    offLoadTime.push_back(2);
    offLoadTime.push_back(3);
    offLoadTime.push_back(1);
    offLoadTime.push_back(8);
    offLoadTime.push_back(7);
    offLoadTime.push_back(4);
    offLoadTime.push_back(5);
    std::cout<<": "<<shortestTime(2,buildingOpenTime,offLoadTime);
}

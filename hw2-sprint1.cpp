#include <iostream>
#include <string> 
#include <fstream> 
#include "CarRental.h"
using namespace std; 

carRental* insertInfo();


int main(){

    car* newCar = new car(); 
    newCar->setVechicalInfo("sedan","Nissan",5,4);
    cout << newCar->getCapcity() << endl; 
    newCar->setNextPointer(new carRental()); 
    newCar->setVechicalInfo();
    return 0; 
}

carRental* insertInfo(){

}
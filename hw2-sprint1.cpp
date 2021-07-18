#include <iostream>
#include <string> 
#include <fstream> 
#include "CarRental.h"
using namespace std; 

int main(){

    car* newCar = new car(); 
    newCar->setVechicalInfo("sedan","Nissan",5,4);
    cout << newCar->getCapcity() << endl; 



    return 0; 
}
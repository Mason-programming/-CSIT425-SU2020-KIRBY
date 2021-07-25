#include <iostream>
#include <string> 
#include <fstream> 
#include "CarRental.h"
using namespace std; 

carRental* insertInfo();
void printAllVehicles();
void menu();

int main(){

    truck* newTruck = new truck();
    newTruck->setVechicalInfo("tuck","ford",5,6);

    car* newCar = new car(); 
    newCar->setVechicalInfo("sedan","Nissan",5,4);
    cout << newCar->getCapcity() << endl; 
    newCar->setNextPointer(new carRental()); 
    newCar->setVechicalInfo();
    return 0; 
}

void menu(){
    int keyStroke = 0; 
    cout << "Enter a menu option"<< "\n" << "Press 2 to print all cars" << "\n" << "Press 3 to select which capcity of car to print" << endl; 
    if(keyStroke == 2){
       printAllVehicles();
    }else if(keyStroke == 3){
        

    }else{

        cout << "Please choose from the list"<< endl;
        menu(); 
    }
}
void printAllVehicles(){
    if()
    for(int)
}
carRental* insertInfo(){

}
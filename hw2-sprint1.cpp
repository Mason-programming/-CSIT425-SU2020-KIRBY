#include <iostream>
#include <string>  
#include "CarRental.h"
using namespace std; 
    carTypes newCar; 
    carTypes oldCar; 
    carTypes carNum2;
    carTypes carNum3; 
    carRental carList;

void menu();    

int main(){
    menu();
    return 0; 
}

void menu(){
    newCar.setTypes("sedan","Nissan",5,4);
    oldCar.setTypes("truck","ford",5,3);
    carNum2.setTypes("SUV","dodge",5,4);

    carList.insertFirst(newCar);
    carList.insertFirst(oldCar);
    carList.insertFirst(carNum2);
    int keyStroke = 0; 
    int caps = 0; 
    cout << "please choose from the list" << endl; 
    cout << "to print out the entire inventory of cars press 1" << endl; 
    cout << "the choose a capacity press 2" << endl; 
    cout << "to enter more car information press 3" << endl;
    cout << "to quite press 4" << endl;
    cin >> keyStroke; 
    
    if(keyStroke == 1){
        carList.printCarList();
        cout << endl; 
        keyStroke = 0;
        menu();
    }
    if(keyStroke == 2){
        cout << "Enter the capacity: ";
        cin >> caps; 
        carList.printCapacity(caps);
        cout << endl;
        keyStroke = 0;
        menu();
    }
    if(keyStroke == 3){
        cout << "enter the car type " << endl;
        string cType = ""; 
        cin >> cType; 
        cout << "enter the brand name " << endl; 
        string bName = ""; 
        cin >> bName; 
        cout << "enter the number in stock " << endl;
        int sNum = 0;
        cin >> sNum; 
        cout << "enter the capacity " << endl; 
        int cNum = 0; 
        cin >> cNum; 
        carNum3.setTypes(cType,bName,sNum,cNum);
        carList.insertFirst(carNum3); 
        carList.printCarList();
        keyStroke = 0; 
        menu();
    }else if(keyStroke == 4){
        cout << endl;
        keyStroke = 0; 
    }
    else{
        cout << "please choose from the list" << endl;
        cout << endl;
        keyStroke = 0;   

    }
}
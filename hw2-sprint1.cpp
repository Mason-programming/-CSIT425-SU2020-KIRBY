#include <iostream>
#include <string>  
#include "CarRental.h"
using namespace std; 
    carTypes newCar; 
    carTypes oldCar; 
    carTypes carNum2;
    carTypes carNum3;
    carTypes carNum4;
    carTypes carNum5;
    carTypes carNum6;
    carRental carList;

void menu();
void wrongNum(); 
void inserIntoList();
void insertNewCar();

int main(){
    inserIntoList();
    
    return 0; 
}

void menu(){
  
    int keyStroke = 0;
    int caps = 0;
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
    else if(keyStroke == 2){
        cout << "Enter the capacity: ";
        cin >> caps;
        carList.printCapacity(caps);
        cout << endl;
        keyStroke = 0;
        menu();
    }
    else if(keyStroke == 3){
        insertNewCar();
    }
    /// how to quite the program 
    else if(keyStroke == 4){
        cout << "Good Bye!!!" << endl;
        keyStroke = 0;
    }else{
        /// if the user pushes a key stroke that is not in the list 
        wrongNum(); 
    }
}

// the wrong key stroke function 
void wrongNum(){
    cout << "Please choose from the list." << endl; 
    cout << endl; 
    menu(); 
}

void inserIntoList(){
    newCar.setTypes("sedan","Nissan",5,4);
    oldCar.setTypes("truck","ford",5,3);
    carNum2.setTypes("SUV","dodge",5,4);
    carNum4.setTypes("truck","dodge",5,4);
    carNum5.setTypes("Motorcycle","dodge",5,2);
    carNum6.setTypes("car","dodge",5,4);

    carList.insertLast(newCar);
    carList.insertLast(carNum4);
    carList.insertLast(carNum5);
    carList.insertLast(carNum6);
    carList.insertLast(oldCar);
    carList.insertLast(carNum2);
    menu();
}

void insertNewCar(){
    int keyStroke = 0;
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
    carList.insertLast(carNum3);
    keyStroke = 0;
    cout << endl;
    menu();
}

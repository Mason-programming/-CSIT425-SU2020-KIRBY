#include <iostream>
#include <string>
using namespace std; 

class carRental{
    string type; 
    string brand;
    int number; 
    int capacity; 
    carRental* link; 
public: 
    carRental(){
        type = "";
        brand = "";
        number = 0; 
        capacity = 0; 
    }; 
    carRental(string type,string brand, int num, int cap){
        type = type; 
        brand = brand; 
        number = num; 
        capacity = cap;
    };
};

class car: public carRental{
    

};
class truck: public carRental{

};
class motorcycle: public carRental{

};
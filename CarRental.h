#include <iostream>
#include <string>
using namespace std; 

class carRental{

protected: 
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
    int insert(); 

};

class car: private carRental{
    double millage; 
public:
    car():carRental(){
        millage = 0; 
    }
    car(string type, string brand, int num, int cap, double mile):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        millage = mile; 
    }
};
class SUV: private carRental{
    double millage; 
public: 
    SUV(double mile):carRental(){
        millage = mile;
    }
    SUV(string type, string brand, int num, int cap, double mile):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        millage = mile; 
    }

};
class truck: private carRental{
    double millage; 
public: 
    truck(double mile):carRental(){
        millage = mile;
    }
    truck(string type, string brand, int num, int cap, double mile):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        millage = mile; 
    }
};
class motorcycle: private carRental{
    double millage; 
public: 
    motorcycle(double mile):carRental(){
        millage = mile;
    }
    motorcycle(string type, string brand, int num, int cap, double mile):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        millage = mile; 
    }
};
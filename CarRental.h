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
};

class car: private carRental{
    car* link; 
public:
    car():carRental(){
       link  = nullptr;  
    }
    car(string type, string brand, int num, int cap):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        link = nullptr;  
    }

    void setVechicalInfo(string type, string brand, int num, int cap){
        type = type;
        brand = brand; 
        number = num; 
        capacity = cap; 
    }
    void setNextPointer(car* NC){link = NC;}
    int getCapcity(){return capacity;}
    car* setNextPointer(){return link; }


};
class SUV: private carRental{
    SUV* link;
public: 
    SUV():carRental(){
        link = nullptr;
    }
    SUV(string type, string brand, int num, int cap):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
         
    }
    void setNextPointer(SUV* NC){link = NC;}
    int getCapcity(){return capacity;}
    SUV* setNextPointer(){return link; }

};
class truck: private carRental{
    truck* link; 
public: 
    truck():carRental(){
        link = nullptr;
    }
    truck(string type, string brand, int num, int cap):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap;   
    }
    void setNextPointer(truck* NC){link = NC;}
    int getCapcity(){return capacity;}
    truck* setNextPointer(){return link; }
};
class motorcycle: private carRental{
    motorcycle* link;  
public: 
    motorcycle():carRental(){
        link = nullptr;
    }
    motorcycle(string type, string brand, int num, int cap):carRental(){
        type = type;
        brand = brand; 
        number = num;
        capacity = cap; 
        link = nullptr;
    }
    void setNextPointer(motorcycle* NC){link = NC;}
    int getCapcity(){return capacity;}
    motorcycle* setNextPointer(){return link; }
};
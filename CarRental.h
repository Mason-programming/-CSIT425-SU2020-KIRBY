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
    carRental* link; 
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
    void setNextPointer(carRental* NC){link = NC;}
    int getCapcity(){return capacity;}
    carRental* setNextPointer(){return link; }


};
class SUV: private carRental{
    carRental* link;
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
    void setVechicalInfo(string type, string brand, int num, int cap){
        type = type;
        brand = brand; 
        number = num; 
        capacity = cap; 
    }
    void setNextPointer(carRental* NC){link = NC;}
    int getCapcity(){return capacity;}
    carRental* setNextPointer(){return link; }

};
class truck: private carRental{
    carRental* link; 
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
    void setVechicalInfo(string type, string brand, int num, int cap){
        type = type;
        brand = brand; 
        number = num; 
        capacity = cap; 
    }
    void setNextPointer(carRental* NC){link = NC;}
    int getCapcity(){return capacity;}
    carRental* setNextPointer(){return link; }
};
class motorcycle: private carRental{
    carRental* link;  
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
    void setVechicalInfo(string type, string brand, int num, int cap){
        type = type;
        brand = brand; 
        number = num; 
        capacity = cap; 
    }
    void setNextPointer(carRental* NC){link = NC;}
    int getCapcity(){return capacity;}
    carRental* setNextPointer(){return link; }
};
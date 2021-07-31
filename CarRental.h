#include <iostream>
#include <string>
#include "unorderLinkedList.h"
using namespace std; 

class carTypes{
// protected varibles 
protected: 
    string type; 
    string brand;
    int number; 
    int capacity; 
public: 
    carTypes(){
        type = "";
        brand = "";
        number = 0; 
        capacity = 0; 
    }; 
    carTypes(string type,string brand, int num, int cap){
        type = type; 
        brand = brand; 
        number = num; 
        capacity = cap;
    };
    // mutator functions for setting the car values 
    void setTypes(string t,string b, int num, int cap){
        type = t; 
        brand = b; 
        number = num; 
        capacity = cap;
    }
    // get the values from the carTypes class 
    int getNumber(){return number;}
    string getType(){return type;}
    int getCap(){return capacity;}
    string getBrand(){return brand;}
    
};

// carRental sub class derived from unorder linked list with carTypes as the data type 
class carRental: public unorderLinkedList<carTypes>{
    
public: 

    void printCapacity(int c){
        Node<carTypes> *curr;
        if(first == nullptr){
            cout << "All cars have been sold." << endl; 
        }else{
            curr = first;
            while(curr != nullptr){
                if(c == curr->info.getCap()){
                    cout << curr->info.getType() << ", " << curr->info.getBrand() << "; there are " << curr->info.getNumber() << " in stock" << endl ;
                    curr = curr->link; 

                }
                else{
                    curr = curr->link; 
                    if(curr->link == nullptr){
                        break; 
                    }
                }
            }
        }
    }

    void printCarList(){
        Node<carTypes>* curr;
        if(first == nullptr){
            cout << "All cars have been sold." << endl; 
        }else{
            curr = first; 
        while(curr != nullptr){
            cout << curr->info.getType() << ", " << curr->info.getBrand() << "; there are " << curr->info.getNumber() << " in stock" << endl ;
             curr = curr->link; 
             if(curr == nullptr){
                 break; 
             }
            } 
        }
        
    }
};

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

    int getCount(Node<carTypes> *head){
        int count = 0; 
        Node<carTypes> *curr = head; 
        // find the length of the linked list 
        while (curr != nullptr){
            count++; 
            curr = curr->link;
        }
        return count; 
    }

    void printCapacity(int c){
        Node<carTypes> *curr;
        int check = 0; 
        if(first == nullptr){
            cout << "All cars have been sold." << endl; 
        }else{
            curr = first;
            int length = getCount(curr); 
            while(curr != nullptr){
                if(c == curr->info.getCap()){
                    cout << curr->info.getType() << ", " << curr->info.getBrand() << "; there are " << curr->info.getNumber() << " in stock" << endl ;
                   
                    curr = curr->link; 
                    
                }
                 else{
                    check++; 
                    curr = curr->link;
                    // check if the length of the linked list is == to check varible
                    if(check == length){
                        cout << "\ncould not find the item in the list." << endl;
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
                } 
        }
        
    }
};

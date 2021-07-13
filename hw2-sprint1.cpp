#include <iostream>
using namespace std; 

int sum(int x){
    if(x == 10){
        return x; 
    }else{
        cout << x << endl; 
        return sum(x + 1); 
    }
}

int main(){

    sum(0);
    return 0; 
}
#include <iostream>
#include <string>
using namespace std ;
int age,tall,bouty;

int main(){
    cout << "Enter your age: ";
    cin >> age;
    if (age <= 25){
        cout << "Enter your height: ";
        cin >> tall;
        if (tall < 100){
            cout << "Your character = Chopper" ; 
        }
        else if (tall < 180){
            cout << "Your character = Usopp" ; 
        }
        else if (tall >= 180){
            cout << "Enter your bounty: ";
            cin >> bouty;
            if (bouty > 1100000000){
                cout << "Your character = Zoro" ; 
            }
            else if (bouty <= 1100000000){
                cout << "Your character = Sanji" ; 
            }
           
        }

    }
else if (age > 25 && age <=60 ){
            cout << "Enter your bounty: ";
            cin >> bouty;
            if (bouty > 500000000){
                cout << "Your character = Jinbe" ; 
            }
            else if (bouty <= 500000000){
                cout << "Your character = Franky" ; 
            }

    }
else if (age > 60) {
        cout << "Your character = Brook" ; 
    }
    
}




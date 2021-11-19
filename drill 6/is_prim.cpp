#include "std_lib_facilities.h"

bool is_prime(int numb){
    bool prime=true;
    if (numb<=1)   
    {
        prime=false;
    }
    for (int i = 2; i < numb; i++)
    {
        if (numb%i==0){
            prime=false;
        }
    }
    return prime;
    
}

int main(){

    int number=0;
    cout <<  "Enter your number and i'll tell you if it is prime or not" << endl; 
    cin >> number;
    bool prime = is_prime(number);
    if (prime)
    {
        cout << "your number is prime" << endl;
    }else{
        cout << "your number is not a prime" << endl;
    }
    
}
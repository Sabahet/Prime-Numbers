//
//  main.cpp
//  Prime Numbersssss
//
//  Created by Sabahet Alovic on 10/7/19.
//  Copyright © 2019 Sabahet Alovic. All rights reserved.
//

#include <iostream>
using namespace std;
void displayPrime();
void isPrime(int);
int main() {
    int x;
    cout << "Please enter a number and ill display all prime numbers less than that value";
    cin >> x;
    isPrime(x);
    

    
    return 0;
}
void isPrime(int x){
    if(x==1){
        cout << "1";
    }

    while(x>=1){
        int count2=2;
    for (int i = x; i> 1; i--){
        
        if(x%i >= 1 ){
            count2 ++;
        }
        if(count2 == x){
           cout << x << " ";
    }
    }
          x--;
}
}


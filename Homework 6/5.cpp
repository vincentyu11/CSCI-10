//
//  5.cpp
//  5
//
//  Created by Vincent Yu on 11/2/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

long long int strToInt(char s[]);

int main() {
    char str[1024];
    cout <<"Enter an integer as a string: " <<endl;
    cin.getline(str, 1024);
    cout << strToInt(str) <<endl;
    
    return 0;
}

long long int strToInt(char str[]){
    long long int a = 0;
    for (int i = 0; str[i] != '\0'; ++i){
        a = a*10 + str[i] - '0';
    }
    return a;
}

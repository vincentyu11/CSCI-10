//
//  4.cpp
//  4
//
//  Created by Vincent Yu on 11/3/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string removevowels(string s);

int main() {
    string s;
    cout << "Enter a string: " <<endl;
    getline(cin, s);

    cout <<removevowels(s) <<endl;
    
    return 0;
}


string removevowels(string s){
    for (int i=0; i<s.length();i++){
        if (s[i] == 'a' || s[i] == 'A'){
            s[i] = '\b';
        }
        if (s[i] == 'e' || s[i] == 'E'){
            s[i] = '\b';
        }
        if (s[i] == 'i' || s[i] == 'I'){
            s[i] = '\b';
        }
        if (s[i] == 'o' || s[i] == 'O'){
            s[i] = '\b';
        }
        if (s[i] == 'u' || s[i] == 'U'){
            s[i] = '\b';
        }
    }
    return s;
}

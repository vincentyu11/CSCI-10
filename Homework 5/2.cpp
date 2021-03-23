//
//  2.cpp
//  2
//
//  Created by Vincent Yu on 10/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

const int size = 4;

void deleteRepeats(char letters[], int size, int& numberOfLetters);

int main(){
    char stringOfLetters[size] = {'a','b','a','c'};
    int letterCount = 4;
    
    deleteRepeats(stringOfLetters, size, letterCount);
    
    for (int i=0; i<letterCount; i++){
        cout<<stringOfLetters[i];
    }
    cout <<"\nLetter count: "<< letterCount <<endl;
    
    return 0;
}

void deleteRepeats(char letters[], int size, int& numberOfLetters){
    int n = 0;
    for(int i = 0; i < numberOfLetters; i++){
        bool found = false;
        for(int j = 0; j < n; j++){
            if(letters[i] == letters[j])
                found = true;
        }
        if(!found)
            letters[n++] = letters[i];
    }
    numberOfLetters = n;
}

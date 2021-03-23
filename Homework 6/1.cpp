//
//  1.cpp
//  1
//
//  Created by Vincent Yu on 11/2/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void uppercase(char sentence[]);
void lowercase(char sentence[]);
void spaces(char sentence[]);

int main() {
    char sentence[100];
    cout <<"Enter a line up to 100 characters: " <<endl;
    cin.getline(sentence,100);

    lowercase(sentence);
    uppercase(sentence);
    spaces(sentence);
    
    cout <<sentence <<endl;
    
    return 0;
}

void lowercase(char sentence[]){
    for (int i=0; i<strlen(sentence); i++){
        sentence[i] = tolower(sentence[i]);
    }
}

void uppercase(char sentence[]){
    if (sentence[0] != ' '){
        sentence[0] = toupper(sentence[0]);
    }
}

void spaces(char sentence[]){
    for (int i=0; i<strlen(sentence); i++) {
        if (sentence[i] == ' ' && sentence[i+1] == ' ') {
            sentence[i]='\b';
        }
    }
}

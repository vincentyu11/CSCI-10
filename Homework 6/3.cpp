//
//  3.cpp
//  3
//
//  Created by Vincent Yu on 11/2/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

void removeLead(char input[]);
void uppercase(char input[]);
void spaces(char input[]);
void dashes(char input[]);
void aAnThe(char input[]);

int main() {
    char input[1024];
    cout <<"Input name of title and author: " <<endl;
    cin.getline(input,1024);
    
    removeLead(input);
    spaces(input);
    dashes(input);
    aAnThe(input);
    uppercase(input);
  
    cout <<input <<endl;
    
    return 0;
}

void removeLead(char input[]){
    if (isalpha(input[0]) == false) {
        input[0] = '\b';
    }
 
}

void uppercase(char input[]){
    if (input[0] != ' '){
        input[0] = toupper(input[0]);
    }
    if (input[0] == '\b'){
        input[1] = toupper(input[1]);
    }
}

void spaces(char input[]){
    for (int i=0; i<strlen(input); i++) {
        if (input[i] == ' ' && input[i+1] == ' ') {
            input[i]='\b';
        }
    }
}

void dashes(char input[]){
    for (int i=0; i<strlen(input);i++){
        if (input[i] == '-') {
            input[i] = ' ';
        }
    }
}

void aAnThe(char input[]){
    for (int i=0; i<strlen(input); i++){
        if (input[i] == 'A' && input[i+1] == 'n' && input[i+2] == ' '){
            input[i] = '\b';
            input[i+1] = '\b';
            input[i+2] = '\b';
        }
        if (input[i] == 'A' && input[i+1] == ' '){
            input[i] = '\b';
            input[i+1] = '\b';
            input[i+2] = '\b';
        }
        if (input[i] == 'T' && input[i+1] == 'h' && input[i+2] == 'e' && input[i+3] == ' '){
            input[i] = '\b';
            input[i+1] = '\b';
            input[i+2] = '\b';
        }
    }
}


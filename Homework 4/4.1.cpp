//
//  4.1.cpp
//  4.1
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

void input(int& hours, int& minutes, char& m);
void convert(int& hours, int& minutes, char& m);
void output(int& hours, int& minutes, char& m);

int main() {
    int hours, minutes;
    char m, restart;
    
    do {
        input(hours, minutes, m);
        convert(hours, minutes, m);
        output(hours, minutes, m);
        
        cout << "Enter 'Y' or 'y' to run the program again or any other key to end the program" <<endl;
        cin >> restart;
    } while ((restart == 'Y') || (restart == 'y'));
    
    return 0;
}

void input(int& hours, int& minutes, char& m){
    do {
        cout <<"Enter the hour between 0 and 23:" <<endl;
        cin >> hours;
        if (hours > 23){
            cout <<"Please enter an hour between 0 and 23" <<endl;
        }
    }
    while (hours > 23);
    do {
        cout <<"Enter the minute between 0 and 59:" <<endl;
        cin >> minutes;
        if (minutes > 59){
            cout <<"Please enter a minute between 0 and 59" <<endl;
        }
    }
    while (minutes > 59);
}

void convert(int& hours, int& minutes, char& m){
    if (hours > 12){
        hours = hours - 12;
        m = 'P';
    }
    else if (hours == 12){
        m = 'P';
    }
    else {
        m = 'A';
    }
}

void output(int& hours, int& minutes, char& m){
    if(m == 'P'){
        if(minutes < 10){
            cout <<"The time in 12-hour format is: " << hours << ":0" << minutes << " P.M.";
        }
        else {
            cout <<"The time in 12-hour format is: " << hours <<":" << minutes <<" P.M." <<endl;
        }
    }
    else{
        if(minutes < 10){
            cout <<"The time in 12-hour format is: " << hours << ":0" << minutes << " A.M.";
        }
        else cout <<"The time in 12-hour format is: " << hours << ":" << minutes << " A.M.";
    }
}


//
//  4.13.cpp
//  4.13
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

double convertToMPH(int minutes, int seconds);
double convertToMPH(double kph);

int main() {
    double minutes, seconds, kph;
    
    cout <<"Enter the minutes of your pace: " <<endl;
    cin >> minutes;
    cout <<"Enter the seconds of your pace: " <<endl;
    cin >> seconds;
    
    cout <<convertToMPH(minutes, seconds) <<" mph" <<endl;
    
    cout << "Please enter your speed in KPH: ";
    cin >> kph;
    cout <<convertToMPH(kph) <<" mph" <<endl;
    
    return 0;
}

double convertToMPH(int minutes, int seconds){
    return (60/(minutes+(seconds/60)));
}

double convertToMPH(double kph){
    return (kph/1.61);
}

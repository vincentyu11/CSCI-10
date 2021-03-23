//
//  main.cpp
//  #7pp141
//
//  Created by Vincent Yu on 10/14/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double windchill(double v, double t){
    double W;
    W = (33 - ((((10 * sqrt(v)) - v) + 10.5) * (33 - t)) / 23.1);
    return W;
}

int main() {
    double v,t;
    
    cout << "Enter the wind speed in m/sec: " <<endl;
    cin >> v;
    cout << "Enter the temperature (less than 10) in degrees Celcius: " <<endl;
    cin >> t;
    
    if (t>10){
        cout << "Temperature is greater than 10 degrees Celcius. The program will now quit. " <<endl;
        exit (0);
    }
    
    cout <<"The windchill index is: " <<windchill(v,t) <<endl;
    
    return 0;
}

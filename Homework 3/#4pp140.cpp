//
//  main.cpp
//  #4 pp140
//
//  Created by Vincent Yu on 10/14/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double gforce(double mass1, double mass2, double distance) {
    const double G = (6.673 * (pow(10.0, -8.0)));
    double F;
    F = (((G * mass1) * mass2) / (pow(distance, 2)));
    return F;
}

int main() {
    double mass1, mass2, distance, F;
    
    cout << "What is the first mass?" <<endl;
    cin >> mass1;
    cout << "What is the second mass?" <<endl;
    cin >> mass2;
    cout << "What is the distance between the two masses?" <<endl;
    cin >> distance;
    
    cout << "The gravitational force is: " << gforce(mass1, mass2, distance) << " g*cm/sec^2" <<endl;
    
    return 0;
}

//
//  main.cpp
//  gallonsliters
//
//  Created by Vincent Yu on 9/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double gallons;
    double liters;
    
    cout << "Enter the number of gallons:";
    cin >> gallons;

    liters = gallons*3.78541;
    cout << "Liters=" << liters;
    
}

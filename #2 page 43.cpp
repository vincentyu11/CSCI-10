//
//  #2 page 43.cpp
//  gallonsliters
//
//  Created by Vincent Yu on 9/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    const double sweetenerSoda = 0.001;
    double sweetenerMouse;
    double weightMouse;
    double sweetenerPerson;
    double weightPersonStop;
    int numberOfCans;

    cout << "Enter how much artificial sweetener in grams is needed to kill a mouse?";
    cin >> sweetenerMouse;

    cout << "Enter the weight of the mouse in grams?";
    cin >> weightMouse;

    cout << "Enter the weight that the person wants to stop dieting";
    cin >> weightPersonStop;

    sweetenerPerson = (sweetenerMouse/weightMouse)*weightPersonStop;
    numberOfCans = (sweetenerPerson/sweetenerSoda);
    
    cout << "The amount of cans the person will need to drink in order to kill himself is:" << numberOfCans;

}


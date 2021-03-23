//
//  main.cpp
//  #7 pg 44
//
//  Created by Vincent Yu on 9/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
        double mets;
        double weight;
        double minutes;
        double calories;
        
        cout << "What is your weight in pounds?";
        cin >>weight;
        
        cout << "How many METS (metabolic equivalents) is your activity?";
        cin >> mets;
        
        cout << "How many minutes were you doing the activity for?";
        cin >> minutes;
        
        weight = (weight/2.2);
        calories = ((0.0175*mets)*weight);
        calories = calories*minutes;
        
        cout << "This is how many calories you burned:" <<calories;
}


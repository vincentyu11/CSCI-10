//
//  main.cpp
//  1
//
//  Created by Vincent Yu on 10/14/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    double height;
    
    cout << "What is your name? " << endl;
    cin >> name;
    
    if (name == "katie" || name == "Katie")
        cout << "Let's go to the Winchester Mystery House!" <<endl;
    else
        cout << "What is your age in years? " <<endl;
        cin >> age;
        cout << "What is your height in feet? " <<endl;
        cin >> height;
    
        if (height>=5){
            if (age>=12)
                cout << "Let's go to Great America!" <<endl;
            else
                cout << "Let's go to the carnival!" <<endl;
        }
        else if (height<5){
            if (age >=12)
                cout << "Let's go to the mall!" <<endl;
            else
                cout << "Let's go to Chuck E. Cheese!" <<endl;
    }
    return 0;
}

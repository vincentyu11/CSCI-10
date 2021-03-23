//
//  1.cpp
//  1
//
//  Created by Vincent Yu on 10/28/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int size;
    int counter = 0;
    cout <<"How many scores to enter?" <<endl;
    cin >>size;
    double value, average, a[size], max, min;
    double total=0;
    
    
    for (int i=0; i<1; i++) {
        cout <<"Enter score between 0 and 30: " <<endl;
        cin >>value;
        if (value <= 30 && value >=0) {
            a[0] = value;
            counter = counter + 1;
            total = total + value;
            max = value;
            min = value;
        }
        else{
            cout <<"That is an invalid score. Please enter a valid score."<<endl;
            i--;
        }
    }
    
    for (int i=1; i<size; i++) {
        cout <<"Enter score between 0 and 30: " <<endl;
        cin >>value;
        if (value <= 30 && value >=0) {
            a[i] = value;
            counter = counter + 1;
            total = total + value;
            if (value > max) {
                max = value;
            }
            if (value < min) {
                min = value;
            }
        }
        else{
            cout <<"That is an invalid score. Please enter a valid score."<<endl;
            i--;
        }
    }
    average = total/counter;
    cout <<"The average score is: " <<average <<endl;
    cout <<"The lowest score is: " <<min <<endl;
    cout <<"The highest score is: " <<max <<endl;
    
    return 0;
}

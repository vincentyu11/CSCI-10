//
//  main.cpp
//  2b
//
//  Created by Vincent Yu on 10/14/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//


#include <iostream>
using namespace std;

int main() {
    double score=0;
    double total=0;
    double counter=0;
    double average;
    
    cout << "Enter the score. After entering a score, press enter to add an additional score. Enter -1 to submit to find the average." <<endl;
    cout << "\nWhat is the score? " <<endl;
    
    do {
        cin >> score;
        if ((score >= (-1)) && (score <= 30)){
            total = (total+score);
            counter++;
            average = ((total+1)/(counter-1));
        }
        if (score >30){
            cout << "That is not a valid score! Please input another score!" <<endl;
            }
    } while (score != (-1));
    
    cout << "The average is: " <<average <<endl;
    
    return 0;
}

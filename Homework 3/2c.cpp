//
//  main.cpp
//  2c
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
    double number, min, max;
    
    cout << "Enter the score. After entering a score, press enter to add an additional score. Enter -1 when you are done to find the average." <<endl;
    cout << "\nWhat is the score? " <<endl;
    cin >> score;
    total = (total+score);
    counter++;
    average = ((total+1)/(counter-1));
    number = score;
    max = number;
    min = number;
    
    do {
        cin >> score;
        
        if ((score >= (-1)) && (score <= 30)){
            total = (total+score);
            counter++;
            average = ((total+1)/(counter-1));
        
            if (score > number){
                max = score;
            }
            if ((score < number) && (score >=0)){
                min = score;
            }
        }
        if (score >30){
            cout << "That is not a valid score! Please input another score!" <<endl;
        }
    } while (score != (-1));
    
    cout << "The average is: " <<average <<endl;
    cout << "The lowest score is: " << min <<endl;
    cout << "The highest score is: " << max <<endl;
    return 0;
}

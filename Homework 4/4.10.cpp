//
//  4.10.cpp
//  4.10
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

void Linput(double& feet, double& inches, double& meters, double& centimeters, int choice);
void Lcompute(double& feet, double& inches, double& meters, double& centimeters, int choice);
void Loutput(double& meters, double& centimeters, double& feet, double& inches, int choice);

void Winput(double& pounds, double& ounces, double& kilograms, double& grams, int choice);
void Wcompute(double& pounds, double& ounces, double& kilograms, double& grams, int choice);
void Woutput(double& kilograms, double& grams, double& pounds, double& ounces, int choice);



int main() {
    double feet, inches, meters, centimeters, pounds, ounces, kilograms, grams;
    char restart, begin;
    int choice;
    
    cout <<"Enter 'L' to convert length or 'W' to convert weight: " <<endl;
    cin >> begin;
    
    if (begin == 'L') {
        cout <<"Enter '1' to convert feet and inches to meters and centimeters or '2' to convert meters and centimeters to feet and inches: " <<endl;
        cin >> choice;
        do {
            Linput(feet, inches, meters, centimeters, choice);
            Lcompute(feet, inches, meters, centimeters, choice);
            Loutput(feet, inches, meters, centimeters, choice);
            
            cout <<"Enter lowercase 'y' if you would like to run the program again. Else enter any other key to end the program" <<endl;
            cin >>restart;
        } while (restart == 'y');
    } else {
        cout <<"Enter '1' to convert pounds and ounces to kilograms and grams or '2' to convert kilograms and ounces to pounds and ounces: " <<endl;
        cin >> choice;
        do {
            Winput(pounds, ounces, kilograms, grams, choice);
            Wcompute(pounds, ounces, kilograms, grams, choice);
            Woutput(pounds, ounces, kilograms, grams, choice);
   
            cout <<"Enter lowercase 'y' if you would like to run the program again. Else enter any other key to end the program" <<endl;
            cin >>restart;
        } while (restart == 'y');
    }
    return 0;
}



void Linput(double& feet, double& inches, double& meters, double& centimeters, int choice){
    if (choice == 1) {
        cout << "Enter the number of feet: " <<endl;
        cin >> feet;
        cout << "Enter the number of inches: " <<endl;
        cin >> inches;
    }
    else {
        cout << "Enter the number of meters: " <<endl;
        cin >> meters;
        cout << "Enter the number of centimeters: " <<endl;
        cin >> centimeters;
        
    }
}


void Lcompute(double& feet, double& inches, double& meters, double& centimeters, int choice){
    if (choice == 1) {
        feet = (feet * 0.3048);
        inches = (inches * 2.54);
    }
    else {
        meters = (meters * 3.2808);
        centimeters = (centimeters * 0.3937);
    }
}


void Loutput(double& meters, double& centimeters, double& feet, double& inches, int choice){
    if (choice == 1) {
        cout <<meters <<" meters and " <<centimeters <<" centimeters." <<endl;
    }
    else {
    cout <<feet <<" feet and " <<inches <<" inches." <<endl;
    }
}

void Winput(double& pounds, double& ounces, double& kilograms, double& grams, int choice){
    if (choice == 1) {
        cout << "Enter the number of pounds: " <<endl;
        cin >> pounds;
        cout << "Enter the number of ounces: " <<endl;
        cin >> ounces;
    }
    else {
        cout << "Enter the number of kilograms: " <<endl;
        cin >> kilograms;
        cout << "Enter the number of grams: " <<endl;
        cin >> grams;
    }
}

void Wcompute(double& pounds, double& ounces, double& kilograms, double& grams, int choice){
    if (choice == 1) {
        pounds = (pounds * 0.4536);
        ounces = (ounces * 28.3495);
    }
    else {
        kilograms = (kilograms * 2.2046);
        grams = (grams * 0.035274);
    }
}


void Woutput(double& kilograms, double& grams, double& pounds, double& ounces, int choice){
    if (choice == 1) {
        cout <<kilograms <<" kilograms and " <<grams <<" grams." <<endl;
    }
    else {
        cout <<pounds <<" pounds and " <<ounces <<" ounces." <<endl;
    }
}



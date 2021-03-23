//
//  2.cpp
//  2
//
//  Created by Vincent Yu on 11/8/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

struct Fraction{
    int numerator, denominator;
};

void printFraction(Fraction f);
Fraction mult(Fraction f1, Fraction f2);
Fraction add(Fraction f1, Fraction f2);

int main() {
    Fraction f1;
    Fraction f2;
    f1.numerator = 3;
    f1.denominator  = 4;
    f2.numerator = 5;
    f2.denominator = 6;
    
    printFraction(f1);
    printFraction(f2);
    cout <<"Multiplied is: " <<mult(f1,f2).numerator <<"/" <<mult(f1, f2).denominator <<endl;
    cout <<"Added is: " <<add(f1, f2).numerator <<"/" <<add(f1, f2).denominator <<endl;
    return 0;
}


void printFraction(Fraction f){
    cout <<"Fraction is: " <<f.numerator <<"/" <<f.denominator <<endl;
}

Fraction mult(Fraction f1, Fraction f2){
    Fraction result;
    result.numerator = (f1.numerator * f2.numerator);
    result.denominator = (f1.denominator * f2.denominator);
    return (result);
}

Fraction add(Fraction f1, Fraction f2){
    Fraction sum;
    sum.numerator = ((f1.numerator * f2.denominator) + (f2.numerator * f1.denominator));
    sum.denominator = (f1.denominator * f2.denominator);
    return (sum);
}

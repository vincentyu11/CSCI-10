//
//  4.2.cpp
//  4.2
//
//  Created by Vincent Yu on 10/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void input(double& sideA, double& sideB, double& sideC);
void compute(double a, double b, double c, double& perimeter, double& area);
void output(double perimeter, double area);

int main() {
    double perimeter, area, a, b, c;
    
    input(a, b, c);
    compute(a, b, c, perimeter, area);
    output(perimeter, area);
    
    return 0;
}

void input(double& sideA, double& sideB, double& sideC){
    do {
        cout <<"Enter side A:" <<endl;
        cin >>sideA;
        cout <<"Enter side B:" <<endl;
        cin >>sideB;
        cout <<"Enter side C:" <<endl;
        cin >>sideC;

        if (((sideA + sideB) < (sideC)) || ((sideC + sideB) < (sideA)) || ((sideA + sideC) < (sideB))){
            cout <<"Those lengths do not make a valid triangle!" <<endl;
        }
    } while (((sideA + sideB) < (sideC)) || ((sideC + sideB) < (sideA)) || ((sideA + sideC) < (sideB)));
}

void compute(double a, double b, double c, double& perimeter, double& area){
    double s, inside;
    perimeter = (a + b) + c;
    s = (perimeter / 2);
    inside = (s * (s-a)) * ((s-b) * (s-c));
    area = sqrt(inside);
}

void output(double perimeter, double area){
    cout <<"The perimeter is: " <<perimeter <<endl;
    cout <<"The area is: " <<area <<endl;
}













//
//  3.cpp
//  3
//
//  Created by Vincent Yu on 10/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double stddev(double a[], int& size);


int main(){
    int n;
    
    cout <<"Enter the amount of values: " <<endl;
    cin >> n;
    
    double a[n], value;
    
    for (int i=0; i<n; i++) {
        cout <<"Enter a value:" <<endl;
        cin >> value;
        a[i] = value;
    }
    cout <<"Standard deviation is: " <<stddev(a, n) <<endl;

    return 0;
}


double stddev(double a[], int& size){
    double average;
    double S = 0;
    double sum = 0;
    for (int i=0; i<size; i++) {
        sum = sum + a[i];
    }
    average = sum/size;
    for (int k=0; k<size; k++) {
        S = S + pow(a[k]-average, 2);
    }
    return sqrt(S/size);
}

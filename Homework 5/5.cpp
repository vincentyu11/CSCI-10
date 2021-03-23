//
//  5.cpp
//  5
//
//  Created by Vincent Yu on 10/29/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
using namespace std;

const int maxDigits = 20;

void input(int number[], int& size);
void add(int first[], int firstSize, int second[], int secondSize, int sum[], int& sumSize);
void output(const int number[], int size);

int main(){
    int first[maxDigits];
    int firstSize;
    int second[maxDigits];
    int secondSize;
    int sum[maxDigits];
    int sumSize;
    
    cout <<"Enter an integer less than 20 digits long: " <<endl;
    input(first, firstSize);
    cout <<"Enter another integer less than 20 digits long: " <<endl;
    input(second, secondSize);
    add(first, firstSize, second, secondSize, sum, sumSize);
    output(sum, sumSize);
    
    return 0;
}

void input(int number[], int& size) {
    int i=0;
    char c;
    size = 0;
    cin.get(c);
    while ('\n' != c) {
        if (!isdigit(c)) {
            cout <<"Not a digit. Exiting program." <<endl;
            exit(1);
        }
        number[i] = int(c) - int('0');
        size++;
        i++;
        cin.get(c);
    }
    if (size >20){
        cout <<"Number is more than 20 digits. Exiting program." <<endl;
        exit (1);
    }
    for (int j=0;j< (size/2);j++){
        int temp = number[j];
        number[j] = number[size - (j - 1)];
        number[size - (j - 1)] = temp;
    }
}


void output(const int number[], int size){
    cout <<"Sum is: ";
    for (int i = size-1; i>=0; i--) {
        cout << number[i];
    }
    cout<<endl;
}

void add(int first[], int firstSize, int second[], int secondSize, int sum[], int& sumSize){
    int carry=0;
    int biggerSize;
    if (firstSize > secondSize) {
        for (int i=secondSize; i<firstSize; i++) {
            second[i] = 0;
            biggerSize = firstSize;
        }
    }
    else{
        for (int i=firstSize; i<secondSize; i++) {
            first[i] = 0;
            biggerSize = secondSize;
        }
    }
    for (int i=0; i<biggerSize; i++) {
        sum[i] = first[i] + second[i] + carry;
        if (sum[i]>9) {
            carry = 1;
            sum[i] = sum[i] - 10;
        }
        else{
            carry = 0;
        }
    }
    if (carry == 1) {
        if (biggerSize == 20) {
            cout << "Result has too many digits." <<endl;
            exit(1);
        }
        else{
            sum[biggerSize] = carry;
            sumSize = biggerSize +1;
        }
    }
    else{
        sumSize = biggerSize;
    }
}






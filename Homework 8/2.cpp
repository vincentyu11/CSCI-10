//
//  2.cpp
//  2
//
//  Created by Vincent Yu on 11/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void averageInput(ifstream&, ofstream&);

int main() {
    ifstream instream;
    instream.open("scores.txt");
    if (instream.fail()) {
        cout <<"The file openening has failed." <<endl;
        exit(1);
    }
    ofstream outstream;
    outstream.open("output.txt");
    
    averageInput(instream, outstream);
    
    instream.close();
    outstream.close();
    
    return 0;
}

void averageInput(ifstream& instream, ofstream& outstream){
    string last, first;
    double total = 0;
    int a;
    double average;
    while (instream >> last) {
        instream >> first;
        outstream << last <<" " <<first <<" ";
        for (int i=0; i<10; i++) {
            instream >> a;
            outstream <<a <<" ";
            total = total + a;
        }
        average = total/10.0;
        outstream << average <<endl;
        total = 0;
    }
}






//
//  3.cpp
//  3
//
//  Created by Vincent Yu on 11/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void averageInput(ifstream&, ofstream&);
void copy(ifstream&, ofstream&);
void heading(ofstream&);

int main() {
    ifstream instream;
    instream.open("scores.txt");
    if (instream.fail()) {
        cout <<"The file openening has failed." <<endl;
        exit(1);
    }
    ofstream outstream;
    outstream.open("output2.txt");
    
    heading(outstream);
    averageInput(instream, outstream);
    
    instream.close();
    outstream.close();
    
    ifstream instream2;
    ofstream outstream2;
    instream2.open("output2.txt");
    if (instream2.fail()) {
        cout <<"The file openening has failed." <<endl;
        exit(1);
    }
    outstream2.open("scorescopy.txt");

    copy(instream2, outstream2);
    
    return 0;
}

void averageInput(ifstream& instream, ofstream& outstream){
    string last, first;
    double total = 0;
    int a;
    char c;
    double average;
    while (instream >> last) {
        instream >> first;
        outstream << last <<" " <<first <<" ";
        for (int i=0; i<10; i++) {
            instream >> c;
            instream.putback(c);
            if ('c'>=0 && c<='9') {
                instream >> a;
                total = total + a;
                outstream <<a <<" ";
            }
            else {
                i = 10;
            }
        }
        average = total/10.0;
        outstream << average <<endl;
        total = 0;
    }
}

void copy(ifstream& instream2, ofstream& outstream2){
    outstream2 << instream2.rdbuf();
    remove("scores.txt");
    rename("scorescopy.txt", "scores.txt");
}

void heading(ofstream& outstream){
    outstream << "This list contains the names and grades of quizzes of students. Order is Last name, First name, their 10 quiz grades, and their quiz grade average \n \n";
}

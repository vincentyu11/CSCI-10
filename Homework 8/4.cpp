//
//  4.cpp
//  4
//
//  Created by Vincent Yu on 11/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void wordLength(ifstream&);

int main() {
    ifstream instream;
    instream.open("file.txt");
    if (instream.fail()) {
        cout << "File opening failed." <<endl;
        exit(1);
    }
    
    wordLength(instream);
    instream.close();
    
    return 0;
}

void wordLength(ifstream& instream){
    int totalLength = 0;
    int count = 0;
    char c;
    double average;
    while (!instream.eof()) {
        int length = 0;
        instream.get(c);
        while ((c!=' ')&&(c!='.')&&(c!=',')&&(c!='\n')&&(!instream.eof())) {
            length = length+1;
            cout <<c;
            instream.get(c);
        }
        cout << c;
        count++;
        totalLength = totalLength + length;
    }
    average = totalLength/(double)(count-2);
    cout <<"\n" <<"Total number of letters: " <<totalLength <<endl;
    cout <<"Total number of words: " <<count <<endl;
    cout <<"Average number of letters per word: " <<average <<endl;
}

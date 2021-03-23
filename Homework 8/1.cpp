//
//  1.cpp
//  1
//
//  Created by Vincent Yu on 11/20/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    ifstream instream1;
    ofstream outstream;
    instream1.open("file1.txt");
    if (instream1.fail()) {
        cout <<"Input file opening failed." <<endl;
        exit(1);
    }
    int a[1000];
    int i=0;
    while (instream1 >> a[i]) {
        i++;
    }
    instream1.close();
    
    ifstream instream2;
    instream2.open("file2.txt");
    if (instream2.fail()) {
        cout <<"Input file opening failed." <<endl;
        exit(1);
    }
    while (instream2 >> a[i]) {
        i++;
    }
    instream2.close();

    for (int x=0; x<i; x++) {
        for (int y=0; y<i; y++) {
            if (a[y] > a[y+1]) {
                int temp;
                temp = a[y+1];
                a[y+1] = a[y];
                a[y] = temp;
            }
        }
    }
    
    for (int l=0; l<i; l++) {
        cout << a[l] <<" ";
    }
    
    outstream.open("file3.txt");
    for (int b = 0; b<i; b++) {
        outstream << a[b];
    }
    
    
    return 0;
}

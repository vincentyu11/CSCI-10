//
//  2.cpp
//  2
//
//  Created by Vincent Yu on 11/2/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int wordcount(string sentence);
void letterCount(string sentence);

int main() {
    string sentence;

    cout <<"Enter a sentence: " <<endl;
    getline(cin, sentence);
    
    cout <<"Number of words: " << wordcount(sentence) <<endl;
    
    letterCount(sentence);
    
    return 0;
}

int wordcount(string sentence){
    int word=0;
    for (int i=0;i<sentence.length();i++){
        if (isspace(sentence[i])) {
            word = word+1;
        }
    }
    return word+1;
}

void letterCount(string sentence){
    int count[26]={ 0 };
    int i = 0;
    char lowerCase;
    while (sentence[i]) {
        lowerCase = tolower(sentence[i]);
        if (lowerCase>='a' && lowerCase<='z') {
            count[lowerCase-'a']++;
        }
        i++;
    }
    for (int i = 0; i < 26; i++){
        if (count[i] > 0){
            cout << count[i] << " " << char('a' + i) <<endl;
        }
    }
}

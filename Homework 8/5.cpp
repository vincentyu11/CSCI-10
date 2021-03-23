//
//  5.cpp
//  5
//
//  Created by Vincent Yu on 11/21/17.
//  Copyright © 2017 Vincent Yu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void change(ifstream&, ofstream&);

int main() {
    ifstream instream;
    ofstream outstream;
    instream.open("file.txt");
    if (instream.fail()) {
        cout <<"File opening failed." <<endl;
        exit(1);
    }
    outstream.open("file2.txt");
    change(instream, outstream);
    
    return 0;
}

void change(ifstream& instream, ofstream& outstream){
    char character;
    instream.get(character);
    while (!instream.eof())
    {
        if (character == 'c')
        {
            instream.get(character);
            if (character == 'i')
            {
                instream.get(character);
                if (character == 'n')
                {
                    instream >> character;
                    if (character == '<')
                    {
                        instream >> character;
                        if (character == '<')
                        {
                            outstream << "cin>>";
                            instream.get(character);
                        }
                        else
                        {
                            outstream << "cin >" <<character;
                            instream.get(character);
                        }
                    }
                    else
                    {
                        outstream <<"cin " <<character;
                        instream.get(character);
                    }
                }
                else
                {
                    outstream <<"ci" <<character;
                    instream.get(character);
                }
            }
            else if (character == 'o')
            {
                instream.get(character);
                if (character == 'u')
                {
                    instream.get(character);
                    if (character == 't')
                    {
                        instream >> character;
                        if (character == '>')
                        {
                            instream.get(character);
                            if (character == '>')
                            {
                                outstream<<"cout <<";
                                instream.get(character);
                            }
                            else
                            {
                                outstream<<"cout >" <<character;
                            }
                        }
                        else
                        {
                            outstream <<"cout "<<character;
                        }
                    }
                    else
                    {
                        outstream <<"cou" <<character;
                    }
                }
                else
                {
                    outstream <<"co" <<character;
                }
            }
            else
            {
                outstream <<"c"<<character;
            }
        }
        else
        {
            outstream <<character;
            instream.get(character);
        }
    }
}

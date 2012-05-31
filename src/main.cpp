#include <iostream>
#include <string>
#include "dictionary.h"
using namespace std;
int main(int argc, char ** argv)
{
            std::cout << "scheck version 0.1" << std::endl;
            Dictionary d( "data/mydict.dat" );
            string word = "dog";
            while ( getline(cin, word ) ) {
                if ( d.Check( word ) ) {
                    cout << word << " is OK\n";
                }
                else {
                    cout << word << " is misspelt \n";
                }
            }
}


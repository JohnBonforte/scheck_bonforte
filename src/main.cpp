#include <iostream>
#include <string>
#include "dictionary.h"
using namespace std;
int main(int argc, char ** argv)
{
    try
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
    catch( const ScheckError & e ) 
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch( ... ) 
    {
        cerr << "Error: unknown exception" << endl;
        return 2;
    }
}


/** drama.h
 * Defines a Drama class that describes a drama movie. Includes functions for
 *movie class *
 * Written by Aditya Duggirala
 *
 */

#ifndef ASSIGNMENT4_DRAMA_H
#define ASSIGNMENT4_DRAMA_H

#include <fstream>
#include "Movie.h"
#include <iomanip>

using namespace std;

class Drama:public Movie {
public:
   Drama(char genre);
   void setData(ifstream& f);
   
    bool operator== (const Movie &compare);
    bool operator> (const Movie &compare);
    bool operator< (const Movie &compare);
};
#endif //ASSIGNMENT4_DRAMA_H

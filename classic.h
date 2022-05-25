#ifndef CLASSIC_H
#define CLASSIC_H
#include "movie.h"

class Classic : public Movie
{
    public:
        // constructor
        Classic(char movieCode, int stock, string director, string title, string actor, int monthReleased, int releaseYear);

        // destructor
        ~Classic();

        int getReleaseMonth() const;
        string getActor() const;

    private:
        int monthReleased;
        string actor;
};

#endif //CLASSIC_H
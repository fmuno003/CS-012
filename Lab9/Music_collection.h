#ifndef MUSIC_COLLECTION_H
#define MUSIC_COLLECTION_H

#include <iostream>
using namespace std;

class Tune
{
    private:
        string title;
        
    public:
        Tune();
        Tune(const string &n);
        const string & get_title() const;
};
class Music_collection
{
    private:
        int number;
        int max;
        Tune *collection;
        
    public:
        Music_collection();
        Music_collection(int);
        Music_collection(const Music_collection &m);
        bool add_tune(const Tune &t);
        bool set_tune(int, const Tune &t);
        ~Music_collection();
        friend ostream & operator <<(ostream &out, const Music_collection &m);
        Music_collection & operator=(const Music_collection &m);
        
};
#endif
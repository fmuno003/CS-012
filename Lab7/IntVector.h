#ifndef INTVECTOR_H
#define INTVECTOR_H

class IntVector
{
    private:
        unsigned sz;
        unsigned cap;
        int* data;
    
    public:
        IntVector();
        IntVector(unsigned );
        IntVector(unsigned, int);
        unsigned size() const;
        unsigned capacity() const;
        bool empty() const;
        const int& at(unsigned) const;
};

#endif
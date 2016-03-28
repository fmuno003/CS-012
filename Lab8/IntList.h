#ifndef INTLIST_H
#define INTLIST_H

struct IntNode
{
    int data;
    IntNode* next;
    IntNode(int data)
    {
        this->data = data;
        next = 0;
    }
};

class IntList
{
    private:
        IntNode* head;
        IntNode* tail;
    
    public:
        ~IntList();
        IntList();
        void display() const;
        void push_front(int);
        void pop_front();
};

#endif
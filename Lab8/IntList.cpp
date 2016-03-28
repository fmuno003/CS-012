#include <iostream>
using namespace std;

#include "IntList.h"

IntList::IntList()
{
    head = 0;
    tail = 0;
}
IntList::~IntList()
{
    IntNode* tem;
    while(head != 0)
    {
        tem = head;
        head = head->next;
        delete tem;
    }
}
void IntList::display() const
{
    IntNode* tem = head;
    if(head != 0)
    {
        tem = head->next;
        cout << head->data;
        while(tem != 0)
        {
            cout << " " << tem->data;
            tem = tem->next;
        }
    }
}
void IntList::push_front(int value)
{
    if(head != 0)
    {
        IntNode* tem = new IntNode(value);
        tem->next = head;
        head = tem;
    }
    else
    {
        head = new IntNode(value);
        tail = head;
    }
}
void IntList::pop_front()
{
    
    if(head == 0)
    {
        return;
    }
    
    IntNode* tem = head;
    head = head->next;
    delete tem;
    
    if(head == 0)
    {
        tail = 0;
    }
}
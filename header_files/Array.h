#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array
{
private:
    int* array_ptr;
    int array_capacity;
public:
    Array(int capacity);
    ~Array();

    void setCapacity(int capacity);
    int getCapacity();
    int* getPointer();

    
};

#endif
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array
{
private:
    int* array_ptr;
    int array_capacity;
    int array_size;
public:
    Array(int);
    ~Array();

    void setCapacity(int);
    int getCapacity();
    int* getPointer();
    void setSize(int);
    int getSize();

    bool isEmpty();

    void pushItem(int);

    bool checkIndexValidation(int);
    void checkCapacity();

    int getItemAt(int);
    void insertAt(int, int);
    void prependItem(int);

    int popItem();
};

#endif
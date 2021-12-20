#include "../header_files/Array.h"

Array::Array(int capacity)
{
    Array::setCapacity(capacity);
    this->array_ptr = NULL;
}

Array::~Array()
{
    this->array_capacity = 0;
    delete[] this->array_ptr;
}

void Array::setCapacity(int capacity)
{
    this->array_capacity = capacity;
}

int Array::getCapacity()
{
    return this->array_capacity;
}

int* Array::getPointer()
{
    return this->array_ptr;
}

bool Array::isEmpty()
{
    bool isEmpty = false;
    if (this->getPointer() == NULL){
        isEmpty = true;
    }
    return isEmpty;
}

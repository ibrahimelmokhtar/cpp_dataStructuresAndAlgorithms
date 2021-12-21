#include "../header_files/Array.h"

Array::Array(int capacity)
{
    this->setCapacity(capacity);
    this->setSize(0);
    this->array_ptr = NULL;
}

Array::~Array()
{
    this->setCapacity(0);
    this->setSize(0);
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

void Array::setSize(int size)
{
    this->array_size = size;
}

int Array::getSize()
{
    return this->array_size;
}

bool Array::isEmpty()
{
    // a bool variable to save the result:
    bool isEmpty = false;

    // if this array pointer refers to a NULL value, then it's empty array ...
    // else: it will be not empty, a.k.a. contains elements:
    if (this->getPointer() == NULL){
        isEmpty = true;
    }
    return isEmpty;
}

void Array::pushItem(int item)
{
    // update the actual size by 1:
    this->setSize(this->getSize() + 1);

    // create a temp array with the updated size:
    int* temp_array = new int [this->getSize()];

    // if this array is not empty, copy the elements into the temp array:
    if (!this->isEmpty()){
        for (int i=0; i<this->getSize(); i++){
            *(temp_array + i) = *(this->array_ptr + i);
        }
    }

    // add the new item at the end of the temp array:
    *(temp_array + array_size-1) = item;

    // set this array equal to the temp array:
    this->array_ptr = temp_array;

    // delete the temp array:
    temp_array = NULL;
    delete temp_array;
}

int Array::getItemAt(int index)
{
    // display message if array is empty, then return:
    if (this->isEmpty())
    {
        cout << "Array is empty!" << endl;
        return NULL;
    }

    // display message if negative index is given, then return:
    if (index < 0)
    {
        cout << "Invalid index!" << endl;
        return NULL;
    }

    // display message if index is greater than array size (a.k.a., out of range), then return:
    if (index >= this->getSize())
    {
        cout << "Index out of range!" << endl;
        return NULL;
    }

    // return element at specific index:
    return *(this->getPointer()+index);
}

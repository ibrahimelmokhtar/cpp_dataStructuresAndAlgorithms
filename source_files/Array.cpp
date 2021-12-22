#include "../header_files/Array.h"

Array::Array(int capacity=16)
{
    // default initial capacity is set to 16:
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

bool Array::checkIndexValidation(int index)
{
    bool isValid = true;

    // display message if array is empty, then return:
    if (this->isEmpty())
    {
        cout << "Array is empty!" << endl;
        isValid = false;
    }

    // display message if negative index is given, then return:
    if (index < 0)
    {
        cout << "Invalid index!" << endl;
        isValid = false;
    }

    // display message if index is greater than array size (a.k.a., out of range), then return:
    if (index >= this->getSize())
    {
        cout << "Index out of range!" << endl;
        isValid = false;
    }

    return isValid;
}

void Array::checkCapacity()
{
    if (this->getSize() >= this->getCapacity())
    {
        this->setCapacity(2*this->getCapacity());
    }
}

int Array::getItemAt(int index)
{
    int element = NULL;
    bool isValid = this->checkIndexValidation(index);

    if (isValid)
    {
        // return element at specific index:
        element = *(this->getPointer()+index);
    }

    return element;
}

void Array::insertAt(int index, int item)
{
    // update capacity, if required:
    this->checkCapacity();

    // insert at the end of the array:
    if (index == this->getSize())
    {
        this->pushItem(item);
        return;
    }

    // insert at any other place:
    else
    {
        // check index validation:
        bool isValid = this->checkIndexValidation(index);

        if (isValid)
        {
            // update size by +1:
            this->setSize(this->getSize()+1);

            int *temp_array = new int [this->getSize()];

            int j=0;
            for (int i=0; i<this->getSize(); i++, j++)
            {
                // place item in required index:
                if (i == index){
                    *(temp_array+i) = item;
                    j--;
                }
                else
                {
                    // move elements in its new places:
                    *(temp_array+i) = *(this->getPointer()+j);
                }
            }
            
            // update array:
            this->array_ptr = temp_array;

            // delete temp array:
            temp_array = NULL;
            delete temp_array;
        }
    }
}

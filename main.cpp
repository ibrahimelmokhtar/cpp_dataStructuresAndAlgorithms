#include "source_files/Array.cpp"

int main(){    
// create an empty array object:
    Array arr = Array();

// display its capacity:
    cout << "array capacity: " << arr.getCapacity() << endl;

// add item at the end of the array:
    int numberOfElements = 0;
    cout << "Number of NEW elements: ";
    cin >> numberOfElements;
    cout << "You will enter (" << numberOfElements << ") numbers now ..." << endl;

// check capacity:
    arr.resizeCapacity();

    int number = 0;
    for (int i=0; i<numberOfElements; i++)
    {
        cout << "Enter element to add into array: ";
        cin >> number;
        arr.pushItem(number);
    }

// display array's elements:
    cout << "\tarray elements: [ ";
    for (int i=0; i<arr.getSize(); i++)
    {
        cout << *(arr.getPointer()+i);
        if (i != arr.getSize()-1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;

// display capacity and size:
    arr.resizeCapacity();
    cout << endl;
    cout << "Capacity: " << arr.getCapacity() << endl;
    cout << "Size\t: " << arr.getSize() << endl << endl;

// delete specific element from array, even if found in multiple positions:
    int elements = 0;
    cout << "number of elements to be deleted: ";
    cin >>elements;
    cout << "delete last (" << elements << ") items from the array:" << endl;
    for (int i=0; i<elements; i++)
    {
        arr.popItem();
    }

// display array's elements:
    cout << "\tarray elements: [ ";
    for (int i=0; i<arr.getSize(); i++){
        cout << *(arr.getPointer()+i);
        if (i != arr.getSize()-1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;

// display capacity and size:
    cout << endl;
    cout << "Capacity: " << arr.getCapacity() << endl;
    cout << "Size\t: " << arr.getSize() << endl;

    return 0;
}

#include "source_files/Array.cpp"

int main(){
// enter number of items array can hold, a.k.a. capacity:
    int capacity = 0;
    cout << "Enter initial capacity: ";
    cin >> capacity;

// create an empty array object:
    Array arr = Array(capacity);

// display its capacity:
    cout << "array capacity: " << arr.getCapacity() << endl;

// display message if it's an empty array:
    if (arr.isEmpty())
    {
        cout << "Empty array!" << endl;
    }

// get specific index:
    int index = 0;
    cout << "Find element at index: ";
    cin >> index;

// display element at given index, if any found:
    if (arr.getItemAt(index) != NULL)
    {
        cout << "element at index (" << index << ") is: " << arr.getItemAt(index) << endl;
    }
    cout << endl;

// add item at the end of the array:
    cout << "You will enter THREE numbers now ..." << endl;

    int number = 0;
    for (int i=0; i<3; i++){
        cout << "Enter element to add into array: ";
        cin >> number;
        arr.pushItem(number);
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

    cout << "Size of array: " << arr.getSize() << endl;

// get specific index:
    cout << "Find element at index: ";
    cin >> index;

// display element at given index, if any found:
    if (arr.getItemAt(index) != NULL)
    {
        cout << "element at index (" << index << ") is: " << arr.getItemAt(index) << endl;
    }

    return 0;
}

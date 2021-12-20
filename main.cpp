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

// add item at the end of the array:
    int number = 0;
    cout << "Enter element to add into array: ";
    cin >> number;
    arr.pushItem(number);

    cout << "\tarray elements: [ ";
    for (int i=0; i<arr.getSize(); i++){
        cout << *(arr.getPointer()+i);
        if (i != arr.getSize()-1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;

    cout << "Enter element to add into array: ";
    cin >> number;
    arr.pushItem(number);

    cout << "Enter element to add into array: ";
    cin >> number;
    arr.pushItem(number);

    cout << "\tarray elements: [ ";
    for (int i=0; i<arr.getSize(); i++){
        cout << *(arr.getPointer()+i);
        if (i != arr.getSize()-1){
            cout << " , ";
        }
    }
    cout << " ]" << endl;

    cout << "Size of array: " << arr.getSize() << endl;

    return 0;
}

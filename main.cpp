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
    
    return 0;
}

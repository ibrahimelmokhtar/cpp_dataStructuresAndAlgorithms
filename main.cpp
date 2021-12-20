#include "source_files/Array.cpp"

int main(){
    int capacity = 0;
    cout << "Enter initial capacity: ";
    cin >> capacity;

    Array arr = Array(capacity);
    cout << "array capacity: " << arr.getCapacity() << endl;
    
    return 0;
}

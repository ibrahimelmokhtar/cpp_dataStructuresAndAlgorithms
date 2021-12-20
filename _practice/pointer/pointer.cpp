#include <iostream>
using namespace std;

void oneDimensionArray();
void twoDimentionArray();

int main(){

    twoDimentionArray();

    return 0;
}

void oneDimensionArray(){
    const int arr_size = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "&arr[0]: " << &arr[0] << endl;
    cout << "ptr: " << ptr << endl;
    cout << "&ptr: " << &ptr << endl;
    cout << "*ptr: " << *ptr << endl;

    for (int i=0; i<arr_size; i++){
        cout << *ptr++ << " ";
    }
    cout << endl;
    
    ptr = arr;
    cout << *(ptr + 4) << endl;
    cout << "*ptr: " << *ptr << endl;
}

void twoDimentionArray(){
    const int row = 5;
    const int col = 3;

    int arr[row][col] = {{11, 12, 13},
                         {21, 22, 23},
                         {31, 32, 33},
                         {41, 42, 43},
                         {51, 52, 53}};

    int *ptr = arr[0];
    cout << "*ptr: " << *(ptr+(row*col)-1) << endl;
}
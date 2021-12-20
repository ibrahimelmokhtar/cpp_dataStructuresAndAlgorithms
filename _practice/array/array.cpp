#include <iostream>
using namespace std;


void static_array();
void compiled_array();
void dynamic_array();


int main(){
    // static_array();
    // compiled_array();
    dynamic_array();

    return 0;
}


void static_array(){
    const int arr_size = 5;
    int arr[arr_size] = {0};

    cout << "Static array ::" << endl;
    cout << "Array size: " << arr_size << endl;

    // input array:
    for (int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    // print array:
    for (int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void compiled_array(){
    cout << "On Compilation Array ::" << endl;
    cout << "Enter array size: ";

    int arr_size;
    cin >> arr_size;
    
    int *arr = new int[arr_size];

    // input array:
    for (int i=0; i<arr_size; i++){
        cin >> arr[i];
    }

    // print array:
    for (int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;    
}

void dynamic_array(){
    cout << "Dynamic Array ::" << endl;
    cout << "Enter array size: ";

    int arr_size;
    cin >> arr_size;
    
    int *arr = new int[arr_size];

    // input array:
    for (int i=0; i<arr_size; i++){
        int number = 0;
        cin >> number;
        *(arr+i) = number;
    }

    // print array:
    for (int i=0; i<arr_size; i++){
        cout << *(arr+i) << " ";
    }
    cout << endl;
}
#include <iostream> 
using namespace std;

template<typename T>

void insertionSort(T arr[], int n) {

    for (int i = 1; i < n; ++i) {

        T key = arr[i];

        int j = i - 1;



        while (j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];

            j = j - 1;

        }

        arr[j + 1] = key;

    }

}


template<typename T>

void printArray(T arr[], int n) {

    for (int i = 0; i < n; ++i) {

        cout << arr[i] << " ";

    }

    cout << endl;

}


int main() {

    int intArray[] = { 12, 11, 13, 5, 6 };

    int n = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Before sorting: ";

    printArray(intArray, n);
    insertionSort(intArray, n);
    cout << "After sorting: ";

    printArray(intArray, n);

    return 0;

}


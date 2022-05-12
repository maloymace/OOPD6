#include <iostream>
using namespace std;

void BubbleSort(int *arr, const size_t size);
void BubbleSort(double *arr, const size_t size);

int main() {


}

void BubbleSort( *arr, int size) {
    int temp;
    for (int k = 0; k < size - 1; k++) {
        for (int j = 0; j < size - k - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array is: ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
}
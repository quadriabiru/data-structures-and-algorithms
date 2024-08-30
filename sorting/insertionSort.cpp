#include "iostream"
using namespace std; 

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int key = arr[i]; 
        int j = i - 1;

        while( j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }

}
 
int main() {
    int arr[] = {10,3,19,30,14,55,26,78,18,39,20}; 
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << "\n"; 

    insertionSort(arr, n);

    for(int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << "\n"; 
}
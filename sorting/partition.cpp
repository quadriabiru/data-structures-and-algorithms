#include "iostream"
using namespace std; 

void partition(int arr[], int n){
    int index = n - 1; 

    for(int i = n-2; i >= 0; i--){
        int pivot = arr[index];

        if(arr[i] > pivot){
            int tmp = arr[i]; 

            cout << i << ':' << tmp << ':' << index << endl;

            for(int j = i; j < index+1; j++){
                arr[j] = arr[j+1];
            }

            arr[index] = tmp; 

            index--;
        }
    }
}

int arr[] = {21,22,6,10,12,15}; 
int n = sizeof(arr)/sizeof(int); 

int main(){
    partition(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ',';
    }

    cout << endl;
}
#include "iostream"
using namespace std; 

void insertionSort(int arr[], int n){

    /* another method
    for(int i = 1; i < n; i++){
       int nextVal = arr[i]; 

       int j = i; 

       while(j > 0 && arr[j-1] > nextVal)
       {
            arr[j] = arr[j-1];
            j--;
       } 

        arr[j] = nextVal;
    }
    */

    for(int i = 1; i < n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            if(arr[j] < arr[j-1])
            {
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
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
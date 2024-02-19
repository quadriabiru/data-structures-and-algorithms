#include "iostream"
#include "cstdlib"
#include "time.h"

int linSearch(int arr[], int n, int x){ // n = size of array, x = target element
    
    std::cout << "Searching for NUMBER " << x << "\n";

    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            return i; 
        }
    }

    return -1; 
} 

int main(){
    int arr[] = {3, 9, 5, 4, 2, 6, 1, 7, 8, 0, 10}; 
    
    int n = sizeof(arr)/sizeof(int); // size of full array / size of data type

    int lb = 0, ub = 15; 
    
    srand(time(0)); // sets seed for random number generation so the number is not always the same

    int x = (rand() % (ub - lb + 1)) + lb; // generates a random number between lower bound to upper bound

    int index = linSearch(arr, n, x);

    if(index == -1){
        std::cout << "NUMBER " << x << " not found in array" << "\n";
    }
    else if(index >= 0 && index < n){
         std::cout << "NUMBER " << x << " found at INDEX " << index << "\n"; 
    }

    return 0;
}
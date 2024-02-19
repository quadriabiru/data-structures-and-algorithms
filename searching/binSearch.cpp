#include "iostream"
#include "cstdlib"

int binSearch(int arr[], int start, int end, int x){ // start/end = start & stop index; x = target element
    int mid = (start + end) / 2;

    if(start > end){
        return -1;
    }

    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid] > x){
        return binSearch(arr, start, mid-1, x);
    }
    else if(arr[mid] < x){
        return binSearch(arr, mid+1, end, x);
    }

    return -1;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9,10}; 
    int n = sizeof(arr)/sizeof(int);
    int x = 1;

    int index = binSearch(arr, 0, n, x);

    if(index == -1){
        std::cout << "NUMBER " << x << " not found in array" << "\n";
    }
    else if(index >= 0 && index < n){
         std::cout << "NUMBER " << x << " found at INDEX " << index << "\n"; 
    }

    return 0;

}
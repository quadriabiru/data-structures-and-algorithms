#include "iostream"
using namespace std; 

void merge(int arr1[], int l1, int arr2[], int l2, int joint[], int l3){
    int counter = 0; int i = 0; int j = 0; 

    /*  
    std::cout << "l1: " << l1 << " l2: " << l2 << " l3: " << l3 << endl;

    std::cout << "A: " << " ";
    for(int m = 0; m < l1; m++){
        std::cout << arr1[m] << " ";
    }

    std::cout << "B: " << " ";
    for(int m = 0;  m < l2; m++){
        std::cout << arr2[m] << " ";
    }

    std::cout << endl;

    std::cout << "i_start: " << i << " j_start: " << j << endl;
    */
    
    while(i < l1 && j < l2){
        
        //std::cout << "i1: " << i << " j1: " << j << endl;

        if(arr1[i] < arr2[j]){
            joint[counter] = arr1[i]; 
            //std::cout << "1: " << arr1[i] << " ";
            i++;
            counter++; 
        }
        else{
            joint[counter] = arr2[j]; 
            //std::cout << "2: " << arr2[j] << " ";
            j++;
            counter++; 
        }
    }
    
    //std::cout << "i2: " << i << " j2: " << j << endl;

    while(j < l2){
        joint[counter] = arr2[j]; 
        counter++;
        j++; 
    }
    while(i < l1){
        joint[counter] = arr1[i]; 
        counter++;
        i++; 
    }

    /*
    std::cout << "JOINT: " << " ";
    for(int i = 0; i < l3; i++){
        std::cout << joint[i] << " ";
    }

    std::cout << endl;
    */
    
}

void mergeSort(int arr[], int n){
    
    if(n <= 1){
        return ; 
    }

    int middle = n / 2;
    int left = middle;
    int right = n - middle;

    int leftArray[left], rightArray[right]; 

    int i = 0; int j = 0; int counter = 0;

    while(counter < n){
        if(i < middle){
            leftArray[i] = arr[counter];
            i++;
            counter++;
        }
        else{
            rightArray[j] = arr[counter];
            j++;
            counter++;
        }
    }
    
    /*
    std::cout << "LEFT: " << " ";
    for(int i = 0; i < left; i++){
        std::cout << leftArray[i] << " ";
    }

    std::cout << "RIGHT: " << " ";
    for(int i = 0; i < right; i++){
        std::cout << rightArray[i] << " ";
    }

    std::cout << endl;
    */

    mergeSort(leftArray, left);
    mergeSort(rightArray, right);
    merge(leftArray, left, rightArray, right, arr, n);
}

int main() {
    int one[] = {1,3,5,7,7,2,4,6,10,9};
    int two[] = {7};
    int length = sizeof(one)/sizeof(int);

    mergeSort(one,length);

    for(int i = 0; i < 10; i++){
        std::cout << one[i] << " ";
    }

    std::cout << endl;

    return 0; 
}

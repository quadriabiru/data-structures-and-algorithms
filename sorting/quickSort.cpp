#include <iostream>

void swap(int *a, int *b){
    int tmp = *a; 
    *a = *b; 
    *b = tmp;  
}

int partition(int nums[], int start, int end){
    int pivot = nums[start], index = start+1; 

    for(int i = start+1; i <= end; i ++){
        if(nums[i] >= pivot){
            swap(&nums[i], &nums[index]); 
            index++;
        }
    }

    swap(&nums[start], &nums[index-1]);

    return index-1;
}

void helperFunction(int nums[], int start, int end){
    if(start < end){
        int p = partition(nums, start, end);

        helperFunction(nums, start, p-1);
        helperFunction(nums, p+1, end);
    }

}
void quickSort(int nums[], int n){
    helperFunction(nums, 0, n-1);
}


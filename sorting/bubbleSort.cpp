#include <iostream>

void bubbleSort(int nums[], int n){
    if(n <= 0) return; 
    
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){

            int a = nums[j]; 

            if(nums[j] < nums[j+1]){
                nums[j] = nums[j+1];
                nums[j+1] = a;
            }
        }
    }

    std::cout << "OUTPUT: " ;

    for(int i = 0; i < n; i++){
        std::cout << nums[i] << " " ;
    }

    std::cout << "\n";
}



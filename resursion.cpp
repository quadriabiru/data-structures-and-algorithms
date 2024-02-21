#include "iostream"
using namespace std; 

// Recursive method, inefficient. 
int fib(int n){

    if(n == 1){
        return 1; 
    }  
    else if(n == 0){
        return 0;
    }
    else{
        return fib(n-1) + fib(n-2);
    }
}

int sum(int n){
    if(n == 0){
        return 0; 
    }
    else{
        return  n + sum(n-1);
    }
}

string reverse(string string){  
    std::cout << string.size() << endl;
    return string; 
}

bool palindrome(string string){
    return true;
}

int main(){
    //int result = fib(6); 
    //int result = sum(100);
    string result = reverse("Hello");

    std::cout << "RESULT: " << result << endl;
}

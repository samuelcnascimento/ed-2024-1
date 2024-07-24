#include <iostream>

int somaElementArr(int arr[], int size){
    if(size == 0) return 0;
    else return arr[size-1] + somaElementArr(arr, size-1);
}

int main(){

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(int);
    std::cout<<somaElementArr(arr,size);

    return 0;
}
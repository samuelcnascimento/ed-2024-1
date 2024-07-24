#include <iostream>

int fibo(int n){
    if(n < 3) return 1;
    else return fibo(n-1) + fibo(n-2);
}

int main(){
    int num;
    std::cin >> num;
    std::cout << fibo(num) << "\n";
    return 0;
}
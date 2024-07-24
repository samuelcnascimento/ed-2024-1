#include <iostream>

int fat(int n){
    if(n == 1) return 1;
    else return n * fat(n-1);
}

int main(){

    std::cout << fat(6) << "\n";
    return 0;
}
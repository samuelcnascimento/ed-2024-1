#include <iostream>

void contagemRegressiva(int n){
    if(n <= 0){
        return;
    } else {
        std::cout << n << "\n";
        contagemRegressiva(n-1);
    }
}

int main() {
    contagemRegressiva(10);
    return 0;
}
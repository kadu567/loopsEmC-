#include <iostream>
using namespace std;

int main(){
    int num, i = 1;
    std::cout << "Digite um numero :" << endl;
    std::cin >> num;
    std::cout << "Números pares entre 1 e %d:" << num << endl;
    while (i <= num) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;

    }
    cout << "\n" << endl;

    return 0;
}





#include <iostream>
using namespace std;

int main() {
    int *ponteiro = nullptr;
    ponteiro = new int;
    *ponteiro = 128;

    cout << "O ponteiro chamado 'ponteiro' aponta para o endereço de memória " << ponteiro << endl;
    cout << "O valor armazenado é " << *ponteiro << endl;
    
    delete ponteiro;

    return 0;
}

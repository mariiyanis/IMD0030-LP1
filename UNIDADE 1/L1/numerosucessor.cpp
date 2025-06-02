#include <iostream>
using namespace std;

int main()
{
    int a{};
    int numeroSucessor;
    
    cout << "Digite o número: ";
    
    cin >> a;
    
    numeroSucessor = a + 1;
    
    cout << "O sucessor de " << a << " é: " << numeroSucessor;

    return 0;
}

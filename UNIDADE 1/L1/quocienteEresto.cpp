#include <iostream>
using namespace std;

int main()
{
    int quo;
    int resto;
    int dividendo;
    int divisor;

    cout << "Digite o dividendo: ";
    cin >> dividendo; 
  
    cout << "Digite o divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Erro: Não pode dividir por zero";
    } else {

        quo = dividendo / divisor;
        resto = dividendo % divisor;

        cout << "Quociente: " << quo << " Resto: " << resto;
    }

    return 0;
}

/*Desenvolva um algoritmo de calculadora. Para cada operação matemática crie
uma função correspondente. As funções são: soma, subtração, multiplicação,
divisão, potência e radiciação.*/
#include <iostream>
#include <cmath>

using namespace std;

double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b == 0) {
        cout << "ERRO!!! Não dá pra dividir por zero!!!!" << endl;
        return 0;
    }
    return a / b;
}

double potencia(double a, double b) {
    return pow(a, b);
}

double raizQuadrada(double a) {
    if (a < 0) {
        cout << "ERRO!! Não dá pra calcular a raiz quadrada de um número negativo!!!" << endl;
        return 0;
    } return sqrt(a);
}

int main()
{
    int escolha;
    double num1{}, num2{};
    double resultado;
    
    do {
        cout << "---------------------------------- CALCULADORA SIMPLES ----------------------------------" << endl;
        cout << "O que você deseja efetuar? " << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "5. Potência" << endl;
        cout << "6. Raiz Quadrada" << endl;
        cout << "0. Sair" << endl;
        cout << "Opção: " << endl;
        cin >> escolha;
        
        switch(escolha) {
            
            case 0:
                cout << "Encerrando a calculadora." << endl;
                break;
                
            case 1:
            cout << "Digite dois numeros: ";
            cin >> num1 >> num2;
            resultado = soma(num1, num2);
            cout << "O resultado da soma é " << resultado;
            break;
            
            case 2:
            cout << "Digite dois numeros: ";
            cin >> num1 >> num2;
            resultado = subtracao(num1, num2);
            cout << "O resultado da subtração é " << resultado;
            break;
            
            case 3: 
            cout << "Digite dois numeros: ";
            cin >> num1 >> num2;
            resultado = multiplicacao(num1, num2);
            cout << "O resultado da multiplicação é " << resultado;
            break;
            
            case 4:
            cout << "Digite dois numeros: ";
            cin >> num1 >> num2;
            resultado = divisao(num1, num2);
            if (num2 != 0) { 
                    cout << "O resultado da divisão é: " << resultado << endl;
                }
                break;
            
            case 5:
            cout << "Digite dois numeros: ";
            cin >> num1 >> num2;
            resultado = potencia(num1, num2);
            cout << "O resultado da potenciação é " << resultado << endl;
            break;
            
            case 6:
            cout << "Digite um número: ";
            cin >> num1;
            resultado = raizQuadrada(num1);
            if (num1 >= 0) {
                    cout << "Resultado: Raiz quadrada de " << num1 << " = " << resultado << endl;
                }
                break;
    
            default: 
                cout << "Não existe essa opção aqui!!!! Por favor, tente novamente!" << endl;
                break;

        } 
        
    } while (escolha !=0);
    
    return 0;
}

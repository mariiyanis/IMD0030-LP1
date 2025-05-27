#include <iostream>
#include <stdexcept>
#include <limits>

using namespace std;

//criar o meu template de operações
template <typename T>
T somar (T a, T b) {
    return a+b;
}

template <typename T>
T subtrair (T a, T b) {
    return a-b;
}

template <typename T>
T multiplicar (T a, T b) {
    return a*b;
}

template <typename T>
T dividir (T a, T b) {
    if (b==0){
        throw invalid_argument("Erro: Divisão por zero!!!");
    }
    return a/b;
}

//limpeza das variáveis inválidas
void limparEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{
    int opcao;
    double a,b; 
    
    //interação com o usuário
    do {
        cout << "\n ===CALCULADORA GENÉRICA COM TEMPLATE===" << endl;
        cout << "1. Somar \n 2. Subtrair \n 3. Multiplicar \n 4. Dividir \n 0. Saida";
        cout << "\n Escolha a Opção: ";
        cin >> opcao;
        
        if (cin.fail()){
            cout << "Entrada inválida. Tente novamente. \n";
            continue;
        }
        if (opcao == 0) break;
        
        cout <<"Digite o valor de A: ";
        cin >> a; 
        if (cin.fail()) {
            limparEntrada();
            continue;
        }
        cout << "Digite o valor de B: ";
        cin >> b;
        if (cin.fail()) {
            limparEntrada();
            continue;
        }
        try {
            switch(opcao){
                case 1:
                cout << "Resultado: " << somar(a,b) << endl;
                break;
                case 2:
                cout << "Resultado: " << subtrair(a,b) << endl;
                break;
                case 3:
                cout << "Resultado: " << multiplicar(a,b) << endl;
                break;
                case 4:
                cout << "Resultado: " << dividir(a,b) << endl;
                break;
            default:
            cout << "Opção está inválida!" << endl;
            }
        }catch (const std::exception& e) {
            cerr << e.what() << endl;
        }
    } while (opcao !=0);
cout << "Encerrando a calculadora. Até logo!" << endl;

    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a = 1.0; 
    double b = 12.0; 
    double c = -13.0; 

    double delta, x1, x2, novaEquacao;

    if (a == 0) {
    
        cout << "A equação se torna de primeiro grau!!!" << endl;
        
        if (b == 0) {
            if (c == 0) {
                cout << "Tudo zera. O que significa dizer que existem infinitas soluções." << endl;
            } else {
                cout << "Há uma contradição, o que significa dizer que não há solução por não ter nenhuma incógnita." << endl;
            }
        } else {
            x1 = -c / b;
            cout << "A raiz da equação de primeiro grau é x = " << x1 << endl;
        }
    } else {
        if (b == 0) {
            //x^2 = -c/a
            novaEquacao = -c / a;
            if (novaEquacao >= 0) {
                x1 = sqrt(novaEquacao);
                x2 = -sqrt(novaEquacao);
                cout << "As raízes da equação são x1 = " << x1 << " e x2 = " << x2 << endl;
            } else {
                cout << "Não existem raízes reais." << endl;
            }
        } else if (c == 0) {
            // x = -b/a
            x1 = 0;
            x2 = -b / a;
            cout << "Neste caso, uma das raízes sempre será " << x1 << " porque ao substituir x por " << x1 
            << ",\ntodos os termos que contêm x se anulam, resultando na identidade 0 = 0." << endl;
            cout << "A segunda raiz é x2 = " << x2 << endl;
        } else {
            // caso geral !!!
            delta = pow(b, 2) - 4 * a * c;
            
            if (delta > 0) {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                
                cout << "As raízes reais são x1 = " << x1 << " e x2 = " << x2 << "." << endl;
                
            } else if (delta == 0) {
                x1 = -b / (2 * a);
                
                cout << "Só existe uma raiz real, ou duas raízes iguais! E seus respectivos valores são: " << x1 << endl;
                
            } else {
                
                cout << "Não há raízes reais na equação." << endl;
            }
        }
    }
    return 0;
}

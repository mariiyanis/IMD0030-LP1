#include <iostream>
using namespace std;

int main()
{
    float a = 2.0; 
    float b = 4.0;
    float c = 8.0;
    float x;

    if (a == 0) {
        if (b == c) {
            cout << "a sendo 0 e b igual a c, a equação é uma identidade !! \nLogo, existem infinitas soluções!!!" << endl;
        } else {
            cout << "a sendo 0 e b diferente de c, a equação é uma contradição !!\nLogo, não há solução!!" << endl;
        }
    } else {
        x = (c - b) / a;
        cout << "A raiz da equação é " << x << endl;
    }

    return 0;
}

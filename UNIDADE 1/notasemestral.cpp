#include <iostream>
using namespace std;

int main()
{
    float n0{}, n1{}, n2{}, n3{};
    float notaSemestral;
    float notaBi1;
    float notaBi2;
    
    cout << "Digite as duas notas do primeiro bimestre, respectivamente: " << endl;
    cin >> n0;
    cin >> n1;
    
    notaBi1 = (n0 + n1) / 2;
    
    cout << "Agora, digite as duas notas do segundo bimestre, respectivamente: " << endl;
    cin >> n2;
    cin >> n3;
    
    notaBi2 = (n2 + n3) / 2;
    
    notaSemestral = (notaBi1 + notaBi2) / 2;
    
    cout << "Sua nota semestral é: " << notaSemestral << "." << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a{};
    int b{};
    int c{};
    int perimetroTriangulo;
    
    cout << "Digite os lados do triângulo, respectivamente (a, b e c): ";
    
    cin >> a;
    cin >> b;
    cin >> c;
    
    perimetroTriangulo = a + b + c;
    
    cout << "Perímetro: " << perimetroTriangulo;

    return 0;
}

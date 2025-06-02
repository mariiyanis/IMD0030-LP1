#include <iostream>
using namespace std;

int main()
{
   float c{};
   float l{};
   float h{};
   float volumeRetangulo;
   
   cout << "Digite os valores do comprimento, largura e altura da caixa retangular, respectivamente: ";
   cin >> c;
   cin >> l;
   cin >> h;
   
   volumeRetangulo = c * l * h;
   
   cout << "Volume: " << volumeRetangulo << "." << endl;
   
    return 0;
}

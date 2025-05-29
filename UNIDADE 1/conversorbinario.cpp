//(Não utilize estruturas de decisão, laço ou funções)
int main()
{
    int numero{};
    int b4, b3, b2, b1, b0;
    
    cout << "Digite um número inteiro menor que 32" << endl;
    cin >> numero;
    
    b4 = (numero / 16) % 2;
    b3 = (numero / 8) % 2;
    b2 = (numero / 4) % 2;
    b1 = (numero / 2) % 2;
    b0 = numero % 2;
    
    cout << "O número " << numero << " em binário seria " << b4 << b3 << b2 << b1 << b0 << endl;
    return 0;
}

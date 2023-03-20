#include <iostream>
#include <string>

using namespace std;

//Ola, obrigado por olhar o meu código, Por gentileza, caso eu tenha passado no processo, 
//me contactar via email, pois aonde eu trabalho não tenho área de celular, Muito obrigado!

int main() {

    int valor;
    int fibonnaci = 0;
    int valorAnterior1 = 0;
    int valorAnterior2 = 1;
    int aux;

    cout << "Qual valor deseja verificar se pertence a sequencia de fibonnaci?: ";
    cin >> valor;

    do 
    {
        if (valor == fibonnaci)
        {
            cout << "O numero: " << valor << " pertence a sequencia"; 
            break;
        }

        fibonnaci = valorAnterior1 + valorAnterior2;
        valorAnterior1 = valorAnterior2;
        valorAnterior2 = fibonnaci;

        
    } while (fibonnaci<=valor);

    if (fibonnaci>valor)
        cout << "O numero "<< valor << " nao pertence a sequencia";
    

    


}

#include <iostream>
#include <string>

using namespace std;

//Ola, obrigado por olhar o meu código, Por gentileza, caso eu tenha passado no processo, 
//me contactar via email, pois aonde eu trabalho não tenho área de celular, Muito obrigado!

int main() {

    string String;
    string StringInvertida;
    int aux = 0;
    int TamanhoString = 0;

    cout << "Digite a string que deseja inverter: ";
    cin >> String;

    StringInvertida = String;

    //DESCOBRINDO O TAMANHO DA STRING DIGITADA
    for(TamanhoString=0;String[TamanhoString]!= '\0';TamanhoString++){}

    cout << "Tamanho da string digitada: " << TamanhoString << "\n";

    
    //INVERTENDO A STRING E COLOCANDO EM StringInvertida
    for (int i=TamanhoString;i>0;i--){

        StringInvertida[aux] = String[i-1];
        aux++;

    }

    cout << "A string que digitou: " << String << "\n A string que inverteu: " << StringInvertida;
    


}

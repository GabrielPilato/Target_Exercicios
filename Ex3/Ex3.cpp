#include <iostream>
#include <string>
#include <fstream>
#include "dist/json/json.h"
#include "dist/jsoncpp.cpp"
using namespace std;
std::string str;

std::ifstream dados("dados.json", std::ifstream::binary);
Json::Value dias;

//Ola, obrigado por olhar o meu código, Por gentileza, caso eu tenha passado no processo, 
//me contactar via email, pois aonde eu trabalho não tenho área de celular, Muito obrigado!

int main()
{
float media = 0;
float menorValor = 0;
float maiorValor = 0;

int diasValidos = 0;
int diasMaiorQueMediaMensal = 0;

dados >> dias;


for (int index = 0;index<30;index++){
    if (dias["dia",index]["valor"].asInt() == 0) 
    {}
    else {
        diasValidos++;
        media = media + dias["dia",index]["valor"].asFloat();

        if (menorValor == 0){
            menorValor = dias["dia",index]["valor"].asFloat();
            maiorValor = dias["dia",index]["valor"].asFloat();

        } else
            if (dias["dia",index]["valor"].asFloat() < menorValor){
                menorValor = dias["dia",index]["valor"].asFloat();
            }
            if (dias["dia",index]["valor"].asFloat() > maiorValor){
                maiorValor = dias["dia",index]["valor"].asFloat();
            }

    }
}

media = media/diasValidos;

for (int index = 0;index<30;index++){
    if (dias["dia",index]["valor"].asFloat() > media)
    diasMaiorQueMediaMensal++;

}


cout << "Media: " << media << "\n";
cout << "Menor Valor: " << menorValor << "\n";
cout << "Maior Valor: " << maiorValor << "\n";
cout << "Dias onde a renda diaria foi maior que a media mensal: " << diasMaiorQueMediaMensal;




}
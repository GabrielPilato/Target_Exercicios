#include <iostream>
#include <string>
using namespace std;

#define SP 67836.43
#define RJ 36678.66
#define MG 29229.88
#define ES 27165.48
#define OUTROS 19849.53

int main (){

float valorTotal;

valorTotal = SP + RJ + MG + ES + OUTROS;

cout << "SP teve " << (SP/valorTotal)*100 << "%, de participacao. \n";
cout << "RJ teve " << (RJ/valorTotal)*100 << "%, de participacao. \n";
cout << "MG teve " << (MG/valorTotal)*100 << "%, de participacao. \n";
cout << "ES teve " << (ES/valorTotal)*100 << "%, de participacao. \n";
cout << "Outros estados tiveram " << (OUTROS/valorTotal)*100 << "%, de participacao. \n";

}
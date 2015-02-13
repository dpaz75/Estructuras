// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top(); // retorna el primer elemento de mi pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size(); // retorna la cantidad de elementos de mi pila
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{

 while(!mi_pila.empty()) // ciclo mientras mi pila no esta vacia
 {
     if (str==mi_pila.top()) // si encuentra un str en mi pila 
        return true; // devuelve verdadero
     mi_pila.pop(); // saca un elemento de mi pila

 }
 return false;

}

//devuelve el elemento mayor de "mi_pila"

// se crea un campo temporal donde voy comparando en un ciclo cual es el mayor 
// si mi campo de comparacion en menor al de mi pila entonces el mayor es el de mi pila y asi sucesivamente

int getMayor(stack<int> mi_pila)
{
   int may=0;
   while (!mi_pila.empty())
{
    if(may<mi_pila.top())
        may=mi_pila.top();
        mi_pila.pop();
}
return may;

 }

//devuelve el elemento menor de "mi_pila"

// se crea un campo temporal donde le asigno un valor cualquiera mayor voy comparando en un ciclo cual es el menor 
// si mi campo de comparacion en mayor al de mi pila entonces el menor es el de mi pila y asi sucesivamente

int getMenor(stack<int> mi_pila)
{
    int men=10000;
    while (!mi_pila.empty())
    {
        if (men>mi_pila.top())
            men=mi_pila.top();
        mi_pila.pop();
    }
   return men;
}

//devuelve la cantidad de veces que se encuentra la letra 'a' minuscula en "mi_pila"

// creo un contador y recorro un ciclo siempre y cuando mi pila no esta vacia 
// luego con un if pregunto si encuentro la letra 'a' y voy contando si la condicion se cumple

int contarLetraA(stack<char> mi_pila)
{
    int cuenta=0;
    while(!mi_pila.empty())
    {
        if ('a'== mi_pila.top())
        {
            cuenta++;
        }
        mi_pila.pop();
    }
    return cuenta;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

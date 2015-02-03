// stack::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{

 while(!mi_pila.empty())
 {
     if (str==mi_pila.top())
        return true;
     mi_pila.pop();

 }
 return false;

}

//devuelve el elemento mayor de "mi_pila"
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

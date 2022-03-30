// Suma de la serie 1-1/2+1/3-1/4+1/5...
/*Podemos diseñar un procedimiento recursivo para calcular 
la suma de los n primeros elementos de la serie, de modo que usemos una función 
diferente para los elementos pares e impares.*/

#include <iostream>

using namespace std;

double par(int);
double impar(int);
double suma(int);

int main() {

    cout << suma(3) << endl;
    cout << suma(13) << endl;
    cout << suma(23) << endl;
    cout << suma(87) << endl;
    cout << suma(250) << endl;
    cout << suma(450) << endl;
    system("pause");
    return 0;
}

double suma(int n) {
    if(n % 2) return impar(n);
    else return par(n);
}

double par(int n) {
    return impar(n-1)-1/double(n);
}

double impar(int n) {
    if(n == 1) return 1;
    return par(n-1)+1/double(n);
   
}

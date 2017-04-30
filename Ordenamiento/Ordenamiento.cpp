#include <iostream>
using namespace std;
 
int main()
{
 
    int array[10];
 
 	for(int i =0; i<10;i++){
 		cout << i+1<<". ";
 		cin >> array[i];
 	}
 
    cout<<"Ordenados de menor a mayor : ";
 
    // Recorro cada elemento del array
    for (int startIndex = 0; startIndex < 10; ++startIndex)
    {
        // Asigno a minIndex el primer index
        int minIndex = startIndex;
 
        // Se fija si hay algún valor menor que el que tiene el indice minIndex
        // Empieza por startIndex +1 por que sino estaría comparando siempre el mismo número
        for (int newIndex = startIndex + 1; newIndex < 10; ++newIndex)
        {
            // Compara los valores y si es menor lo asigna el index
            if (array[newIndex] < array[minIndex])
            {
                minIndex = newIndex;
            }
        }
 
        // Intercambio los valores
        int aux = array[startIndex];
        array[startIndex] = array[minIndex];
        array[minIndex] = aux;
    }
 
    //Muestro los resultados
    for (int index = 0; index < 10; ++index)
    {
        cout << array[index] << ' ';
    }
 
    cout<<"\n";
    return 0;
}

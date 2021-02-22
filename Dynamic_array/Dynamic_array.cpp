/*Есть массив из 10-ти элементов, заполненный случайными числами. 
   Необходимо создать еще два массива even[] и odd[], минимально возможного размера, 
   в массив even[] скопировать все четные элементы исходного массива, а в массив odd[] - все нечетные элементы.
   Массивы even[] и odd[] вывести на экран, используя функцию Print();*/

#include <iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
int Number_Of_Even_Elements(int arr[], const int n);
void FillRand_For_even_and_odd(int arr[], const int n, int even[], int odd[]);


void main()
{
    setlocale(LC_ALL,"");

    int n = 10;
    int* arr = new int[n];
    FillRand(arr, n);
    cout << "Массив из 10 случайных элементов типа int:" << endl;
    cout << endl;
    Print(arr,n);
    cout << endl;
    int counter_even, counter_odd;
    counter_even = Number_Of_Even_Elements(arr,n);
    counter_odd = n - counter_even;
    int* even = new int[counter_even];
    int* odd = new int[counter_odd];
    FillRand_For_even_and_odd(arr,n,even,odd);
    cout << "Массив четных элементов массива arr:" << endl;
    cout << endl;
    Print(even,counter_even);
    cout << endl;
    cout << "Массив нечетных элементов массива arr:" << endl;
    cout << endl;
    Print(odd, counter_odd);
   
    

   
    delete[] arr;
    delete[] even;
    delete[] odd;


}

void FillRand(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%100;
    }
}

void Print(int arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}

int Number_Of_Even_Elements(int arr[], const int n)
{   
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0) counter++;
    }
    return counter;
}

void FillRand_For_even_and_odd(int arr[], const int n, int even[], int odd[])
{   
    int counter_even = 0;
    int counter_odd = 0;
        for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[counter_even] = arr[i];
            counter_even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd[counter_odd] = arr[i];
            counter_odd++;
        }
    }
}



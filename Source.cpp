// Lab_04_1.cpp
// Мельничук Ілля
// Лабораторна робота № 4.1
// Цикли.
// Варіант 15
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N;
    do
    {
        cout << "N= ";
        cin >> N;
    } while (N <= 0);
   
    double result = 1;
    cout << "For(k++): ";
    for (int k = 1; k <= N; k++)
    {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
    }
    cout << result << endl;
    result = 1;
    cout << "For(k--): ";
    for (int k = N; k >= 1; k--)
    {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
    }
    cout << result << endl;
    int k = 1;
    cout << "While: ";
    result = 1;
    while (k <= N)
    {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
        k++;
    }
    cout << result << endl;
    k = 1;
    result = 1;
    cout << "Do_While: ";
    do
    {
        result *= (pow(k, 2) / pow(N, 2)) * cos(pow(N, 2) / pow(k, 2));
        k++;
    } while (k <= N);
    cout << result;
    return 0;
}
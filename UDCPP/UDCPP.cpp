// UDCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int valorMasAlto;
    int valorMasBajo;
    int valorDelMedio;
    string res;

    cout << "Escribe un valor cualquiera: \n";
    cin >> a;

    cout << "Escribe otro valor cualquiera: \n";
    cin >> b;

    cout << "Escribe otro valor cualquiera: \n";
    cin >> c;

    if (a > b && a > c) {
        valorMasAlto = a;
        if (b > c) { valorDelMedio = b; valorMasBajo = c; }
        else valorDelMedio = c; valorMasBajo = b;
    }
    if (b > a && b > c) {
        valorMasAlto = b;
        if (a > c) { valorDelMedio = a; valorMasBajo = c; }
        else valorDelMedio = c; valorMasBajo = a;
    }

    if (c > a && c > b) {
        valorMasAlto = c;
        if (a > b) { valorDelMedio = a; valorMasBajo = b; }
        else valorDelMedio = b; valorMasBajo = a;
    }

    cin >> valorMasBajo;
    cin >> valorDelMedio;
    cin >> valorMasAlto;
}
    
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

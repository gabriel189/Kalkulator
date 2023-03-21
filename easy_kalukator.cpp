#include <iostream>

using namespace std;

int main()
{
    double prvi_broj;
    double drugi_broj;
    string racunska_operacija = "";
    cout << "                 EASY ---- KALKULATOR" << "\n\n";
    cout << "(+ zbrojanje)-(- oduzimanje)-(* mnozenje)-(/ dijeljenje)" << "\n\n";
    cout << "unesi prvi broj: " << endl;
    cin >> prvi_broj;
    cout << "unesi drugi broj: " << endl;
    cin >> drugi_broj;
    cout << "odaberi racunsku operaciju: " << endl;
    cin >> racunska_operacija;
    if (racunska_operacija == "+"){
        cout << "zbroj: " << prvi_broj + drugi_broj;
    }else if (racunska_operacija == "-"){
        cout << "razlika: " <<prvi_broj - drugi_broj;
    }else if (racunska_operacija == "*"){
        cout << "rezultat mnozenja: " << prvi_broj * drugi_broj;
    }else if(racunska_operacija == "/"){
        cout << "rezultat dijeljenja: " << prvi_broj / drugi_broj;
    }
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    //Base de question
    string rA, rB, rC;
    rA = "La peur des jex de loterie";
    rB = "La peur du noir",
    rC = "La peur des vendredi treize";

    char reponse;
    string *pointeur(0);

    // Demande choix de l'user
    cout << "La kenophobie est ?" << endl;
    cout << "A) " << rA << endl;
    cout << "B) " << rB << endl;
    cout << "C) " << rC << endl;
    cin >> reponse;

    switch(reponse)
    {
        case 'A':
            pointeur = &rA;
            break;
        case 'B':
            pointeur = &rB;
            break;
        case 'C':
            pointeur = &rC;
            break;
    }
    cout << "La kénophobie est : " << *pointeur << endl;
    return 0;
}

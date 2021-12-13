// MatriceCons.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Matrix.h"
#include "Stack.h"

using namespace algebre;
using namespace std;
int main()
{
    //Matrix M1(2, 2);
    Matrix<float> M2(3, 3);
    Matrix<float> Mv(3,3);
    Vecteur3D<float> v1(5, 7, 7);
    M2.Remplissage(4.2);
    M2.print();
    Stack<float>* S = Stack<float>::creator();
    for (int i = 0; i < 3; i++)
        S->push(new float(i));
    S->pop();
    /*Mv.vecteurToMatrix(v1);
    //M1.Remplissage(1);/
    M2.Remplissage(2);
    //M1.operator*(M2);
    Mv.print();
    Vecteur3D<float>*vm=M2.MatrixToVecteur();
    vm->print();*/
    
    //std::cout << "Hello World!\n";
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.

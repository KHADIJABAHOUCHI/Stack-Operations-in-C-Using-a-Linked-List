

// main.cpp
#include <iostream>
#include "Pile.h"

int main() {
    // Crée une pile d'entiers
    Pile<int> maPile;

    // Empile quelques éléments
    maPile.empiler(10);
    maPile.empiler(20);
    maPile.empiler(30);

    // Affiche le contenu de la pile
    std::cout << "Contenu de la pile : ";
    maPile.afficher();  // Affiche : 30 20 10

    // Affiche le sommet de la pile
    std::cout << "Sommet de la pile : " << maPile.sommetPile() << "\n";  // Affiche : 30

    // Dépile un élément
    maPile.depiler();  // Dépile 30

    // Affiche le sommet après dépilement
    std::cout << "Apres un depilage, le sommet est : " << maPile.sommetPile() << "\n";  // Affiche : 20

    // Dépile tous les éléments
    maPile.depiler();  // Dépile 20
    maPile.depiler();  // Dépile 10

    // Vérifie si la pile est vide
    std::cout << "La pile est-elle vide ? " << (maPile.estVide() ? "Oui" : "Non") << "\n";  // Affiche : Oui

    return 0;
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

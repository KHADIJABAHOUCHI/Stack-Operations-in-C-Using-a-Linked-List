#pragma once
// Pile.h


#include "Cellule.h"
#include <iostream>
template <typename T>
class Pile {
private:
    Cellule<T>* sommet;  // Pointeur vers le sommet de la pile

public:
    // Constructeur
    Pile();

    // Destructeur
    ~Pile();

    // Vérifie si la pile est vide
    bool estVide() const;

    // Empiler un élément
    void empiler(const T& element);

    // Dépiler un élément
    void depiler();

    // Accéder à l'élément au sommet de la pile
    T sommetPile() const;

    // Afficher le contenu de la pile
    void afficher() const;
};

// Définition du constructeur de la pile
template <typename T>
Pile<T>::Pile() : sommet(nullptr) {}

// Définition du destructeur de la pile
template <typename T>
Pile<T>::~Pile() {
    while (!estVide()) {
        depiler();
    }
}

// Définition de la méthode estVide
template <typename T>
bool Pile<T>::estVide() const {
    return sommet == nullptr;
}

// Définition de la méthode empiler
template <typename T>
void Pile<T>::empiler(const T& element) {
    Cellule<T>* nouvelleCellule = new Cellule<T>(element);  // Créer une nouvelle cellule
    nouvelleCellule->suivant = sommet;  // La nouvelle cellule pointe vers l'ancien sommet
    sommet = nouvelleCellule;  // Le sommet devient la nouvelle cellule
}

// Définition de la méthode depiler
template <typename T>
void Pile<T>::depiler() {
    if (estVide()) {
        std::cerr << "Erreur : La pile est vide !\n";
        return;
    }
    Cellule<T>* temp = sommet;
    sommet = sommet->suivant;  // Le sommet devient l'élément suivant
    delete temp;  // Supprimer l'ancienne cellule
}

// Définition de la méthode sommetPile
template <typename T>
T Pile<T>::sommetPile() const {
    if (estVide()) {
        std::cerr << "Erreur : La pile est vide !\n";
        return T();  // Retourne une valeur par défaut
    }
    return sommet->donnee;
}

// Définition de la méthode afficher
template <typename T>
void Pile<T>::afficher() const {
    Cellule<T>* temp = sommet;
    while (temp != nullptr) {
        std::cout << temp->donnee << " ";
        temp = temp->suivant;
    }
    std::cout << "\n";
}


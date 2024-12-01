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

    // V�rifie si la pile est vide
    bool estVide() const;

    // Empiler un �l�ment
    void empiler(const T& element);

    // D�piler un �l�ment
    void depiler();

    // Acc�der � l'�l�ment au sommet de la pile
    T sommetPile() const;

    // Afficher le contenu de la pile
    void afficher() const;
};

// D�finition du constructeur de la pile
template <typename T>
Pile<T>::Pile() : sommet(nullptr) {}

// D�finition du destructeur de la pile
template <typename T>
Pile<T>::~Pile() {
    while (!estVide()) {
        depiler();
    }
}

// D�finition de la m�thode estVide
template <typename T>
bool Pile<T>::estVide() const {
    return sommet == nullptr;
}

// D�finition de la m�thode empiler
template <typename T>
void Pile<T>::empiler(const T& element) {
    Cellule<T>* nouvelleCellule = new Cellule<T>(element);  // Cr�er une nouvelle cellule
    nouvelleCellule->suivant = sommet;  // La nouvelle cellule pointe vers l'ancien sommet
    sommet = nouvelleCellule;  // Le sommet devient la nouvelle cellule
}

// D�finition de la m�thode depiler
template <typename T>
void Pile<T>::depiler() {
    if (estVide()) {
        std::cerr << "Erreur : La pile est vide !\n";
        return;
    }
    Cellule<T>* temp = sommet;
    sommet = sommet->suivant;  // Le sommet devient l'�l�ment suivant
    delete temp;  // Supprimer l'ancienne cellule
}

// D�finition de la m�thode sommetPile
template <typename T>
T Pile<T>::sommetPile() const {
    if (estVide()) {
        std::cerr << "Erreur : La pile est vide !\n";
        return T();  // Retourne une valeur par d�faut
    }
    return sommet->donnee;
}

// D�finition de la m�thode afficher
template <typename T>
void Pile<T>::afficher() const {
    Cellule<T>* temp = sommet;
    while (temp != nullptr) {
        std::cout << temp->donnee << " ";
        temp = temp->suivant;
    }
    std::cout << "\n";
}


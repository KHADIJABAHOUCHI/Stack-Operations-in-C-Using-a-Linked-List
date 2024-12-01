#pragma once
// Cellule.h
#pragma once

template <typename T>
class Cellule {
public:
    T donnee;        // Donnée de la cellule
    Cellule* suivant; // Pointeur vers la cellule suivante

    // Constructeur
    Cellule(T data);
};

// Définition du constructeur de la cellule
template <typename T>
Cellule<T>::Cellule(T data) : donnee(data), suivant(nullptr) {}






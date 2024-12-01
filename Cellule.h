#pragma once
// Cellule.h
#pragma once

template <typename T>
class Cellule {
public:
    T donnee;        // Donn�e de la cellule
    Cellule* suivant; // Pointeur vers la cellule suivante

    // Constructeur
    Cellule(T data);
};

// D�finition du constructeur de la cellule
template <typename T>
Cellule<T>::Cellule(T data) : donnee(data), suivant(nullptr) {}






#ifndef __Jeu_hpp
#define __Jeu_hpp
#include <vector>
#include <array>
#include <iostream>
#include "Joueur.hpp"
#include "Carte.hpp"
#include "CarteRoyaume.hpp"
#include "CarteVictoire.hpp"
#include "CarteTresor.hpp"

using namespace std;
class Jeu
{
private:
    vector<Joueur> joueurs;
    array<ActionS, 10> cartesRoyaume;


public:
    Jeu();
    ~Jeu();
};





#endif

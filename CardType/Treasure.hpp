#ifndef __Treasure_hpp
#define __Treasure_hpp
#include<string>
#include<iostream>
#include "../Joueur.hpp"
#include "Model.hpp"
using namespace std;

class Treasure {
  private:


  public:
    void affiche();
    void action();
    Treasure(string nom, int valeur, int cout, string description);
    ~Treasure();
    // void onDraw() override;
    // void onPlay()  override;
    // void onDiscard() override;
    // void onTrash() override;
    // void onAddToDeck() override;
    // void onhand() override;
    // void onGround() override;
};


#endif
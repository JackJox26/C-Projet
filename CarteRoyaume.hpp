#ifndef __CarteRoyaume_hpp
#define __CarteRoyaume_hpp
#include<string>
#include<iostream>
#include "Carte.hpp"
using namespace std;

class CarteRoyaume : public Carte {
  private:


  public:
    void affiche();
    void action();
    // CarteRoyaume(string nom1, int valeur1, int cout1, string description1);
    // ~CarteRoyaume();
    void onDraw() override;
    void onPlay() override;
    void onDiscard() override;
    void onTrash() override;
    void onAddToDeck() override;



};

#endif
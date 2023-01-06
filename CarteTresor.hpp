#ifndef __CarteTresor_hpp
#define __CarteTresor_hpp
#include<string>
#include<iostream>
#include "Joueur.hpp"
#include "Carte.hpp"
using namespace std;

class CarteTresor : public Carte {
  private:


  public:
    void affiche();
    void action();
    CarteTresor(string nom, int valeur, int cout, string description);
    ~CarteTresor();
    void onDraw() override;
    void onPlay()  override;
    void onDiscard() override;
    void onTrash() override;
    void onAddToDeck() override;

    

};


#endif
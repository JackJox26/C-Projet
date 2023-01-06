#ifndef __Victory_hpp
#define __Victory_hpp
#include<string>
#include<iostream>
#include "Model.hpp"
using namespace std;

class CarteVictoire {
  private:

  public:
    void affiche();
    void action();
    CarteVictoire(string nom, int valeur, int cout, string description);
    ~CarteVictoire();
    // void onDraw() override;
    // void onPlay() override;
    // void onDiscard() override;
    // void onTrash() override;
    // void onAddToDeck() override;
    // string getDescription() override;
    // int getValeur() override;
    // int getCout() override;
    // string getNom() override;
    // void setDescription(string description1) override;
    // void setValeur(int valeur1) override;
    // void setCout(int cout1) override;
    // void setNom(string nom1) override;
    
};


#endif
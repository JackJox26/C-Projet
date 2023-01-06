#ifndef __Carte_hpp
#define __Carte_hpp
#include <string>
#include <iostream>

using namespace std;
class Carte
{
public:
  string name;
  int value;
  int cost;
  string description;

public:
  virtual void onDraw();
  virtual void onPlay();
  virtual void onDiscard();
  virtual void onTrash();
  virtual void onAddToDeck();
  // virtual string getNom();
  // virtual int getCout();
  // virtual int getValeur();
  // virtual string getDescription();
  // virtual void setDescription(string description1);
  // virtual void setValeur(int valeur1);
  // virtual void setCout(int cout1);
  // virtual void setNom(string nom1);
};

#endif

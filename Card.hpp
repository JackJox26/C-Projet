#ifndef __Card_hpp
#define __Card_hpp
#include <string>
#include <iostream>

using namespace std;
class Card
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


};
#endif
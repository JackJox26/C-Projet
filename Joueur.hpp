#ifndef __Joueur_hpp
#define __Joueur_hpp
using namespace std;
#include <vector>
#include <iostream>
#include "Card.hpp"
class Joueur
{
    int actions;
    int buys;
    int coins;
    int vp;
    int numberToDiscard;
    int ActionModifier;
    
    int upgradeCardCost;
    int upgradeCardIndex;
    Card* lastplayedCard;





    vector<Card*> trash;
    vector<Card*> discard;
    vector<Card*> draw;
    vector<Card*> hand;


    public:

    void drawCard(int numberToDraw);
    void addCardToHand(Card* carte);
    void addCardToDiscard(Card* carte);
    void addCardToTrash(Card* carte);

    Joueur();
    ~Joueur();


    // getter et les setter
    void addAction(int numAction)
    {
        this->actions = this->actions + numAction;
    }
    void addBuy(int numBuy)
    {
        this->buys = this->buys + numBuy;

    }

    void addCoins(int numCoins)
    {
        this->coins = this->coins+numCoins;
    }
    void addVp (int numVp)
    {
        this->vp = this->vp + numVp;
    }

    void addNumberToDiscard(int numDiscard)
    {
        this->numberToDiscard = numberToDiscard + numDiscard;
    }


};

#endif

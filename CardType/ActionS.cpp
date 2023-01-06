#include "ActionS.hpp"
#include "Joueur.hpp"
#include "Jeu.hpp"
ActionS::ActionS(int action,int buy, int coin, int card, int cost, std::string name, std::vector<CardType> const& types)
{
    this->action = action;
    this->buy = buy;
    this->coin = coin;
    this->card = card;
}



// void onPlay(Joueur* JoueurActuel)
// {

// }
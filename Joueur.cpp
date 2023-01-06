#include "Joueur.hpp"
Joueur::Joueur()
{
    cout << "Creation du joueur" << endl;
}

Joueur::~Joueur()
{
    cout << "Destruction du joueur" << endl;
}
void Joueur::drawCard(int numberToDraw)
{
    cout << "Draw card" << endl;
    for (int i = 0; i< numberToDraw; i++)
    {
        Card* carte = this->discard.back();
        this->discard.pop_back();
        this->draw.push_back(carte);
    }

};
void Joueur::addCardToHand(Card* carte)
{
    for (Card* c : draw)
    {
        if (c == carte)
        {
            hand.push_back(c);
            draw.pop_back();
        }
    }
};
void Joueur::addCardToDiscard(Card* carte)
{
    for (Card* c : draw)
    {
        if (c == carte)
        {
            hand.push_back(c);
            draw.pop_back();
        }
    }
};
// void Joueur::addCardToTrash(Carte* carte)
// {
//     for (Carte* c : hand)
//     {
//         if (c == carte)
//         {
//             this->hand.erase(this->hand.begin()+i);
//             this->trash.push_back(carte);
//         }
//     }

//     for (Carte* c : draw)
//     {
//         if (c == carte)
//         {
//             this->draw.erase(this->draw.begin()+i);
//             this->trash.push_back(carte);
//         }
//     }

//     for (Carte* c : discard)
//     {
//         if (c == carte)
//         {
//             this->discard.erase(this->discard.begin()+i);
//             this->trash.push_back(carte);
//         }
//     }

// }





#ifndef __ActionS_hpp
#define __ActionS_hpp
#include <iostream>
#include "Model.hpp"
class ActionS : public Model
{
    private:
        int action;
        int buy;
        int coin;
        int card;


    public:
        
        ActionS(int action,int buy, int coin, int card, int cost, std::string name, std::vector<CardType> const& types);
        ~ActionS();
        void onDraw(Joueur* JoueurActuel) override;
        void onPlay(Joueur* JoueurActuel) const override;
        void onDiscard(Joueur* JoueurActuel) override;
        void onTrash(Joueur* JoueurActuel) override;
        void onAddToDeck(Joueur* JoueurActuel) override;
        void onHand(Joueur* JoueurActuel) override;
        void onGround(Joueur* JoueurActuel) override;

        // void onPlay(Joueur* JoueurActuel)const override;
    
};
#endif
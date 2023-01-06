#ifndef Model_H
#define Model_H

#include <iostream>
#include <vector>
#include <string>
#include "../Joueur.hpp"

class Model
{
    public:
        enum class CardType
        {
            NONE = -1,
            ACTION,
            VICTORY,
            TREASURE,
            REACTION,
            ATTACK,
        };

    private:
        int cost;
        std::string name;
        std::vector<CardType> types;
    
    public:
        virtual void onDraw(Joueur* JoueurActuel) = 0;
        virtual void onPlay(Joueur* JoueurActuel) const = 0;
        virtual void onDiscard(Joueur* JoueurActuel) = 0;
        virtual void onTrash(Joueur* JoueurActuel) = 0; 
        virtual void onHand(Joueur* JoueurActuel) = 0;
        virtual void onAddToDeck(Joueur* JoueurActuel)= 0;
        virtual void onGround(Joueur* JoueurActuel)= 0;

        Model(std::string name, int cost, std::vector<CardType> const& types) : types(types), cost(cost), name(name){};
        virtual ~Model() = default;
        // int getCost();
        // std::string getName();
        // std::vector<CardType> getTypes();
        // void setCost(int cost);
        // void setName(std::string name);
        // void setTypes(std::vector<CardType> types);
};
#endif
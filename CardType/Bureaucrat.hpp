#ifndef __Bureaucrat_hpp
#define __Bureaucrat_hpp
#include<iostream>
#include <vector>
#include "../Joueur.hpp"
#include "Model.hpp"

class Joueur;

class Bureaucrat : public Model
{
        Bureaucrat();
        ~Bureaucrat();
        void onDraw(Joueur* JoueurActuel) override ;
        void onPlay(Joueur* JoueurActuel) const override ;
        void onDiscard(Joueur* JoueurActuel) override;
        void onTrash(Joueur* JoueurActuel) override; 
        void onHand(Joueur* JoueurActuel) override;
        void onAddToDeck(Joueur* JoueurActuel) override;
        void onGround(Joueur* JoueurActuel) override;

};


#endif
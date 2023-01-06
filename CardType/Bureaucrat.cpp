#include "Bureaucrat.hpp"
#include "../Joueur.hpp"
#include "Model.hpp"

Bureaucrat::Bureaucrat() : Model("Bureaucrat", 4, {CardType::ACTION, CardType::ATTACK}){}

Bureaucrat::~Bureaucrat()
{
    cout<<"rien"<<endl;   
}
void Bureaucrat::onDraw(Joueur* JoueurActuel)
{

}
void Bureaucrat::onPlay(Joueur* JoueurActuel) const
{
}
void Bureaucrat::onDiscard(Joueur* JoueurActuel)
{

}
void Bureaucrat::onTrash(Joueur* JoueurActuel)
{

}
void Bureaucrat::onHand(Joueur* JoueurActuel)
{

}
void Bureaucrat::onAddToDeck(Joueur* JoueurActuel)
{

}
void Bureaucrat::onGround(Joueur* JoueurActuel)
{

}

// void Bureaucrat::onPlay(Joueur* JoueurActuel) const
// {
//     cout<<"Bureaucrat"<<endl;
// }

// void Bureaucrat::onDraw(Joueur* JoueurActuel)
// {
//     Joueur
// }

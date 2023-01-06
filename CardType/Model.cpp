#include "Model.hpp"
#include "ActionS.hpp"


Model::Model(std::string name, int cost, std::vector<CardType> const& types)
{
    this->name = name;
    this->cost = cost;
    this->types = types;

    // std::cout << "ActionS" << std::endl;
}

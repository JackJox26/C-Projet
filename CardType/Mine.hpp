#ifndef __Mine_hpp
#define __Mine_hpp
#include <iostream>
#include "Kingdom.hpp"

template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
   return dynamic_cast<const Base*>(ptr) != nullptr;
}

class Mine : public Kingdom
{

    public:
        Mine();
        ~Mine();
        void action();
};


#endif
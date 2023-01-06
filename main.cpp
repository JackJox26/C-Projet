#include<iostream>
// #include <SDL/SDL.h>
#include <GL/glew.h>
#include <SDL2/SDL.h>
using namespace std;
const int WINDOW_WIDTH = 3000;
const int WINDOW_HEIGHT = 1800;
const int WINDOW_FLAGS = SDL_WINDOW_OPENGL;

int main()
{
    /* Initialisation simple */
    SDL_Init(SDL_INIT_VIDEO);
    

    /* Création de la fenêtre */
    // SDL_Window* pWindow = NULL;
    // pWindow = SDL_CreateWindow("Ma première application SDL2",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,1000,1000,SDL_WINDOW_SHOWN);
    // SDL_Renderer *renderer = SDL_CreateRenderer(pWindow, -1, 0);

    // SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    // SDL_RenderClear(renderer);
    // SDL_RenderPresent(renderer);
    // SDL_Delay(3000);
        // cout<<"Dominion: "<< "\n" << "1.Parties"<<"\n"<< "2.Nouvelle Table" <<"\n"<<"3.Table"<<"\n" << "4.Liste d'amis"<<"\n"<< "5.Liste de cartes"<<"\n" << "6.Classement"<<"\n"<< "7.Compte"<<"\n"<< "8.Boutique"<<"\n"<< "9.Boite de reception"<<"\n" << "10.Deconnexion"<<"\n";

    int menuP;
    cin >> menuP;
    switch (menuP)
    {
        case 1:

            cout<< "1.Parties";

            int menuN1;
            cin>> menuN1;
            break;
        case 2:
            cout<< "2.Nouvelle Table";
            int menuN2;
            cin>> menuN2;
            break;
        default:
            cout<< "mauvaise saisie";
            break;
    }




    SDL_Quit();

    return 0;
}











    
    // cout<<"Dominion: "<< "\n" << "1.Parties"<<"\n"<< "2.Nouvelle Table" <<"\n"<<"3.Table"<<"\n" << "4.Liste d'amis"<<"\n"<< "5.Liste de cartes"<<"\n" << "6.Classement"<<"\n"<< "7.Compte"<<"\n"<< "8.Boutique"<<"\n"<< "9.Boite de reception"<<"\n" << "10.Deconnexion"<<"\n";

    // int menuP;
    // cin >> menuP;
    // switch (menuP)
    // {
    //     case 1:

    //         cout<< "1.Parties";

    //         int menuN1;
    //         cin>> menuN1;
    //         break;
    //     case 2:
    //         cout<< "2.Nouvelle Table";
    //         int menuN2;
    //         cin>> menuN2;
    //         break;
    //     default:
    //         cout<< "mauvaise saisie";
    //         break;
    // }

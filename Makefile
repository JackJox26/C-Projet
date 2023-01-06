CXX=g++
CXXFLAGS=-Wall -Wextra -g
LIBFLAGS=-lSDL2 -lGL -lGLEW -lSDL2_image
CARDTYPE =CardType/Bureaucrat.o CardType/Chancelor.o CardType/CouncilRoom.o CardType/Gardens.o CardType/Militia.o CardType/Moat.o CardType/Remodel.o CardType/Thief.o CardType/Treasure.o CardType/Victory.o CardType/WorkShop.o CardType/Adventurer.o CardType/Cellar.o CardType/Chapel.o CardType/Feast.o CardType/Library.o CardType/Mine.o CardType/MoneyLender.o CardType/Spy.o CardType/ThromeRoom.o CardType/Witch.o CardType/Kingdom.o CardType/Model.o 

STATEPLAYER = StatePlayer/PlayerState.o StatePlayer/PlayerStateActions.o StatePlayer/PlayerStateBool.o StatePlayer/PlayerStateBuyCards.o StatePlayer/PlayerStateDiscardCards.o StatePlayer/PlayerStateTrashCards.o

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

dominion: Action.o Carte.o $(CARDTYPE) CarteRoyaume.o CarteTresor.o CarteVictoire.o Joueur.o main.o Jeu.o $(STATEPLAYER) Shader.o Texture.o
	$(CXX) $^ -o $@ $(LIBFLAGS)

.PHONY: run clean

run: dominion
	./$<

clean:
	rm -f *.o *~ *.core $(CARDTYPE).o $(STATEPLAYER).o
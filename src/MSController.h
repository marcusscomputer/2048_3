
// Diese Klasse beschreibt die Kontrollinstanz des gesamten Games. Sie
// beinhaltet wichtige Funktionen und weitere Klassen, die das Spiel am Leben
// erhalten. Es handelt sich im wesentlichen um den zentralen Baustein des
// Games.

#ifndef MSCONTROLLER
#define MSCONTROLLER

#include <SDL2/SDL.h>
#include <MSGameWindow.h>
#include <MSEventHandler.h>

class MSController
{
public:
	void initGame(int w, int h);
	void run();
	void terminate();
private:
	MSGameWindow 	*GameWindow;
	MSEventHandler  *EventHandler;
};

#endif

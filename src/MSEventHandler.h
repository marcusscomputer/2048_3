
// Diese Klasse bearbeitet alle möglichen Events die im Game vorkommen: Maus-
// klicks, Tastaturanschläge. Bei einem Event wird das entsprechend vermerkt
// so dass andere Klassen auf passierte Dinge reagieren können.

#ifndef MSEVENTHANDLER
#define MSEVENTHANDLER

#include <SDL2/SDL.h>

class MSEventHandler
{
public:
	MSEventHandler();
	
	bool gameShouldTerminate;
	bool mouseClicked;
	int mouseButton;
	void handleEvent();
private:
	SDL_Event e;
};

#endif

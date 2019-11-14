
#include <MSEventHandler.h>

MSEventHandler::MSEventHandler()
{
	// Game soll derzeit nicht beendet werden
	gameShouldTerminate = false;
}

void MSEventHandler::handleEvent()
{
	// Ein Event irgendeiner Form abwarten
	SDL_WaitEvent(&e);
	
	// Checken ob das Game beendet werden soll
	if (e.type == SDL_QUIT)
	{ gameShouldTerminate = true; }
}


#include <MSController.h>

void MSController::initGame(int w, int h)
{
	// Neue EventHandler Instanz
	EventHandler = new MSEventHandler();
	// Neue GameWindow Instanz
	GameWindow = new MSGameWindow();
	// Erzeuge das Game Fenster mit GL Context
	GameWindow->initWindow(w, h);
}


void MSController::run()
{
	bool running = true;
	while (running == true)
	{
		// Warte ein Event ab
		EventHandler->handleEvent();

		// Beende das Game sollte das Event eintreten
		if (EventHandler->gameShouldTerminate == true)
		{ running = false; terminate(); }
	}
}


void MSController::terminate()
{
	// Schliesse das Fenster und gebe Resourcen frei
	GameWindow->closeWindow();

	// Beende alles mit SDL
	SDL_Quit();

	// Beende Programm an sich
	exit(0);
}

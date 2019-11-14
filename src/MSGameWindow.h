
// Diese Klasse erzeugt und kontrolliert das Erscheinungsbild, also das Fenster
// des Games selbst. Hier wird der OpenGL-Kontext erzeugt, in das der Inhalt
// des Games gerendert wird. Diese Klasse ist Teil der MSController Instanz.

#ifndef MSGAMEWINDOW
#define MSGAMEWINDOW

#include <SDL2/SDL.h>

class MSGameWindow
{
public:
	MSGameWindow();
	void initWindow(int w, int h);
	void closeWindow();

private:
	int 			ScreenW;
	int 			ScreenH;
	SDL_Window 		*MainWindow;
	SDL_GLContext 	GLContext;
};

#endif

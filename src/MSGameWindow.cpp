
#include <MSGameWindow.h>

MSGameWindow::MSGameWindow(){}

void MSGameWindow::initWindow(int w, int h)
{
	// Dimensionen merken
	ScreenW = w;
	ScreenH = h;

	// SDL initialisieren
	SDL_Init(SDL_INIT_VIDEO);

	// Erzeugen des Hauptfensters mit den übermittelten Dimensionen
	MainWindow = SDL_CreateWindow("2048³", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, w, h, SDL_WINDOW_OPENGL);

	// GL Kontext definieren und erzeugen
	GLContext = SDL_GL_CreateContext(MainWindow);
}


void MSGameWindow::closeWindow()
{
	SDL_GL_DeleteContext(GLContext);
	SDL_DestroyWindow(MainWindow);
}

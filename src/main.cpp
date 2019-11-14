
// Der Haupteinstiegspunkt in das Game selbst. Sehr simpel und einfach.

#include <MSController.h>

int main(int argc, char* argv[])
{
	// Controller Instanz erzeugen
	MSController *Controller = new MSController();

	// Fenster mit fixer Grösse
	Controller->initGame(1280, 720);

	// Laufe endlos
	Controller->run();

	// Never reached
	return 0;
}

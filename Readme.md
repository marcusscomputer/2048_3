--------------------------------------------------------------------------------

LINUX Vorbereitung:

Pakete: sdl2 sdl2_dev sdl2_image sdl2_ttf sdl2_mixer
(Diese gibt es für nahezu jede Distro. Bei manchen Distros muss man noch die
selben Pakete mit einem "-dev" am Ende installieren, um die Header- und Library-
Dateien zu bekommen)


WINDOWS Vorbereitung:

MinGW 64 / Msys2 oder Visual Studio Community

--------------------------------------------------------------------------------

ORDNERSTRUKTUR DES PROJEKTS

build
	Enthält das fertige Produkt, sowie alle notwendigen Resourcen. Wenn Du auf
	Windows kompilierst, solltest Du die resultierende .exe-Datei in dieses
	Verzeichnis erstellen lassen. Er enthält auch die erforderlichen DLL-Dateien
	damit Du auf Windows direkt lostesten und spielen kannst.
	
build/license
	Enthält wiederrum Unterordner, die die einzelnen Lizenzen der verwendeten
	Bibliotheken enthält. Es ist rechtlich erforderlich, diese Texte mit einem
	Programm mitzuliefern, die die genannten Bibliotheken nutzen.
	
build/res
	Alle Resourcen wie Bilder, Texturen, Sounds, und Schriftarten sind hier in
	Unterordnern gelagert.
	
lib
	Enthält alle für Windows erforderlichen Header und Libraries zum kompilieren
	auf der Windows Plattform.
	
proj
	Enthält Projekt-Dateien meiner VIM-Session, sowie die Project-Files für
	Visual Studio.
	
src
	Enthält den eigentlichen Quellcode des Spiels, also alle Header und Code-
	Dateien in einem Ordner.
	
make.sh
	Shell-Script für Linux, mit dem man das Spiel kompilieren kann. Das erzeugte
	Programm, "2048_3" wird im ./build-Ordner abgelegt. Führe einfach
	
	$> ./make.sh
	
	im Verzeichnis des Projekts in einem Terminal aus.

--------------------------------------------------------------------------------

QUELLCODE-ORGANISATION

Der Code soll klar, verständlich, und logisch organisiert sein. Zu diesem Zweck
wird der Quellcode auch ausreichend dokumentiert damit jeder versteht, was in
welchem Teil und welcher Klasse passiert. Auch das Linux-Script zum Kompilieren
ist ausreichend dokumentiert.

--------------------------------------------------------------------------------

LINKS

SDL 2 - http://libsdl.org/index.php
Download - http://libsdl.org/download-2.0.php
SDL 2 TTF - https://www.libsdl.org/projects/SDL_ttf/
SDL 2 Image - https://www.libsdl.org/projects/SDL_image/
SDL 2 Mixer - https://www.libsdl.org/projects/SDL_mixer/
Visual Studio Community - https://visualstudio.microsoft.com/de/vs/community/
MinGW for Windows 64-bit - http://win-builds.org/doku.php
Download MinGW - http://win-builds.org/doku.php/download_and_installation_from_windows
MSYS2 for Windows - https://www.msys2.org/
Inter TrueType Font - https://www.fontsquirrel.com/fonts/inter
Fast wie Arch Linux... unter Windows! - https://youtu.be/RpzsjH7yZUg

--------------------------------------------------------------------------------


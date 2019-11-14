#!/bin/bash

# -----------------------------------------------------------------------------
# Diese Variable definiert, in welchem Ordner sich die erforderlichen Header-
# Dateien befinden. Das "-I" definiert die Include-Ordner-Markierung.
INCDIR="-I./src"
# -----------------------------------------------------------------------------
# Hier werden alle Quellcode-Dateien, die für das Game gebraucht werden,
# gelistet. Das Format mit einem Backslash ("\") pro Datei macht das gane etwas
# übersichtlicher um später mehr Dateien einzufügen.
SRC="
src/main.cpp \
src/MSController.cpp \
src/MSGameWindow.cpp \
src/MSEventHandler.cpp
"
# -----------------------------------------------------------------------------
# Mit dieser Variable wird definiert, wohin das kompilierte Produkt geschrieben
# werden soll. Der -o Parameter macht das für Dich.
OUTPUT="-o build/2048_3"
# -----------------------------------------------------------------------------
# Mit diesen Flags erzeugen wir ein optimiertes Programm. Die Kompilierung wird
# beim ersten kritischen Fehler gestoppt, so dass Du den Fehler direkt beheben
# kannst. Der Standard C++11 ist kompatibel mit den meisten Features die Du
# Du brauchst.
FLAGS="-std=c++11 -fpermissive -w -Wfatal-errors -O2"
# -----------------------------------------------------------------------------
# In dieser Variable werden alle Bibliotheken definiert, die für das Game
# erforderlich sind. Das "-l" vor jedem Eintrag muss so belassen werden.
LIBS="-lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer"
# -----------------------------------------------------------------------------
#
# Diese Zeile enthält das Kommando, dass den Code für Dich kompiliert. Es
# enthält alle oben definierten Variablen, um das Leben etwas einfacher zu
# machen. Das geht so:

g++ $INCDIR $FLAGS $SRC $OUTPUT $LIBS

# Es ist wichtig dass die Bibliotheken ans Ende gestellt werden, damit alles
# korrekt kompiliert werden kann.
# -----------------------------------------------------------------------------

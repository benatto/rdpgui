all: Window.h Signals.h
	g++ -g -o vncmenu main.cpp Window.cpp `pkg-config gtk+-2.0 --cflags --libs` 

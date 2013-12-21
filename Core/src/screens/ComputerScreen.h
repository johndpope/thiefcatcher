#ifndef COMPUTERSCREEN_H_
#define COMPUTERSCREEN_H_

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <SDL.h>

#include <Font.h>
#include <Surface.h>
#include <Window.h>

class ComputerScreen {

private:
	vector<string> lines;
	
	int currentLine;

	Font *font;
		
	Surface *bgSurf;

protected:
	Window* window;
	
	SDLKey readKey();
	
public:
	ComputerScreen(Window *window_);
	virtual ~ComputerScreen();
	
	void clear();	
	void addLine(string line);
	void showLines();
	
	void waitKey();
};

#endif


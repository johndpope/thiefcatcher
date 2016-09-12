#pragma once

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <SDL.h>

#include <Font.h>
#include <Surface.h>
#include <Window.h>
#include <Renderer.h>
#include <Texture.h>

using Kangaroo::Renderer;
using Kangaroo::Texture;

class ComputerScreen {

	vector<string> lines;
	
	unsigned int currentLine;

	Font *font;
		
protected:
	Renderer* renderer;
	Texture backgroundTexture;
	
	int readKey();
	
public:
	ComputerScreen(Renderer* renderer);
	virtual ~ComputerScreen();
	
	void clear();	
	void addLine(string line);
	void showLines();
	
	void waitKey();
};

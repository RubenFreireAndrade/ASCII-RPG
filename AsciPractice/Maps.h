#pragma once
#include<string>
#include<iostream>
#include<fstream>

class Maps
{

public:

	Maps(std::string mapName);
	~Maps();

	void Draw();
	void Load(std::string mapName);

private:

	char* picture;

	int width, height;
	int currentWidth = 0;
	int maxWidth = 0;
};


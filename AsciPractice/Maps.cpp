#include "Maps.h"
#include <iostream>
#include <fstream>
#include <string>

Maps::Maps(std::string mapName)
{
	Load(mapName);
}

Maps::~Maps()
{

}


void Maps::Load(std::string mapName)
{
	std::ifstream fileStream;
	fileStream.open(mapName + ".txt", std::ios::in);

	char c;

	int currentWidth = 0;
	int maxWidth = 0;
	height = 1;

	// determines the max width and height of map.txt file and considers spaces between each symbol as empty char.
	while (!fileStream.eof())
	{
		fileStream.get(c);

		currentWidth++;

		if (c == '\n')
		{
			height++;
			if (maxWidth < currentWidth)
			{
				maxWidth = currentWidth;
			}
			currentWidth = 0;
		}
	}

	width = maxWidth;

	picture = new char[width * height];

	fileStream.clear();
	fileStream.seekg(0);

	int x = 0, y = 0;

	picture[width * height - 1] = ' ';

	while (!fileStream.eof())
	{
		fileStream.get(c);

		int index = y * width + x;
		x++;

		picture[index] = c;

		if (c == '\n')
		{
			picture[index] = ' ';

			while (x < width)
			{
				index = y * width + x;

				picture[index] = ' ';

				x++;
			}

			y++;
			x = 0;
		}
	}
}

void Maps::Draw()
{
	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			std::cout << picture[y * width + x];
		}
		std::cout << std::endl;
	}
}

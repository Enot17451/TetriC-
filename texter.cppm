export module texter;

import <SFML/Graphics.hpp>;
import board;
import tetro;

using namespace sf;

export struct Texter{
	Font font;
	Text text[3];

	Texter() {
		bool load = font.loadFromFile("arial.ttf");
	}

	Text makeText(std::string str,int x, int y,int size) {
		Text text;
		text.setString(str);
		text.setFont(font);
		text.setCharacterSize(size);
		text.setPosition(x, y);
		return text;
	}
};
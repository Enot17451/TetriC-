export module game;

import <SFML/Graphics.hpp>;
import board;
import tetro;
import texter;

using namespace sf;

export struct Game {

	Clock clock;
	Time time;
	Texter texter;
	Tetro pieces;
	Board board;
	RenderWindow* window;

	Game(RenderWindow& wnd) {
		window = &wnd;
		clock.restart();
		texter.makeText("1", 100, 100, 20);
	}

	void update() {
		if (clock.getElapsedTime().asSeconds() >= 1) {
			board.moveDown();
			clock.restart();
		}
	}

	void draw() {
		window->clear(Color::White);
		for (int y = 0; y < 20; y++)
		{
			for (int x = 0; x < 10; x++)
			{
				window->draw(board.rects[y][x]);
			}
		}
		for (int i = 0; i < 3; i++)
		{
			window->draw(texter.text[i]);
		}
		window->display();
	}
};
export module tetro;
import <SFML/Graphics.hpp>;

using namespace sf;

export enum class Tetros {
	I,J,O,S,T,L,Z
};

export struct Tetro
{
	int id;
	Color colors[6]{
		Color::Blue,
		Color::Magenta,
		Color::Yellow,
		Color::Red,
		Color::Green,
		Color::Cyan
	};

	void getNextTetro() {

	}
};
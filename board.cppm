export module board;
import <SFML/Graphics.hpp>;

using namespace sf;

export struct Board
{
	float size = 40;
	bool waitNewTetro = true;
	RectangleShape rects[20][10];

	Board() {
		RectangleShape rect(Vector2f(size,size));
		rect.setOutlineThickness(1.0f);
		rect.setOutlineColor(Color::Black);
		for (int y = 0; y < 20; y++)
		{
			for (int x = 0; x < 10; x++)
			{
				rect.setPosition(Vector2f(100+size*x,20+size*y));
				rects[y][x] = RectangleShape(rect);
			}
		}
	}

	void moveDown() {

	}
};
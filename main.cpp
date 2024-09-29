import <SFML/Graphics.hpp>;
import game;

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(600, 840), "TetriC++");
    Game game(window);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        game.update();
        game.draw();
    }
    return 0;
}
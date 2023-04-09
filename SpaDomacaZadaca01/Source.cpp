#include <SFML/Graphics.hpp>
#include "flower.h"

int main()
{
	int WINDOW_HEIGHT = 600;
	int WINDOW_WIDTH = 800;


	sf::RenderWindow window(sf::VideoMode(WINDOW_HEIGHT, WINDOW_WIDTH), "Hello from SFML window!");
	window.setFramerateLimit(200);
	Flower flower(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//velicina na x i y , za centar (400,300)

		window.clear();
		flower.draw(); 
		window.display();
	}

	return 0;
}
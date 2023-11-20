#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::Window window(sf::VideoMode(800, 600), "Pong Clone");

	while (window.isOpen())
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
	}
	return 0;
}
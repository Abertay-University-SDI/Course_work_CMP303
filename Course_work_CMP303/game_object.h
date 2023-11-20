#pragma once
#include <SFML/Graphics.hpp>

class game_object
{
public:

	game_object();
	~game_object();

	//getter
	sf::Vector2f get_position();

	//setter
	void set_position(sf::Vector2f position);

	//sprite if needed
	sf::Sprite get_sprite();

protected:
	sf::Vector2f last_updated_position;

	sf::Sprite sprite;
};


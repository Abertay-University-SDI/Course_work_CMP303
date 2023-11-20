#include "game_object.h"

game_object::game_object()
{
}

game_object::~game_object()
{
}

sf::Vector2f game_object::get_position()
{
	this->last_updated_position = this->get_position();
	return this->get_position();
}

void game_object::set_position(sf::Vector2f position)
{
	this->last_updated_position = position;
	this->set_position(position);
}

sf::Sprite game_object::get_sprite()
{
	return sprite;
}

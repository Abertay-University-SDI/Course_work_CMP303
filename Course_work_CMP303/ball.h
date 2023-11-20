#pragma once
#include "game_object.h"

enum possible_outcomes
{
	miss,
	player_1_hit,
	player_2_hit,
	player_3_hit,
	player_4_hit,
	player_one_get_point,
	player_two_get_point,
	player_three_get_point,
	player_four_get_point,
};

class ball : public game_object
{
public:
	ball();
	~ball();

private:
	sf::RectangleShape m_shape;
	sf::Vector2f m_position;

	float m_speed = 10.0f;
	float m_x_direction = 1.0f;
	float m_y_direction = 1.0f;
};


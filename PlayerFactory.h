#pragma once
#include"ObjectFactory.h"
#include"Player.h"

class PlayerFactory : public ObjectFactory
{
public:
	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) override { return std::make_unique<Player>(); };
};
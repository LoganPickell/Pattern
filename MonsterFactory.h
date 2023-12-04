#pragma once
#include"ObjectFactory.h"
#include"Monster.h"

class MonsterFactory : public ObjectFactory
{
public:
	std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) override { return std::make_unique<Monster>(objects.front()); };
};
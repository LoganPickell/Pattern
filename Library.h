#pragma once

#include<string>
#include<map>
#include<memory>
#include"MonsterFactory.h"
#include"PlayerFactory.h"

class ObjectFactory;
class Library {
public:
	std::map<std::string, std::unique_ptr<ObjectFactory>> inventory;

	Library() {
		inventory["Player"] = std::make_unique<PlayerFactory>();
		inventory["Monster"] = std::make_unique<MonsterFactory>();
	}
};
#pragma once

#include<memory>
#include<vector>


class Object;
class ObjectFactory {
public: 
	virtual std::unique_ptr<Object> create(std::vector<std::unique_ptr<Object>>& objects) = 0;
};
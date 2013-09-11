#pragma once

#include "Apple.h"

#include <vector>

class Tree
{
public:
    Tree();
    ~Tree();

	int Grow();
	int Shake();

	int CountApples() const;

private:
	std::vector<Apple> m_apples;
};

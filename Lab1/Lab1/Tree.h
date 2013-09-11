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
	int Blossom();

	int CountApples() const;
	int CountFlowers() const;

private:
	std::vector<Apple> m_apples;
	int m_flowers;
};

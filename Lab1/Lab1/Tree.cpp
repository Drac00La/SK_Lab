#include "Tree.h"

#include <cstdlib>

Tree::Tree() :
	m_flowers(0)
{
}

Tree::~Tree()
{
}

int Tree::Grow()
{
	for (int i = 0; i < m_flowers; i++)
	{
		m_apples.push_back(Apple());
	}
	int const temp = m_flowers;
	m_flowers = 0;
	return temp;
}

int Tree::Shake()
{
	int const num = rand() % (m_apples.size() + 1);
	for (int i = 0; i < num; i++)
	{
		m_apples[i].Drop();
	}
	m_apples.erase(m_apples.begin(), m_apples.begin() + num);
	return num;
}

int Tree::Blossom()
{
	int const num = rand() % 10;
	m_flowers += num;
	return num;
}

int Tree::CountApples() const
{
	return m_apples.size();
}

int Tree::CountFlowers() const
{
	return m_flowers;
}

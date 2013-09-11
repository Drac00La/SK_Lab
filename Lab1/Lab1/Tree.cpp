#include "Tree.h"

#include <cstdlib>

Tree::Tree()
{
}

Tree::~Tree()
{
}

int Tree::Grow()
{
	int const num = rand() % 10;
	for (int i = 0; i < num; i++)
	{
		m_apples.push_back(Apple());
	}
	return num;
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

int Tree::CountApples() const
{
	return m_apples.size();
}

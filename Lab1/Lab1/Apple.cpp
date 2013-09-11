#include "Apple.h"

#include <cstdlib>

Apple::Apple()
{
	m_count = rand() % 5 + 1;
}

Apple::~Apple()
{
}

int Apple::Drop()
{
	int temp = m_count;
	m_count = 0;
    return temp;
}
#include "pch.h"
#include "Zoo.h"
#include "Animal.h"

CZoo::CZoo()
{
    std::cout << "����� �������� �濵�� �Դϴ�." << std::endl;
}

CZoo::~CZoo()
{
    m_vecAnimal.clear();
    std::cout << "�������� �ε��� �����. �Ф�" << std::endl;
}

void CZoo::performActions()
{
    size_t size = m_vecAnimal.size();
    for (size_t i = NULL; i < size; ++i)
    {
        m_vecAnimal[i].get()->makeSound();
    }
}


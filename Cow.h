#pragma once
#include "Animal.h"
class CCow :
    public CAnimal
{
public:
    CCow()
    {
        std::cout << "�Ұ� �������� ���ɴϴ�." << std::endl;
    }
    ~CCow() override
    {
        std::cout << "��!! �Ұ� ���������� ��������.�Ф�" << std::endl;
    }
    virtual void makeSound() override
    {
        std::cout << "����!" << std::endl;
    }
};


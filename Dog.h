#pragma once
#include "Animal.h"
class CDog :
    public CAnimal
{
public:
    CDog()
    {
        std::cout << "�������� �������� ���ɴϴ�." << std::endl;
    }
    ~CDog() override
    {
        std::cout << "��!! �������� ���������� ��������.�Ф�" << std::endl;
    }
    virtual void makeSound() override
    {
        std::cout << "�۸�!" << std::endl;
    }
};


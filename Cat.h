#pragma once
#include "Animal.h"
class CCat :
    public CAnimal
{
public:
    CCat()
    {
        std::cout << "����̰� �������� ���ɴϴ�." << std::endl;
    }
    ~CCat() override
    {
        std::cout << "��!! ����̰� ���������� ��������.�Ф�" << std::endl;
    }
    virtual void makeSound() override
    {
        std::cout << "�Ŀ�!" << std::endl;
    }
};


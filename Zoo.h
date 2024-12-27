#pragma once

class CAnimal;

class CZoo
{
public:
	CZoo();
	~CZoo();
private:
	std::vector<std::unique_ptr<CAnimal>> m_vecAnimal;
public:
    // ������ �������� �߰��ϴ� �Լ�
    // - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
    // - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
    // - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
    // - ��ȯ��: ����
    void addAnimal(std::unique_ptr<CAnimal> animal)
    {
        m_vecAnimal.push_back(std::move(animal));
    }

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions();
};


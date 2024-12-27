#include "pch.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
/*
�� ������ �� �����̸� �����е��� ��ü ������ ���α׷����� �ϱ� ���� �ʼ� ������ **�������� ���**�� ���� ��� �������̴ϴ�! 
���������� �⺻ ������ �����ߴٸ� �������� "���� �ڵ�"�� �����ϱ� ���� OOP ������ �ϳ��� �������ſ���.

���, �̷��� ������ �𸮾� C++ ���߿����� �ſ� �߿��ؿ�. �𸮾� ������ �ٷ�� ���� �پ��� ���ͳ� ������Ʈ�� ����Ͽ� ����� Ȯ���ϰų� 
���� �ٸ� ��ü���� ����� �������̽��� �ٷ��� �ϴ� ��Ȳ�� ���� �߻��ϰŵ��.

�̹� ������ �������� ����� ����� ������, �߻� Ŭ������ Ȱ���ϴ� ������ �����е鿡�� �����Ұ̴ϴ�. �������� �پ��� �Ҹ��� �����ϸ� 
�������� �������� Ȯ�强�� ���� ü���غ��ô°���! �������� �ڵ� �� �������� �𸮾� ���� ���� �ӿ��� � �Ҹ��� ���� 
����غ��� �͵� ��������ſ���!
*/

// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
std::unique_ptr<CAnimal> createRandomAnimal()
{
	switch (rand() % 3)
	{
	case Dog:
		return std::make_unique<CDog>();
		break;
	case Cat:
		return std::make_unique<CCat>();
		break;
	case Cow:
		return std::make_unique<CCow>();
		break;
	default:
		break;
	}
}
int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	srand((unsigned int)time(NULL));

	CZoo zoo;
	
	for(int i=0;i<10;++i)
	{
		zoo.addAnimal(createRandomAnimal());
	}

	// �������� ��� �ൿ�ǽ�.
	zoo.performActions();
	return NULL;
}
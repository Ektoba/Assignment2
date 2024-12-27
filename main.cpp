#include "pch.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"
#include "Zoo.h"
/*
이 과제를 할 때쯤이면 여러분들은 객체 지향적 프로그래밍을 하기 위한 필수 개념인 **다형성과 상속**에 대해 배워 보았을겁니다! 
이전까지는 기본 문법에 집중했다면 이제부턴 "좋은 코드"를 구현하기 위한 OOP 개념을 하나씩 익혔을거에요.

사실, 이러한 개념은 언리얼 C++ 개발에서도 매우 중요해요. 언리얼 엔진을 다루다 보면 다양한 액터나 컴포넌트를 상속하여 기능을 확장하거나 
서로 다른 객체들을 공통된 인터페이스로 다루어야 하는 상황이 자주 발생하거든요.

이번 과제는 다형성과 상속을 충분히 익히고, 추상 클래스를 활용하는 경험을 여러분들에게 제공할겁니다. 동물들의 다양한 소리를 구현하며 
다형성의 유연성과 확장성을 직접 체감해보시는거죠! 여러분의 코드 속 동물들이 언리얼 게임 세계 속에서 어떤 소리를 낼지 
상상해보는 것도 재미있을거에요!
*/

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
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

	// 동물들의 모든 행동실시.
	zoo.performActions();
	return NULL;
}
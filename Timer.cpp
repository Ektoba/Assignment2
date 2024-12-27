#include "pch.h"
#include "Timer.h"

CTimer::CTimer()
{
	m_Last = std::chrono::steady_clock::now(); // ��ü ������ �ð�üũ
}

CTimer::~CTimer()
{
}

float CTimer::Mark()
{
	// �����ϴµ� �ɸ��� �ð�.
	const std::chrono::steady_clock::time_point OldTime= m_Last;
	std::chrono::duration<float> DeltaTime = m_Last - OldTime;
	return DeltaTime.count();
}

float CTimer::Peek()
{
	// ȣ��� ������ �ð� ���ϱ�.
	auto now = std::chrono::steady_clock::now();	
	float DeltaTime = std::chrono::duration<float>(std::chrono::steady_clock::now() - m_Last).count();
	m_Last = now;
	return DeltaTime;
}

#include "stdafx.h"
#include "Player.h"

CPlayer* CPlayer::m_pInstance = nullptr;

CPlayer::CPlayer(void)
{
	m_CurrentPosition.x_Coordinate = 0;
	m_CurrentPosition.y_Coordinate = 0;
	SetName("주인공");
	// 기초 파라미터 설정
	m_HP = 450;
	m_MP = 150;
	m_STR = 18;
	m_DEX = 18;
	m_INT = 18;
}

CPlayer::~CPlayer(void)
{
}

CPlayer* CPlayer::GetInstance()
{
	if (m_pInstance == nullptr)
	{
		m_pInstance = new CPlayer();
		return m_pInstance;
	}
	else
	{
		return m_pInstance;
	}
}

// 이동하는 메소드
void CPlayer::MovePlayer(DIRECTION DIR)
{
	if (DIR == DIR_UP && (m_CurrentPosition.x_Coordinate > 0) )
	{
		--m_CurrentPosition.x_Coordinate;
	}

	if (DIR == DIR_DOWN && (m_CurrentPosition.x_Coordinate < WORLD_MAP_HEIGHT-1) )
	{
		++m_CurrentPosition.x_Coordinate;
	}

	if (DIR == DIR_LEFT && (m_CurrentPosition.y_Coordinate > 0))
	{
		--m_CurrentPosition.y_Coordinate;
	}

	if (DIR == DIR_RIGHT && (m_CurrentPosition.y_Coordinate < WORLD_MAP_WIDTH-1) )
	{
		++m_CurrentPosition.y_Coordinate;
	}
}

void CPlayer::PrintPosition()
{
	printf_s("현재 위치는 : %d, %d 입니다. \n", m_CurrentPosition.x_Coordinate, m_CurrentPosition.y_Coordinate);
}

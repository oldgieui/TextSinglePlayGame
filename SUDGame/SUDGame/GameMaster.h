#pragma once
#include "config.h"
#include "Monster.h"
class CGameMaster
{
public:
	CGameMaster(void);
	~CGameMaster(void);

	void CreateAndLocaleMonsters();

	void StartBattle(CMonster* mob);
	void CheckMob(Position position);

};


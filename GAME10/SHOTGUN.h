#pragma once
#include "WEAPONS.h"
class SHOTGUN :public WEAPONS
{
public:
	struct DATA {
		VECTOR2 Pos;
		VECTOR2 LPos;
		int GunsImg = 0;
		int speed = 0;
		int bulletNum = 0;
		int damage = 0;
		int damageUp = 0;
		int ctIntervalTime = 0;//タイムの設定
		int intervalTime = 0;
		int Level = 0;
	};
private:
	DATA ShotGun;
public:
	SHOTGUN(class GAME10_GAME* game);
	~SHOTGUN();
	void create();
	void init();
	void proc();
	void launch(VECTOR2 pos, int lane);
	void levelUp();
	void draw();
	int damage() { return ShotGun.damage + ShotGun.damageUp * (ShotGun.Level - 1); }
};


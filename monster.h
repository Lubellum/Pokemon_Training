#ifndef MONSTER_H_INCLUDED

#define MONSTER_H_INCLUDED

#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  【モンスター】基底クラス
// ====================================================================== //

class CMonster
{
public:

	CMonster();
	CMonster
	(
		int aLevel,
		int aHitPoint,
		int aAttackPoint,
		int aDefencePoint
	);
	~CMonster();

	int Attack();
	int Guard(int aAttackpoint);
	void Damage(int aDamage);


private:

	int mLevel;        // レベル
	int mHitPoint;     // HP
	int mAttackPoint;  // 攻撃
	int mDefencePoint; // 防御
};

#endif
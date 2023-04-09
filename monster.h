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
		std::string aName,
		int aLevel,
		int aHitPoint,
		int aAttackPoint,
		int aDefencePoint
	);
	~CMonster();

	int Attack();
	bool Guard();
	void Damage(int aDamage);


private:

	std::string mName;         // 名前
	int mLevel;        // レベル
	int mHitPoint;     // HP
	int mAttackPoint;  // 攻撃
	int mDefencePoint; // 防御
	bool mGuardFlag;
};

#endif
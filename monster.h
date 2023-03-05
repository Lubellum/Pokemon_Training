#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  【基底クラス】モンスター
// ====================================================================== //
class CMonster
{
public:

	CMonster();
	~CMonster();

	int Attack();
	void Damage(int aDamage);


private:

	int mLevel;
	int mHitpoint;
	int mAttackPoint;
	int mDefencePoint;
};
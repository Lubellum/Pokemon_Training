#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  【基底クラス】モンスター
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
	void Damage(int aDamage);


private:

	int mLevel;
	int mHitPoint;
	int mAttackPoint;
	int mDefencePoint;
};
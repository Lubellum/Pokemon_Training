#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  yŠî’êƒNƒ‰ƒXzƒ‚ƒ“ƒXƒ^[
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

	int mLevel;        // ƒŒƒxƒ‹
	int mHitPoint;     // HP
	int mAttackPoint;  // UŒ‚
	int mDefencePoint; // –hŒä
};
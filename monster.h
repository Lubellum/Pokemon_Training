#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  �y���N���X�z�����X�^�[
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
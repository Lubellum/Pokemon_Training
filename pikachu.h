#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  ピカチュウ
// ====================================================================== //
class CPikachu
{
public:

	CPikachu();
	~CPikachu();

	int Attack();
	void Damage(int aDamage);


private:

	int mLevel;
	int mHitpoint;
	int mAttackPoint;
	int mDefencePoint;
};
#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  �~���E�c�[
// ====================================================================== //

class CMewtwo
{
public:

	CMewtwo();
	~CMewtwo();

	int Attack();
	void Damage(int aDamage);

private:

	int mLevel;
	int mHitpoint;
	int mAttackPoint;
	int mDefencePoint;
};
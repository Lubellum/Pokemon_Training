#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  �y���N���X�z�����X�^�[
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

	int mLevel;        // ���x��
	int mHitPoint;     // HP
	int mAttackPoint;  // �U��
	int mDefencePoint; // �h��
};
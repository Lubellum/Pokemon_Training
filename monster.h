#ifndef MONSTER_H_INCLUDED

#define MONSTER_H_INCLUDED

#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  �y�����X�^�[�z���N���X
// ====================================================================== //

class CMonster
{
public:

	CMonster();
	CMonster
	(
		int aName,
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

	int mName;         // ���O
	int mLevel;        // ���x��
	int mHitPoint;     // HP
	int mAttackPoint;  // �U��
	int mDefencePoint; // �h��
};

#endif
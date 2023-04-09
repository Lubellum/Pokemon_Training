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

	std::string mName;         // ���O
	int mLevel;        // ���x��
	int mHitPoint;     // HP
	int mAttackPoint;  // �U��
	int mDefencePoint; // �h��
	bool mGuardFlag;
};

#endif
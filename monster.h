#ifndef MONSTER_H_INCLUDED

#define MONSTER_H_INCLUDED

#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  �y�����X�^�[�z���N���X
// ====================================================================== //

class CMonster
{
public:

	virtual bool FaintFlag();
	virtual int Attack();
	virtual bool Guard();
	virtual void Damage(int aDamage);


protected:

	CMonster
	(
		std::string aName,
		int aLevel,
		int aHitPoint,
		int aAttackPoint,
		int aDefencePoint
	);
	virtual ~CMonster() = 0;


private:

	// todo:
	// �����Ȃ��̃R���X�g���N�^�́A�y�C���X�^���X�𐶐����H�z�Ɏ����ō쐬����邽�߁A�L�q�͕s�v�H
	//CMonster();
	std::string mName;         // ���O
	int mLevel;        // ���x��
	int mHitPoint;     // HP
	int mAttackPoint;  // �U��
	int mDefencePoint; // �h��
	bool mGuardFlag;
};

#endif
#include "monster.h"

CMonster::CMonster()
	: mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint()
{
}

CMonster::CMonster(
	int aLevel,       // ���x��
	int aHitpoint,    // HP
	int aAttackPoint, // �U��
	int aDefencePoint // �h��
)
	: mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint)
{
	std::cout << "�a��!\n";

	std::cout << "���x��\t= " << mLevel        << "\n";
	std::cout << "HP    \t= " << mHitPoint     << "\n";
	std::cout << "�U��  \t= " << mAttackPoint  << "\n";
	std::cout << "�h��  \t= " << mDefencePoint << "\n";
}

CMonster::~CMonster()
{
}
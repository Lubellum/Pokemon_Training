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

// ------------------------------------------------------------------------- //
//  �U��.
// ------------------------------------------------------------------------- //
int CMonster::Attack()
{
    std::cout << "" << "��" << "�U���I\n";
    std::cout << "" << "\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  �h��.
// ------------------------------------------------------------------------- //
int CMonster::Guard(int aAttackPoint)
{
    std::cout << "" << "��" << "�h��I\n";
    int result = aAttackPoint / 2;
    return result;
}

// ------------------------------------------------------------------------- //
//  �_���[�W.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    mHitPoint -= aDamagePoint;

    std::cout << "" << "��" << "�U�����󂯂��B\n";
    std::cout << aDamagePoint << " �_���[�W�I" << "\n";
    std::cout << "�c��HP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << "" << "��" << "�|�ꂽ�B\n";
    }
}
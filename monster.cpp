#include "monster.h"

//CMonster::CMonster()
//	: mName(), mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint(), mGuardFlag()
//{
//}

CMonster::CMonster(
    std::string aName,
	int aLevel,       // ���x��
	int aHitpoint,    // HP
	int aAttackPoint, // �U��
	int aDefencePoint // �h��
)
	: mName(aName), mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint), mGuardFlag()
{
	std::cout << mName << "�a��!\n";

	std::cout << "���x��\t= " << mLevel        << "\n";
	std::cout << "HP    \t= " << mHitPoint     << "\n";
	std::cout << "�U��  \t= " << mAttackPoint  << "\n";
	std::cout << "�h��  \t= " << mDefencePoint << "\n";
}

CMonster::~CMonster()
{
}

bool CMonster::FaintFlag()
{
    if (mHitPoint <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// ------------------------------------------------------------------------- //
//  �U��.
// ------------------------------------------------------------------------- //
int CMonster::Attack()
{
    std::cout << mName << "��" << "�U���I\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  �h��.
// ------------------------------------------------------------------------- //
bool CMonster::Guard()
{
    std::cout << mName << "��" << "�h��I\n";
    mGuardFlag = true;
    return mGuardFlag;
}

// ------------------------------------------------------------------------- //
//  �_���[�W.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    std::cout << mName << "��" << "�U�����󂯂��B\n";

    if (mGuardFlag)
    {
        aDamagePoint -= aDamagePoint / 2;
    }

    std::cout << aDamagePoint << " �_���[�W�I" << "\n";
    mHitPoint -= aDamagePoint;
    std::cout << "�c��HP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << mName << "��" << "�|�ꂽ�B\n";
    }
}
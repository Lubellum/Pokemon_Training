#include "monster.h"

//CMonster::CMonster()
//	: mName(), mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint(), mGuardFlag()
//{
//}

CMonster::CMonster(
    std::string aName,
	int aLevel,       // ƒŒƒxƒ‹
	int aHitpoint,    // HP
	int aAttackPoint, // UŒ‚
	int aDefencePoint // –hŒä
)
	: mName(aName), mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint), mGuardFlag()
{
	std::cout << mName << "’a¶!\n";

	std::cout << "ƒŒƒxƒ‹\t= " << mLevel        << "\n";
	std::cout << "HP    \t= " << mHitPoint     << "\n";
	std::cout << "UŒ‚  \t= " << mAttackPoint  << "\n";
	std::cout << "–hŒä  \t= " << mDefencePoint << "\n";
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
//  UŒ‚.
// ------------------------------------------------------------------------- //
int CMonster::Attack()
{
    std::cout << mName << "‚Ì" << "UŒ‚I\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  –hŒä.
// ------------------------------------------------------------------------- //
bool CMonster::Guard()
{
    std::cout << mName << "‚Ì" << "–hŒäI\n";
    mGuardFlag = true;
    return mGuardFlag;
}

// ------------------------------------------------------------------------- //
//  ƒ_ƒ[ƒW.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    std::cout << mName << "‚Í" << "UŒ‚‚ğó‚¯‚½B\n";

    if (mGuardFlag)
    {
        aDamagePoint -= aDamagePoint / 2;
    }

    std::cout << aDamagePoint << " ƒ_ƒ[ƒWI" << "\n";
    mHitPoint -= aDamagePoint;
    std::cout << "c‚èHP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << mName << "‚Í" << "“|‚ê‚½B\n";
    }
}
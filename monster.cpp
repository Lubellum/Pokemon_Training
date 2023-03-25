#include "monster.h"

CMonster::CMonster()
	: mName(), mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint()
{
}

CMonster::CMonster(
    int aName,
	int aLevel,       // ƒŒƒxƒ‹
	int aHitpoint,    // HP
	int aAttackPoint, // UŒ‚
	int aDefencePoint // –hŒä
)
	: mName(aName), mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint)
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

// ------------------------------------------------------------------------- //
//  UŒ‚.
// ------------------------------------------------------------------------- //
int CMonster::Attack()
{
    std::cout << mName << "‚Ì" << "UŒ‚I\n";
    std::cout << mName << "\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  –hŒä.
// ------------------------------------------------------------------------- //
int CMonster::Guard(int aAttackPoint)
{
    std::cout << mName << "‚Ì" << "–hŒäI\n";
    int result = aAttackPoint / 2;
    return result;
}

// ------------------------------------------------------------------------- //
//  ƒ_ƒ[ƒW.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    mHitPoint -= aDamagePoint;

    std::cout << mName << "‚Í" << "UŒ‚‚ğó‚¯‚½B\n";
    std::cout << aDamagePoint << " ƒ_ƒ[ƒWI" << "\n";
    std::cout << "c‚èHP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << mName << "‚Í" << "“|‚ê‚½B\n";
    }
}
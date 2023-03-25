#include "monster.h"

CMonster::CMonster()
	: mName(), mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint()
{
}

CMonster::CMonster(
    int aName,
	int aLevel,       // x
	int aHitpoint,    // HP
	int aAttackPoint, // U
	int aDefencePoint // hä
)
	: mName(aName), mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint)
{
	std::cout << mName << "a¶!\n";

	std::cout << "x\t= " << mLevel        << "\n";
	std::cout << "HP    \t= " << mHitPoint     << "\n";
	std::cout << "U  \t= " << mAttackPoint  << "\n";
	std::cout << "hä  \t= " << mDefencePoint << "\n";
}

CMonster::~CMonster()
{
}

// ------------------------------------------------------------------------- //
//  U.
// ------------------------------------------------------------------------- //
int CMonster::Attack()
{
    std::cout << mName << "Ì" << "UI\n";
    std::cout << mName << "\n";
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  hä.
// ------------------------------------------------------------------------- //
int CMonster::Guard(int aAttackPoint)
{
    std::cout << mName << "Ì" << "häI\n";
    int result = aAttackPoint / 2;
    return result;
}

// ------------------------------------------------------------------------- //
//  _[W.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    mHitPoint -= aDamagePoint;

    std::cout << mName << "Í" << "Uðó¯½B\n";
    std::cout << aDamagePoint << " _[WI" << "\n";
    std::cout << "cèHP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << mName << "Í" << "|ê½B\n";
    }
}
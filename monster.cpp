#include "monster.h"

CMonster::CMonster()
	: mName(), mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint()
{
}

CMonster::CMonster(
    std::string aName,
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
    return mAttackPoint;
}

// ------------------------------------------------------------------------- //
//  hä.
// ------------------------------------------------------------------------- //
bool CMonster::Guard()
{
    std::cout << mName << "Ì" << "häI\n";
    bool result = true;
    return result;
}

// ------------------------------------------------------------------------- //
//  _[W.
// ------------------------------------------------------------------------- //
void CMonster::Damage(int aDamagePoint)
{
    std::cout << mName << "Í" << "Uðó¯½B\n";

    if (Guard() == true)
    {
        aDamagePoint -= aDamagePoint / 2;
    }

    std::cout << aDamagePoint << " _[WI" << "\n";
    mHitPoint -= aDamagePoint;
    std::cout << "cèHP = " << mHitPoint << "\n";
    if (mHitPoint <= 0)
    {
        std::cout << mName << "Í" << "|ê½B\n";
    }
}
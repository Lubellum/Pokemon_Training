#include "monster.h"

CMonster::CMonster()
	: mLevel(), mHitPoint(), mAttackPoint(), mDefencePoint()
{
}

CMonster::CMonster(
	int aLevel,       // ƒŒƒxƒ‹
	int aHitpoint,    // HP
	int aAttackPoint, // UŒ‚
	int aDefencePoint // –hŒä
)
	: mLevel(aLevel), mHitPoint(aHitpoint), mAttackPoint(aAttackPoint), mDefencePoint(aDefencePoint)
{
	std::cout << "’a¶!\n";

	std::cout << "ƒŒƒxƒ‹\t= " << mLevel        << "\n";
	std::cout << "HP    \t= " << mHitPoint     << "\n";
	std::cout << "UŒ‚  \t= " << mAttackPoint  << "\n";
	std::cout << "–hŒä  \t= " << mDefencePoint << "\n";
}

CMonster::~CMonster()
{
}
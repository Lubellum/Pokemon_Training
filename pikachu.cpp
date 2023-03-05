#include "pikachu.h"

// ---------------------------------------------------------------------- //
//  コンストラクタ
// ---------------------------------------------------------------------- //

CPikachu::CPikachu()
	: mLevel(1), mHitpoint(50), mAttackPoint(20), mDefencePoint(20)
{
	std::cout << "ピカチュウ誕生！\n";

	std::cout << "レベル ：" << mLevel << "\n";
	std::cout << "HP　　 ：" << mHitpoint << "\n";
	std::cout << "攻撃力 ：" << mAttackPoint << "\n";
	std::cout << "防御力 ：" << mDefencePoint << "\n";
}

// ---------------------------------------------------------------------- //
//  デストラクタ
// ---------------------------------------------------------------------- //

CPikachu::~CPikachu()
{
}

// ---------------------------------------------------------------------- //
//  攻撃
// ---------------------------------------------------------------------- //

int CPikachu::Attack()
{
	std::cout << "10万ボルト！\n";
	return mAttackPoint;
}

// ---------------------------------------------------------------------- //
//  ダメージ
// ---------------------------------------------------------------------- //

void CPikachu::Damage(int aDamage)
{
	mHitpoint -= aDamage;
	std::cout << "ピカチュウはダメージを受けた\n";
	std::cout << "HP　　 :" << mHitpoint << "\n";
	if (mHitpoint <= 0)
	{
		std::cout << "ピカチュウは倒れた\n";
	}
}
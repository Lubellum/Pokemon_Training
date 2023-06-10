#ifndef MONSTER_H_INCLUDED

#define MONSTER_H_INCLUDED

#include <iostream>

// ====================================================================== // ---------------------------------------------------------------------- //
//  【モンスター】基底クラス
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
	// 引数なしのコンストラクタは、【インスタンスを生成時？】に自動で作成されるため、記述は不要？
	//CMonster();
	std::string mName;         // 名前
	int mLevel;        // レベル
	int mHitPoint;     // HP
	int mAttackPoint;  // 攻撃
	int mDefencePoint; // 防御
	bool mGuardFlag;
};

#endif
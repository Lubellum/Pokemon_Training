#include <iostream>

#include "pikachu.h"
#include "mewtwo.h"
#include "squirtle.h"

enum class tAction : int
{
	tAttack, // 0
	tGuard,  // 1
};

// 1P用の入力関数
tAction inputaction1()
{
	std::cout << "数字を入力してください 攻撃：0  防御；1\n";
	int command;
	std::cin >> command;

	return static_cast<tAction>(command);
}

// 2P用の入力関数
tAction inputaction2()
{
	std::cout << "数字を入力してください 攻撃：0  防御；1\n";
	int command;
	std::cin >> command;

	return static_cast<tAction>(command);
}

void execusion(CMonster * pokemon1, CMonster * pokemon2, tAction command1, tAction command2)
{
	int pokemon1AttackPoint = pokemon1->Attack();
	int pokemon2AttackPoint = pokemon2->Attack();
	int pokemon1GuardPoint = pokemon1->Guard(pokemon2AttackPoint);
	int pokemon2GuardPoint = pokemon1->Guard(pokemon1AttackPoint);

	if (command1 == tAction::tAttack && command2 == tAction::tAttack)
	{
		pokemon1->Damage(pokemon2AttackPoint);
		pokemon2->Damage(pokemon1AttackPoint);
	}
	else if (command1 == tAction::tAttack && command2 == tAction::tGuard)
	{
		pokemon1->Damage(pokemon2AttackPoint);
		pokemon2->Damage(pokemon2GuardPoint);
	}
	else if (command1 == tAction::tGuard && command2 == tAction::tAttack)
	{
		pokemon1->Damage(pokemon1GuardPoint);
		pokemon2->Damage(pokemon1AttackPoint);
	}
	else if (command1 == tAction::tGuard && command2 == tAction::tGuard)
	{
		std::cout << "お互いに防御！\n";
	}
	else
	{
		std::cout << "数字は0か1を入力してください\n";
	}
}

int main()
{
	CPikachu pikachu;
	CMewtwo  mewtwo;
	CSquirtle squirtle;

	tAction command1 = inputaction1();
	tAction command2 = inputaction2();

	execusion(&pikachu, &mewtwo, command1, command2);
}
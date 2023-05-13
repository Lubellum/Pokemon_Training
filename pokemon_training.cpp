#include <iostream>

#include "pikachu.h"
#include "mewtwo.h"
#include "squirtle.h"
#include <random>

enum class tAction : int
{
	tAttack, // 0
	tGuard,  // 1
};

tAction random_command()
{
	std::random_device seed;
	std::mt19937 mt(seed());
	
	return static_cast<tAction>(mt() %2);
}

// 1P用の入力関数
tAction inputaction1()
{
	std::cout << "数字を入力してください 攻撃：0  防御；1\n";
	int command;
	std::cin >> command;

	return static_cast<tAction>(command);
}

//// 2P用の入力関数
tAction inputaction2()
{
	return random_command();
}

void execusion(CMonster * pokemon1, CMonster * pokemon2, tAction command1, tAction command2)
{
	if (command1 == tAction::tAttack && command2 == tAction::tAttack)
	{
		int pokemon1AttackPoint = pokemon1->Attack();
		int pokemon2AttackPoint = pokemon2->Attack();

		pokemon1->Damage(pokemon2AttackPoint);
		pokemon2->Damage(pokemon1AttackPoint);
	}
	else if (command1 == tAction::tAttack && command2 == tAction::tGuard)
	{
		int pokemon1AttackPoint = pokemon1->Attack();
		pokemon2->Guard();

		pokemon2->Damage(pokemon1AttackPoint);
	}
	else if (command1 == tAction::tGuard && command2 == tAction::tAttack)
	{
		int pokemon2AttackPoint = pokemon2->Attack();
		pokemon1->Guard();

		pokemon1->Damage(pokemon2AttackPoint);
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

bool IsRoundFinish(CMonster * pokemon1, CMonster * pokemon2)
{
	if (pokemon1->FaintFlag())
	{
		return true;
	}
	else if (pokemon2->FaintFlag())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Team1Annihilation(CMonster* team1)
{
	int FaintCount = 0;

	for (int i = 0; i < 3; i++)
	{
		if (team1[i].FaintFlag())
		{
			FaintCount++;
		}
	}

	if (FaintCount == 3)
	{
		return true;
	}
	return false;
}

bool IsGameFinish(CMonster * team1, CMonster* team2)
{
	if (Team1Annihilation(team1))
	{
		return true;
	}
	else if (team2[0].FaintFlag() && team2[1].FaintFlag() && team2[2].FaintFlag())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	CPikachu pikachu[3];
	CMewtwo  mewtwo[3];
	CSquirtle squirtle[3];

	int Team1CurrentNumber = 0;
	int Team2CurrentNumber = 0;

	while (IsGameFinish(pikachu, mewtwo) == false)
	{
		std::cout << Team1CurrentNumber << "\n";
		std::cout << Team2CurrentNumber << "\n";
		
		tAction command1 = inputaction1();
		tAction command2 = inputaction2();

		execusion(&pikachu[Team1CurrentNumber], &mewtwo[Team2CurrentNumber], command1, command2);

		if (IsRoundFinish(&pikachu[Team1CurrentNumber], &mewtwo[Team2CurrentNumber]))
		{
			if (pikachu[Team1CurrentNumber].FaintFlag())
			{
				Team1CurrentNumber++;
			}
			
			if (mewtwo[Team2CurrentNumber].FaintFlag())
			{
				Team2CurrentNumber++;
			}
		}
	}
	std::cout << "ゲーム終了\n";
}
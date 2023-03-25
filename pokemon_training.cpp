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

int main()
{
	CPikachu pikachu;
	CMewtwo  mewtwo;
	CSquirtle squirtle;

	tAction inputaction1();
	tAction inputaction2();
}
#include "Enemy.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Enemy::Enemy(std::string name, int hp, int dmg)
{
	monsterName = name;
	currentHP = hp;
	damage = dmg;
}

Enemy::~Enemy()
{

}

void Enemy::ShowEnemy()
{
	std::cout << "======================================================================" << std::endl;

	std::cout << "A" << monsterName << " Appeared!" << std::endl;
	std::cout << "	With: " << currentHP << "HP" << std::endl;
	std::cout << "	And damage of: " << damage << std::endl;
}

void Enemy::ReceiveDamage(int dmg)
{
	currentHP = currentHP - dmg;
}

bool Enemy::IsAlive()
{
	return currentHP > 0;
}

int Enemy::GetEnemyHealth()
{
	return currentHP;
}

std::string Enemy::GetEnemyName()
{
	return monsterName;
}

int Enemy::GetEnemydamage()
{
	return damage;
}

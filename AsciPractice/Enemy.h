#pragma once
#include<iostream>
#include<string>

class Enemy
{
public:

	Enemy(std::string name, int hp, int dmg);
	~Enemy();

	void ShowEnemy();
	void ReceiveDamage(int dmg);

	bool IsAlive();

	int GetEnemyHealth();
	int GetEnemydamage();
	std::string GetEnemyName();

	int health, attackPwr;
	int damage;
	int currentHP;

	std::string monsterName;

private:

};


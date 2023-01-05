#include "BattleSystem.h"

BattleSystem::BattleSystem()
{

}

BattleSystem::~BattleSystem()
{

}

bool BattleSystem::Battle(Enemy* enemy, Player* player)
{
	while (enemy->IsAlive() && player->IsAlive())
	{
		std::cout << " Player attacks " << enemy->GetEnemyName() << " with " << player->damage << std::endl;
		enemy->ReceiveDamage(player->damage);

		if (!enemy->IsAlive())
		{
			break;
		}
		std::cout << enemy->GetEnemyName() << " attacks Player " << " with " << enemy->damage << " Damage " << std::endl;
		player->ReceiveDamage(enemy->damage);
	}

	if (player->IsAlive())
	{
		std::cout << " Player Won! " << std::endl;
		std::cout << player->currentHP << " HP left " << std::endl;
		return true;
	}
	else
	{
		std::cout << "YOU DIED!" << std::endl;
		return false;
	}
}

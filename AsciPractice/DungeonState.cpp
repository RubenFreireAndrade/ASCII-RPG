#include "DungeonState.h"

DungeonState::DungeonState(Player* p)
{
    player = p;
    map = new Maps("mapDungeon");
}

void DungeonState::Update()
{
    ClearScreen();
    map->Draw();
    std::cout << "You are now in a Dungeon." << std::endl;
    std::cout << "===========================================" << std::endl;
    Enemy* enemy = CreateEnemy();
    enemy->ShowEnemy();
    FightChoices();

    if (playerChoice == "1")
    {
        battleSystem->Battle(enemy, player);
        ClearScreen();
        std::cout << enemy->GetEnemyName() << "drops a piece of Medallion. It seems it's missing the rest of it, go find it!" << std::endl;
        std::cout << "Player receives First Piece of Medallion " << std::endl;
        player->Pickup("First Piece of Medallion");
    }
}

State* DungeonState::ChangeState()
{/*
    if (playerChoice == "1")
    {
        return new VillageState(player);
    }*/
    return nullptr;
}

#include "ResourceHolder.h"
#include <ctime>

ResourceHolder::ResourceHolder()
{
	srand((unsigned int)time(NULL));
    const std::string path = "CourseSFML/resources/SpriteSheet.png"; //se estiver na mesma pasta da SFML Sln: "SpriteSheet.png"

	sf::IntRect PlayerTankRect[2] = { { 1, 2, 13, 13 }, { 17, 2, 13, 13 } };
	loadTexture(Textures::T_10, path, PlayerTankRect, 2);
	sf::IntRect Enemy_10[2] = { { 129, 64, 13, 13 }, { 145, 64, 13, 13 } };
	loadTexture(Textures::Enemy_10, path, Enemy_10, 2);

	sf::IntRect Enemy_20[2] = { { 128, 80, 15, 15 }, { 144, 80, 15, 15 } };
	loadTexture(Textures::Enemy_20, path, Enemy_20, 2);

	sf::IntRect Enemy_30[2] = { { 128, 48, 16, 16 }, { 144, 48, 16, 16 } };
	loadTexture(Textures::Enemy_30, path, Enemy_30, 2);

	sf::IntRect Enemy_40[2] = { { 128, 112, 15, 15 }, { 144, 112, 15, 15 } };
	loadTexture(Textures::Enemy_40, path, Enemy_40, 2);

	sf::IntRect mainWall[1] = { { 368, 0, 16, 16 } };
	loadTexture(Textures::MainWall, path, mainWall, 1);
	sf::IntRect Wall_1[1] = { { 256, 64, 8, 8 } };
	loadTexture(Textures::Wall_1, path, Wall_1, 1);
	sf::IntRect Wall_2[1] = { { 256, 72, 8, 8 } };
	loadTexture(Textures::Wall_2, path, Wall_2, 1);
	sf::IntRect GreenWall[1] = { { 264, 72, 8, 8 } };
	loadTexture(Textures::GreenWall, path, GreenWall, 1);
	sf::IntRect WaterWall[1] = { { 256, 80, 8, 8 } };
	loadTexture(Textures::WaterWall, path, WaterWall, 1);
	
	
	sf::IntRect Bullet[1] = { { 323, 102, 3, 4 } };
	loadTexture(Textures::Bullet, path, Bullet, 1);


	sf::IntRect BonusStar[1] = { { 304, 112, 16, 15 } };
	loadTexture(Textures::BonusStar, path, BonusStar, 1);

	sf::IntRect BonusLife[1] = { { 336, 112, 16, 15 } };
	loadTexture(Textures::BonusLife, path, BonusLife, 1);

	sf::IntRect BonusMissle[1] = { { 352, 112, 16, 15 } };
	loadTexture(Textures::BonusMissle, path, BonusMissle, 1);

	sf::IntRect BulletCollision[2] = { { 256, 128, 16, 16 }, { 272, 128, 16, 16 } };
	loadTexture(Textures::BulletCollision, path, BulletCollision, 2);

	sf::IntRect TankCollision[3] = { { 256, 128, 16, 16 }, { 272, 128, 16, 16 }, { 288, 128, 16, 16 } };
	loadTexture(Textures::TankCollision, path, TankCollision, 3);

	sf::IntRect SuperBulletCollision[3] = { { 256, 128, 16, 16 }, { 272, 128, 16, 16 }, { 288, 128, 16, 16 } };
	loadTexture(Textures::SuperBulletCollision, path, SuperBulletCollision, 3);

	sf::IntRect Eagle[2] = { { 304, 32, 16, 16 }, { 320, 32, 16, 16 } };
	loadTexture(Textures::Eagle, path, Eagle, 2);

	sf::IntRect EagleCollision[2] = { { 304, 128, 32, 32 }, { 336, 128, 32, 32 } };
	loadTexture(Textures::EagleCollision, path, EagleCollision, 2);

	sf::IntRect RightPanel[1] = { { 375, 0, 26, 245 } };
	loadTexture(Textures::RightPanel, path, RightPanel, 1);

	sf::IntRect TankIcon[1] = { { 320, 192, 8, 8 } };
	loadTexture(Textures::TankIcon, path, TankIcon, 1);

	sf::IntRect Digit_0[1] = { { 328, 183, 8, 9 } };
	loadTexture(Textures::Digit_0, path, Digit_0, 1);

	sf::IntRect Digit_1[1] = { { 337, 183, 7, 9 } };
	loadTexture(Textures::Digit_1, path, Digit_1, 1);

	sf::IntRect Digit_2[1] = { { 344, 183, 8, 9 } };
	loadTexture(Textures::Digit_2, path, Digit_2, 1);

	sf::IntRect Digit_3[1] = { { 352, 183, 8, 9 } };
	loadTexture(Textures::Digit_3, path, Digit_3, 1);

	sf::IntRect Digit_4[1] = { { 360, 183, 8, 9 } };
	loadTexture(Textures::Digit_4, path, Digit_4, 1);

	sf::IntRect Digit_5[1] = { { 328, 191, 8, 9 } };
	loadTexture(Textures::Digit_5, path, Digit_5, 1);

	sf::IntRect Digit_6[1] = { { 336, 191, 8, 9 } };
	loadTexture(Textures::Digit_6, path, Digit_6, 1);

	sf::IntRect Digit_7[1] = { { 344, 191, 8, 9 } };
	loadTexture(Textures::Digit_7, path, Digit_7, 1);

	sf::IntRect Digit_8[1] = { { 352, 191, 8, 9 } };
	loadTexture(Textures::Digit_8, path, Digit_8, 1);

	sf::IntRect Digit_9[1] = { { 360, 191, 8, 9 } };
	loadTexture(Textures::Digit_9, path, Digit_9, 1);

	sf::IntRect Apperance[4] = { { 256, 96, 16, 16 }, { 272, 96, 16, 16 }, { 288, 96, 16, 16 }, { 304, 96, 16, 16 } };
	loadTexture(Textures::Apperance, path, Apperance, 4);

	//std::cout << "ResourceHolder Created!" << std::endl;
}

void ResourceHolder::loadTexture(Textures::ID id, const std::string& filename, sf::IntRect* rect, size_t count)
{
	sf::Texture * temp = new sf::Texture[count];
	while (count != 0){
		temp[count - 1].loadFromFile(filename, rect[count - 1]);
		count--;
	}

	mResourceMap.insert(std::make_pair(id, temp));
}

ResourceHolder::~ResourceHolder()
{
	for (auto itr = mResourceMap.begin(); itr != mResourceMap.end(); itr++){
		delete[] itr->second;
	}
}

#pragma once

#include <map>
#include <iostream>
#include <memory>

//#include "Category.h"

#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>




class ResourceHolder
{
public:
	ResourceHolder();
	virtual						~ResourceHolder();
	//sf::Texture*				getTexturePtr(Textures::ID id) { return mResourceMap.find(id)->second; }
private:
	//void						loadTexture(Textures::ID, const std::string&, sf::IntRect*, size_t);

private:
	//std::map<Textures::ID, sf::Texture*>	mResourceMap;
};


#include "../include/JokeProperties.h"

JokeProperties::JokeProperties()
{
}

JokeProperties::~JokeProperties()
{
}

void JokeProperties::setJokeCategory(JokeCategory newCategory)
{
	
	j_category = JOKE_CATEGORY_VALUES[newCategory];

}



void JokeProperties::setJokeType(JokeType newType)
{
	j_type = newType;
}

void JokeProperties::setJokeLang(const char newlang[3])
{
	j_lang = newlang;
}

void JokeProperties::setJokeBlacklistFlags(std::string newBlackFlag)
{
	j_blackflags.clear();
	j_blackflags.push_back(newBlackFlag);
}

void JokeProperties::setJokeBlacklistFlags(std::vector<std::string> newBlackFlags)
{
	j_blackflags.clear();
	j_blackflags = newBlackFlags;
}

std::string JokeProperties::getLangParam()
{
	std::string langParam = "lang=" + j_lang;
	return langParam;
}

std::string JokeProperties::getTypeParam()
{
	std::string typeParam = "type=";
	typeParam += j_type == JokeType::single ? "single" : "twopart";
	return typeParam;
}

std::string JokeProperties::getParams()
{
	std::string newParam =  j_category + "?";
	newParam += getLangParam();
	newParam += "&" + getTypeParam();


	return newParam;
}






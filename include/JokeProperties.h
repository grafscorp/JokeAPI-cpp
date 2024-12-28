#pragma once
#include <string>
#include <vector>
#include "joke_data.h"
class JokeProperties
{
public:
	JokeProperties();
	~JokeProperties();
    //Any, Mics, Programming, Dark, Pun, Spooky, Chrostmas
    void setJokeCategory(JokeCategory);
    void setJokeType(unsigned int);
    void setJokeLang(const char[3]);
    void setJokeBlacklistFlags(std::string);
    void setJokeBlacklistFlags(std::vector<std::string>);
    std::string getLangParam();
    std::string getTypeParam();
    std::string getParams();
protected:
	std::string j_lang = "en";
    std::string j_category = "Any";
    std::vector<std::string> j_blackflags;
    unsigned int j_type = JOKE_TYPE_SINGLE;


};

#pragma once
#include "nlohmann/json.hpp"
#include "joke_data.h"

#ifdef _DEBUG
#include <iostream>
#endif // _DEBUG
class JokeDataParser
{
public:
	JokeData parseJokeRes(std::string resJoke);



};


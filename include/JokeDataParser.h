#pragma once
#include "nlohmann/json.hpp"
#include "joke_data.h"
class JokeDataParser
{
public:
	JokeData parseJokeRes(std::string resJoke);



};


#include "../include/JokeDataParser.h"
#ifdef _DEBUG
#include <iostream>
#endif // _DEBUG


JokeData JokeDataParser::parseJokeRes(std::string resJoke)
{
	nlohmann::json resJson = nlohmann::json::parse(resJoke);

	if (resJson["error"].get<bool>())
	{
		throw resJson["code"].get<int>();
	}



	int id = resJson["id"].get<int>();


	std::string templang = resJson["lang"].get<std::string>();

	char lang[2] = { templang[0],templang[1] };
	std::string category = resJson["category"].get<std::string>();

	nlohmann::json resJsonFlags = resJson["flags"];
	JokeFlags jFlags = JokeFlags(resJsonFlags["nsfw"], resJsonFlags["religious"], resJsonFlags["political"], resJsonFlags["racist"], resJsonFlags["sexist"], resJsonFlags["explicit"]);



	unsigned int type = resJson["type"].get<std::string>() == "single" ? JokeType::single : JokeType::twoparts;
	//bool  safe =  resJson["safe"].get<nlohmann::json::boolean_t>();
	std::string joke[2];
	if (type == JokeType::single)
	{
		joke[0] = resJson["joke"];
		joke[1] = "null";
	}
	else
	{
		joke[0] = resJson["setup"];
		joke[1] = resJson["delivery"];
	}
	return JokeData(id, lang, category, type, jFlags, joke);




}
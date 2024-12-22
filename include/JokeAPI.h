#pragma once
#include <string>
#include "curl/curl.h"
#include "joke_data.h"
#include <iostream>
class JokeAPI
{
public:
	enum JokeResType
	{
		json = 0,
		xml,
		text
	};

	std::string getJokeRes(JokeResType,std::string);

protected:
	const std::string URL_JOKE_API = "https://v2.jokeapi.dev/joke/";
};

size_t write_data(void* buffer, size_t size, size_t nmemb, void* userp);
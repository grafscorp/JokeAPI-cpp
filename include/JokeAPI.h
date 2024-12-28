#pragma once
#define CURL_STATICLIB

#include <string>
#include "curl/curl.h"
#include "joke_data.h"
#include <iostream>

#define JOKE_RES_TYPE_JSON 0
#define JOKE_RES_TYPE_XML 1
#define JOKE_RES_TYPE_TEXT 2


class JokeAPI
{
public:

	std::string getJokeRes(std::string, unsigned int);

protected:
	const std::string URL_JOKE_API = "https://v2.jokeapi.dev/joke/";
};

size_t write_data(void* buffer, size_t size, size_t nmemb, void* userp);
// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define CURL_STATICLIB

#include <iostream>

#include "include/joke_client_api.h"


int main()
{
    curl_global_init(CURL_GLOBAL_DEFAULT);
    
    JokeClient jClient;
    jClient.setJokeLang("en");
    jClient.setJokeCategory(JokeCategory::Any);
    jClient.setJokeType(JokeType::single);
    std::cout << jClient.getJokeData().getJoke();


    curl_global_cleanup();
}


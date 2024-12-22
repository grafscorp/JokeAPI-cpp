#include "../include/joke_client_api.h"

JokeClient::JokeClient()
{
}

JokeClient::~JokeClient()
{
}



JokeData JokeClient::getJokeData()
{
    return parseJokeRes(getJokeRes(JokeResType::json, getParams() ));
}



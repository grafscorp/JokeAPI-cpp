#include "JokeClientApi.h"

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



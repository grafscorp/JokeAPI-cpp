#include "JokeClientApi.h"

JokeClient::JokeClient()
{
}

JokeClient::~JokeClient()
{
}



JokeData JokeClient::getJokeData()
{
    JokeAPI jApi;
    return parseJokeRes(jApi.getJokeRes( getParams(), JOKE_RES_TYPE_JSON ));
}



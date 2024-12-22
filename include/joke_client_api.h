#ifndef JOKE_CLIENT_API_H
#define JOKE_CLIENT_API_H
#define CURL_STATICLIB


#include "JokeDataParser.h"
#include "JokeAPI.h"
#include "JokeProperties.h"
#include <iostream>



class JokeClient : public JokeDataParser, public JokeAPI, public JokeProperties {
public:
    JokeClient();
    ~JokeClient();




    JokeData getJokeData();

    


protected:
    

    
};


#endif
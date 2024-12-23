#ifndef JOKE_CLIENT_API_H
#define JOKE_CLIENT_API_H


#include "JokeAPI.h"
#include "JokeDataParser.h"

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
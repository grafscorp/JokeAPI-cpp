# JokeAPI-cpp
> [!WARNING]
Note: due to the different types of humor, JokeAPI contains a wide variety of jokes, of which some are very offensive.Use this API at your own risk!

## About

Use the popular [API](https://jokeapi.dev/) to get various jokes for free, without registration and tokens.
## Usage:
```Cpp
#include <iostream>
#include "joke_client_api.h"

int main()
{
    curl_global_init(CURL_GLOBAL_DEFAULT);
    
    JokeClient jClient;
    jClient.setJokeLang("en");
    jClient.setJokeCategory(JokeCategory::Any);
    jClient.setJokeType(JokeType::single);
    std::cout << jClient.getJokeData().getJoke();

    curl_global_cleanup();
    return 0;
}
```

## Build:

> [!NOTE]
> In development

## Planned Features
- [ ] Error handling
- [ ] Supported filtres
  - [ ] flags/
  - [ ] amount/
- [ ] Get list jokes

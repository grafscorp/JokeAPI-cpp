# JokeAPI-cpp
> [!WARNING]
Note: due to the different types of humor, JokeAPI contains a wide variety of jokes, of which some are very offensive.Use this API at your own risk!

## About

Use the popular [API](https://jokeapi.dev/) to get various jokes for free, without registration and tokens.
## Usage:
```Cpp
#include <iostream>
#include "jokeСlientАpi.h"

int main()
{
    JokeClient jClient;
    jClient.setJokeLang("en");
    jClient.setJokeCategory(JokeCategory::Any);
    jClient.setJokeType(JokeType::single);
    std::cout << jClient.getJokeData().getJoke();

    return 0;
}
```

## Build:
### For Visual Studio
Свойства проекта->
- Для всех конфигураций
- - Общее -> Тип конфигурации -> Статическая библиотека(.lib)
- - Библиотекарь -> Общее -> Допольнительные зависимости = Normaliz.lib;Ws2_32.lib;Wldap32.lib;Crypt32.lib;advapi32.lib;${Workspace}\lib\libcurl_a_debug.lib(Для Debug);${Workspace}\lib\libcurl_a.lib (Для Release)
> [!NOTE]
> In development

## Planned Features
- [ ] Error handling
- [ ] Supported filtres
  - [ ] flags/
  - [ ] amount/
- [ ] Get list jokes

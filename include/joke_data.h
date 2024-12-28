#pragma once
#include <string>
#include "joke_category.h"
#include "joke_flags.h"
#include "joke_type.h"

#define JOKE_TYPE_SINGLE 0
#define JOKE_TYPE_TWOPARTS 1

//JokeData. id,safe,lang[2], category,type,flags,joke
struct JokeData
{
public:
    JokeData(int id, bool safe, char lang[2], std::string category, unsigned int type, const JokeFlags flags, const std::string _joke[2])
        : id(id), safe(safe), type(type), category(category), flags(flags)
    {
        joke[0] = _joke[0]; joke[1] = _joke[1];
        this->lang[0] = lang[0]; this->lang[1] = lang[1];
    }
    JokeData(int id, char lang[2], std::string category, unsigned int type, const JokeFlags flags, const std::string _joke[2])
        : id(id), type(type), category(category), flags(flags)
    {
        joke[0] = _joke[0]; joke[1] = _joke[1];
        this->lang[0] = lang[0]; this->lang[1] = lang[1];
    }
    int id;
    bool safe;
    char lang[2];
    unsigned int type;
    std::string category;
    JokeFlags flags;
    //Context joke. if joke is single, it has only one element.
    std::string joke[2];

    std::string getJoke() {
        return type == JOKE_TYPE_SINGLE ? joke[0] : joke[0] + joke[1];
    }



    std::string getData()
    {
        std::string alldata;
        alldata.append("id : ");
        alldata.append(std::to_string(id));
        alldata.append(",lang : ");
        alldata.append(lang);
        alldata.append(", type : ");
        alldata.append(std::to_string(type));
        alldata.append(", category : ");
        alldata.append(category);
        alldata.append(", joke : ");
        alldata.append(type == JOKE_TYPE_SINGLE ? joke[0] : joke[0] + joke[1]);
        //!*TODO add flags

        return alldata;
    }


};
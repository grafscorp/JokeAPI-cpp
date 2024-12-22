#pragma once

#define MAX_SIZE_JOKE_FLAGS 6

//Joke flags: nsfw, religious,political,racist,sexist,explicit
struct JokeFlags
{
public:
	bool nsfw, religious,political,racist,sexist,jexplicit;

	JokeFlags(bool nsfw, bool religious, bool political, bool racist, bool sexist, bool jexplicit)
		: nsfw(nsfw), religious(religious), political(political), racist(racist), sexist(sexist), jexplicit(jexplicit)
	{
	}
};
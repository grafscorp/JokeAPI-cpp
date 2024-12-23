#include <iostream>
#include <JokeClientApi.h>


int main(void)
{

	JokeClient jClient;
	jClient.setJokeLang("en");
	jClient.setJokeCategory(JokeCategory::Programming);
	jClient.setJokeType(JokeType::single);

	JokeData jData = jClient.getJokeData();
	std::cout << jData.getJoke();
	return 0;
}
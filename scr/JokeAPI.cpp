#include "../include/JokeAPI.h"


std::string JokeAPI::getJokeRes(JokeResType resType = JokeResType::json,std::string url_params = "")
{
    auto handle = curl_easy_init();
    std::string result;
    CURLcode resConn;

    std::string formatParam = "&format=";
    switch (resType)
    {
    case JokeAPI::json:
        formatParam += "json";
        break;
    case JokeAPI::xml:
        formatParam += "xml";
        break;
    case JokeAPI::text:
        formatParam += "text";
        break;
    default:
        break;
    }

    std::string req_url = URL_JOKE_API + url_params + formatParam;

#ifdef _DEBUG
    std::cout << req_url << std::endl;
#endif // _DEBUG

    try
    {
        if (handle)
        {
            curl_easy_setopt(handle, CURLOPT_URL, req_url.c_str());
#ifdef _DEBUG

            curl_easy_setopt(handle, CURLOPT_VERBOSE, 1L);
#endif // DEBUG
            curl_easy_setopt(handle, CURLOPT_WRITEFUNCTION, write_data);
            curl_easy_setopt(handle, CURLOPT_WRITEDATA, &result);

            resConn = curl_easy_perform(handle);
            if (resConn != CURLE_OK)
            {
                //throw resConn;
                std::cout << "Error connection \n" << resConn;
            }
        }
    }
    catch (const std::exception&)
    {
        std::cout << "Error curl handle";
    }
    curl_easy_cleanup(handle);
    return result;


}
size_t write_data(void* buffer, size_t size, size_t nmemb, void* userp)
{
    std::string& text = *static_cast<std::string*>(userp);
    size_t totalSize = size * nmemb;
    text.append(static_cast<char*>(buffer), totalSize);
    return totalSize;
}
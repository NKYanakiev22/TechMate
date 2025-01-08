#include "Libraries.h"
#include "confucius.h"
std::string getConfuciusQuote() {
    std::vector<std::string> quotes = {
        "It does not matter how slowly you go as long as you do not stop.",
        "Our greatest glory is not in never falling, but in rising every time we fall.",
        "The man who moves a mountain begins by carrying away small stones."
    };
    return quotes[rand() % quotes.size()];
}
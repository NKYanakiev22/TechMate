#include "Aristotle.h"

std::string getAristotleQuote() {
    std::vector<std::string> quotes = {
        "Knowing yourself is the beginning of all wisdom.",
        "It is the mark of an educated mind to be able to entertain a thought without accepting it.",
        "Happiness depends upon ourselves."
    };
    return quotes[rand() % quotes.size()];
}
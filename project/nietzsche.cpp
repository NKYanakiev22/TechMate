#include "nietzsche.h"


std::string getNietzscheQuote() {
    std::vector<std::string> quotes = {
        "He who has a why to live can bear almost any how.",
        "That which does not kill us makes us stronger.",
        "Without music, life would be a mistake."
    };
    return quotes[rand() % quotes.size()];
}
#include "socrates.h"


std::string getSocratesQuote() {
    std::vector<std::string> quotes = {
        "The only true wisdom is in knowing you know nothing.",
        "An unexamined life is not worth living.",
        "To find yourself, think for yourself."
    };
    return quotes[rand() % quotes.size()];
}
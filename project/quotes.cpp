#include "quotes.h"
string getAristotleQuote(int choice) {
    switch (choice) {
    case 1:
        return "Knowing yourself is the beginning of all wisdom.";
    case 2:
        return "It is the mark of an educated mind to be able to entertain a thought without accepting it.";
    case 3:
        return "Happiness depends upon ourselves.";
    default:
        return "Invalid choice.";
    }
}

string getSocratesQuote(int choice) {
    switch (choice) {
    case 1:
        return "The only true wisdom is in knowing you know nothing.";
    case 2:
        return "An unexamined life is not worth living.";
    default:
        return "Invalid choice.";
    }
}

string getConfuciusQuote(int choice) {
    switch (choice) {
    case 1:
        return "It does not matter how slowly you go as long as you do not stop.";
    case 2:
        return "Our greatest glory is not in never falling, but in rising every time we fall.";
    case 3:
        return "The man who moves a mountain begins by carrying away small stones.";
    default:
        return "Invalid choice.";
    }
}

string getNietzscheQuote(int choice) {
    switch (choice) {
    case 1:
        return "He who has a why to live can bear almost any how.";
    case 2:
        return "That which does not kill us makes us stronger.";
    case 3:
        return "Without music, life would be a mistake.";
    case 4:
        return "To find yourself, think for yourself.";
    default:
        return "Invalid choice.";
    }
}
#include "explanations.h"

void explainAristotleQuote(int choice) {
    switch (choice) {
    case 1:
        cout << "\nExplanation: Aristotle's quote 'Knowing yourself is the beginning of all wisdom' emphasizes that self-awareness is key to wisdom. "
            << "To make wise decisions in life, one must first understand their own strengths, weaknesses, desires, and motives.\n";
        break;
    case 2:
        cout << "\nExplanation: The quote 'It is the mark of an educated mind to be able to entertain a thought without accepting it' refers to intellectual openness. "
            << "It suggests that true education isn't just about learning facts, but being able to critically evaluate different ideas without immediately accepting or rejecting them.\n";
        break;
    case 3:
        cout << "\nExplanation: 'Happiness depends upon ourselves' means happiness is not something external that happens to us, "
            << "but something that comes from within, based on our choices, attitudes, and actions.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }
}

void explainSocratesQuote(int choice) {
    switch (choice) {
    case 1:
        cout << "\nExplanation: 'The only true wisdom is in knowing you know nothing' is a reflection on intellectual humility. "
            << "It suggests that true wisdom comes from acknowledging our ignorance and being open to learning.\n";
        break;
    case 2:
        cout << "\nExplanation: 'An unexamined life is not worth living' emphasizes self-reflection. Socrates believed that living without examining our choices and beliefs makes life shallow.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }
}

void explainConfuciusQuote(int choice) {
    switch (choice) {
    case 1:
        cout << "\nExplanation: 'It does not matter how slowly you go as long as you do not stop' stresses perseverance. "
            << "Progress is more important than speed, and consistent effort will eventually lead to success.\n";
        break;
    case 2:
        cout << "\nExplanation: 'Our greatest glory is not in never falling, but in rising every time we fall' emphasizes resilience. "
            << "True greatness comes from how we respond to failure, learning from setbacks.\n";
        break;
    case 3:
        cout << "\nExplanation: 'The man who moves a mountain begins by carrying away small stones' illustrates the importance of starting small. "
            << "Great achievements begin with small, consistent actions.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }
}

void explainNietzscheQuote(int choice) {
    switch (choice) {
    case 1:
        cout << "\nExplanation: 'He who has a why to live can bear almost any how' suggests that having a strong sense of purpose gives us strength to endure difficulties.\n";
        break;
    case 2:
        cout << "\nExplanation: 'That which does not kill us makes us stronger' reflects Nietzsche's view on adversity. Challenges build character and resilience.\n";
        break;
    case 3:
        cout << "\nExplanation: 'Without music, life would be a mistake' highlights the importance of art, particularly music, in making life richer.\n";
        break;
    case 4:
        cout << "\nExplanation: 'To find yourself, think for yourself' advocates independence of thought. Nietzsche encourages questioning societal norms.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }
}
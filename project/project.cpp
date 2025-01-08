#include "Libraries.h"
#include "register.h"
#include "login.h"
#include "quotes.h"
#include "explanations.h"

using namespace std;

unordered_map<string, string> users;  // Global storage for user credentials

int main() {
    int option;
    do {
        cout << "=== Welcome to the Philosopher Quotes Program ===\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
        case 1:
            registerUser();
            break;
        case 2:
            if (login()) {
                int philosopherChoice;
                int quoteChoice;
                char again;

                do {
                    system("CLS");

                    cout << "Choose a philosopher to get a random quote:\n";
                    cout << "1. Aristotle\n";
                    cout << "2. Socrates\n";
                    cout << "3. Confucius\n";
                    cout << "4. Friedrich Nietzsche\n";
                    cout << "Enter your choice (1-4): ";
                    cin >> philosopherChoice;

                    switch (philosopherChoice) {
                    case 1:
                        cout << "Choose a quote from Aristotle:\n";
                        cout << "1. 'Knowing yourself is the beginning of all wisdom.'\n";
                        cout << "2. 'It is the mark of an educated mind to be able to entertain a thought without accepting it.'\n";
                        cout << "3. 'Happiness depends upon ourselves.'\n";
                        cout << "Enter your choice (1-3): ";
                        cin >> quoteChoice;
                        cout << "Aristotle says: " << getAristotleQuote(quoteChoice) << "\n";
                        explainAristotleQuote(quoteChoice);
                        break;
                    case 2:
                        cout << "Choose a quote from Socrates:\n";
                        cout << "1. 'The only true wisdom is in knowing you know nothing.'\n";
                        cout << "2. 'An unexamined life is not worth living.'\n";
                        cout << "Enter your choice (1-2): ";
                        cin >> quoteChoice;
                        cout << "Socrates says: " << getSocratesQuote(quoteChoice) << "\n";
                        explainSocratesQuote(quoteChoice);
                        break;
                    case 3:
                        cout << "Choose a quote from Confucius:\n";
                        cout << "1. 'It does not matter how slowly you go as long as you do not stop.'\n";
                        cout << "2. 'Our greatest glory is not in never falling, but in rising every time we fall.'\n";
                        cout << "3. 'The man who moves a mountain begins by carrying away small stones.'\n";
                        cout << "Enter your choice (1-3): ";
                        cin >> quoteChoice;
                        cout << "Confucius says: " << getConfuciusQuote(quoteChoice) << "\n";
                        explainConfuciusQuote(quoteChoice);
                        break;
                    case 4:
                        cout << "Choose a quote from Nietzsche:\n";
                        cout << "1. 'He who has a why to live can bear almost any how.'\n";
                        cout << "2. 'That which does not kill us makes us stronger.'\n";
                        cout << "3. 'Without music, life would be a mistake.'\n";
                        cout << "4. 'To find yourself, think for yourself.'\n";
                        cout << "Enter your choice (1-4): ";
                        cin >> quoteChoice;
                        cout << "Nietzsche says: " << getNietzscheQuote(quoteChoice) << "\n";
                        explainNietzscheQuote(quoteChoice);
                        break;
                    default:
                        cout << "Invalid philosopher choice!\n";
                    }

                    cout << "\nWould you like another quote? (y/n): ";
                    cin >> again;

                } while (again == 'y' || again == 'Y');

                cout << "Goodbye!\n";
                return 0;
            }
            break;
        case 3:
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid option. Please choose 1, 2, or 3.\n";
        }
    } while (true);
}
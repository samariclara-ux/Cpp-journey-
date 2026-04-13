#include <iostream>
#include <ctime>

// Function Prototypes
void drawBoard(const char* spaces);
void playerMove(char* spaces, char player);
void computerMove(char* spaces, char computer); 
bool checkWinner(const char* spaces);
bool checkTie(const char* spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    while (running) {
        system("cls"); 
        drawBoard(spaces);

        // 2. Player's move
        playerMove(spaces, player);
        
        // Check if player won or tied
        if (checkWinner(spaces)) {
            system("cls");
            drawBoard(spaces);
            std::cout << "YOU WIN!\n";
            running = false;
            break;
        }
        if (checkTie(spaces)) {
            system("cls");
            drawBoard(spaces);
            std::cout << "IT'S A TIE!\n";
            running = false;
            break;
        }

        // 3. Computer's move
        computerMove(spaces, computer);
        
        // Check if computer won or tied
        if (checkWinner(spaces)) {
            system("cls");
            drawBoard(spaces);
            std::cout << "COMPUTER WINS! BETTER LUCK NEXT TIME.\n";
            running = false;
            break;
        }
        if (checkTie(spaces)) {
            system("cls");
            drawBoard(spaces);
            std::cout << "IT'S A TIE!\n";
            running = false;
            break;
        }
    }

    std::cout << "**************************\n";
    std::cout << "   Thanks for playing!    \n";
    std::cout << "**************************\n";

    return 0;
}

void drawBoard(const char* spaces) {
    std::cout << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << "\n";
    std::cout << "_____|_____|_____" << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << "\n";
    std::cout << "     |     |     " << "\n";
    std::cout << "\n";
}

void playerMove(char* spaces, char player) {
    int number;
    do {
        std::cout << "Enter a spot to place a marker (1-9): ";
        // If user enters a letter, this stops the game from crashing
        if (!(std::cin >> number)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Please enter a valid number.\n";
            continue;
        }
        number--;
        if (number < 0 || number > 8 || spaces[number] != ' ') {
            std::cout << "Invalid move or spot taken. Try again.\n";
        } else {
            spaces[number] = player;
            break;
        }
    } while (true);
}

void computerMove(char* spaces, char computer) {
    int number;
    while (true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(const char* spaces) {
    // Win patterns (Rows, Columns, Diagonals)
    const int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Horizontal
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Vertical
        {0, 4, 8}, {2, 4, 6}             // Diagonal
    };

    for (int i = 0; i < 8; i++) {
        // Check if all three spots match AND aren't empty
        if (spaces[wins[i][0]] != ' ' && 
            spaces[wins[i][0]] == spaces[wins[i][1]] && 
            spaces[wins[i][1]] == spaces[wins[i][2]]) {
            return true;
        }
    }
    return false;
}

bool checkTie(const char* spaces) {
    for (int i = 0; i < 9; i++) {
        if (spaces[i] == ' ') return false;
    }
    return true;
}
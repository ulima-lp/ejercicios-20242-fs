#include <iostream>
#include <string>

using namespace std;  // Evita el uso de std:: en el código

// Clase Player (Jugador)
class Player {
private:
    string dni;
    string country;
    string name;
    string address;
    string email;
    string password;
    string currency;
    double balance;

public:
    // Constructor para inicializar los atributos
    Player(string _dni, string _country, string _name, string _address,
           string _email, string _password, string _currency, double _balance) {
        dni = _dni;
        country = _country;
        name = _name;
        address = _address;
        email = _email;
        password = _password;
        currency = _currency;
        balance = _balance;
    }

    // Método para mostrar los detalles del jugador
    void showPlayerInfo() {
        cout << "Player Information:" << endl;
        cout << "DNI: " << dni << endl;
        cout << "Country: " << country << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Email: " << email << endl;
        cout << "Password: " << password << endl;  // No se recomienda mostrar contraseñas
        cout << "Currency: " << currency << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Clase Game (Juego)
class Game {
private:
    string gameName;  // Nombre del juego
    string result;    // Resultado del juego

public:
    // Constructor para inicializar los atributos
    Game() {
    }
    Game(string _gameName, string _result) {
        gameName = _gameName;
        result = _result;
    }

    // Método para mostrar información del juego
    void showGameInfo() {
        cout << "Juego: " << gameName << endl;
    }
};

// Clase Odds (Cuota)
class Odds {
private:
    double odds;    // Cuota del juego
    string result;  // Resultado de la cuota (puede ser igual al resultado del juego)

public:
    // Constructor para inicializar los atributos
    Odds(double _odds, string _result) {
        odds = _odds;
        result = _result;
    }

    // Método para mostrar información de la cuota
    void showOddsInfo() {
        cout << "Odds: " << odds << endl;
        cout << "Result: " << result << endl;
    }
};

// Clase Bet (Apuesta)
class Bet {
private:
    string result;     // Resultado de la apuesta
    string dateTime;   // Fecha y hora de la apuesta
    double amount;     // Monto apostado

public:
    // Constructor para inicializar los atributos
    Bet(string _result, string _dateTime, double _amount) {
        result = _result;
        dateTime = _dateTime;
        amount = _amount;
    }

    // Método para mostrar información de la apuesta
    void showBetInfo() {
        cout << "Bet Result: " << result << endl;
        cout << "Date and Time: " << dateTime << endl;
        cout << "Amount: " << amount << endl;
    }
};
class GameManager {
private:
    Game* games;      // Puntero a un arreglo dinámico de objetos Game
    int gameCount;    // Cantidad de juegos actuales

public:
    // Constructor para inicializar los atributos
    GameManager() {
        gameCount = 0;
        games = nullptr;  // Inicialmente sin juegos (puntero nulo)
    }

    // Destructor para liberar la memoria reservada dinámicamente
    ~GameManager() {
        delete[] games;  // Liberar el arreglo dinámico
    }

    // Método para añadir un juego
    void addGame(const Game& newGame) {
        // Crear un nuevo arreglo dinámico con espacio adicional para el nuevo juego
        Game* newGamesArray = new Game[gameCount + 1];

        // Copiar los juegos existentes al nuevo arreglo
        for (int i = 0; i < gameCount; i++) {
            newGamesArray[i] = games[i];
        }

        // Añadir el nuevo juego al final del arreglo
        newGamesArray[gameCount] = newGame;

        // Liberar la memoria del arreglo anterior
        delete[] games;

        // Actualizar el puntero y la cantidad de juegos
        games = newGamesArray;
        gameCount++;
    }

    // Método para listar todos los juegos
    void listGames() const {
        cout << "Listing all games:" << endl;
        for (int i = 0; i < gameCount; i++) {
            games[i].showGameInfo();
        }
        if (gameCount == 0) {
            cout << "No games available." << endl;
        }
    }
    int juegoGanados(){
        if(gameCount == 1){
            return 1;
        }else{
            cout << "no juegos ganados";
            return -1;
        }
    }
    int setAndGetGameCount(){
        return 1;
    }
    void setGameCount(int c){
        gameCount = c;
    }
};

//Manager
int main() {
    string nombre;
    cout << "ingresar nombre: ";
    cin >> nombre;
    // Crear un objeto de la clase Player
    Player player1("12345678A", "USA", nombre, "123 Main St", "johndoe@example.com",
                   "password123", "USD", 1000.50);

    // Crear un objeto de la clase Game
    Game game1("Liga 1", "Win");
    Game game2("Liga 2", "Win");

    GameManager manager;
    manager.addGame(game1);
    manager.addGame(game2);
    manager.listGames();

    /*// Crear un objeto de la clase Odds
    Odds odds1(2.5, "Win");

    // Crear un objeto de la clase Bet
    Bet bet1("Win", "2024-10-28 14:30", 100.00);

    // Mostrar la información de cada clase
    player1.showPlayerInfo();
    cout << endl;
    game1.showGameInfo();
    cout << endl;
    odds1.showOddsInfo();
    cout << endl;
    bet1.showBetInfo();
    */
    return 0;
}

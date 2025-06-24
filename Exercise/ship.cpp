// Zadanie 1
// Napisz klasę Ship, która przechowywać będzie dane statku:

// id_ - identyfikator statku
// name_ - nazwa statku
// speed_ - prędkość statku
// maxCrew_ - maksymalna liczna załogi
// capacity_ - ładowność statku
// Dane powinny być prywatne, a dostęp do nich dostęp powinniśmy mieć przez gettery. Pomyśl samodzielnie jakiego typu powinny to być dane.

// Zadanie 2
// Dodaj do klasy Ship konstruktory, które przyjmować będą odpowiednie dane. Chcemy 3 konstruktory:

// Pierwszy nieprzyjmujący żadnych argumentów. id_ dla takiego obiektu powinno wynosić -1
// Drugi przyjmujący wszystkie dane
// Trzeci przyjmujący id, speed i maxCrew (postaraj się wykorzystać drugi konstruktor przy pisaniu trzeciego - patrz Delegowanie konstruktorów)
// Dodatkowo dodaj metodę void setName(const std::string&), która pozwoli na ustawianie nazwy statku.

#include <iostream>

class Ship {
private:
    int id_;
    std::string name_;
    int speed_;
    size_t maxCrew_;
    size_t capactiy_;

public:
    int getId() const {
        return id_;
    }

    std::string getName() const {
        return name_;
    }

    int getSpeed() const {
        return speed_;
    }

    size_t getMaxCrew() const {
        return maxCrew_;
    }

    size_t getCapacity() const {
        return capactiy_;
    }

    void SetName(const std::string& s) {
        name_ = s;
    }

    Ship()
        : id_(-1){};

    Ship(const int id, const std::string& name, const int speed, const size_t maxCrew, const size_t capacity)
        : id_(id),
          name_(name),
          speed_(speed),
          maxCrew_(maxCrew),
          capactiy_(capacity){};

    Ship(const int id, const int speed, const size_t maxCrew)
        : Ship(id, "0", speed, maxCrew, 0){};
};

int main() {
    // Ship Transporter;
    // Ship Transporter(108, 1000, 50);
    Ship Transporter(108, "Wiechu", 1000, 50, 100);

    std::cout << Transporter.getId() << std::endl;
    std::cout << Transporter.getName() << std::endl;
    std::cout << Transporter.getSpeed() << std::endl;
    std::cout << Transporter.getMaxCrew() << std::endl;
    std::cout << Transporter.getCapacity() << std::endl;

    Transporter.SetName("Jasiek");
    std::cout << Transporter.getName() << std::endl;

    return 0;
}
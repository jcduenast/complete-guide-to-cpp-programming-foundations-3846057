// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// class Inventory;
class Inventory {
public:
    // Default Constructor
    Inventory(): capacity(10){
        items = new std::vector<std::string>();
    }

    // Overloaded Constructor
    Inventory(int capacity_i): capacity(capacity_i){
        items = new std::vector<std::string>();
    }

    // Destructor
    ~Inventory(){
        delete items; // Prevent memory leak by deallocating the dynamic vector
    }

    void addItem(const std::string& item){
        if (items->size() < capacity)
            items->push_back(item);
        else
            std::cout << "Inventory full" << std::endl;
    }

    void removeItem(const std::string& item){
        auto it = std::find(items->begin(), items->end(), item);
        if (it != items->end())
            items->erase(it);
        else
            std::cout << "Item " << item << " not found in inventory" << std::endl;
    }

    // Access item by index | the const modifier is considered a good practice
    std::string getItem(int index) const{
        if (index >= 0 && index < items->size())
            return (*items)[index];
        else
            return "Index out of bounds";
    }

    // Get number of items in the inventory | getters should have the const modifier to prevent the programmer to modify objects values
    int getItemCount() const{
        return items->size();
    }

    // Display inventory contents
    void displayInventory() const{
        std::cout << "Inventory: [ ";
        for (size_t i = 0; i < items->size(); ++i){
            std::cout << (*items)[i];
            if (i < items->size() - 1) std::cout << ", ";
        }
        std::cout << " ]" << std::endl;
    }

private: 
    std::vector<std::string> *items;  // Pointer to a vector of items
    int capacity;   // Maximmim number of items allowed
};

int main(){
    
    std::cout << std::endl << std::endl;
    return 0;
}

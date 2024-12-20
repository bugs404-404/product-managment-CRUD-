#include <iostream>   // Include the iostream library for input/output operations
#include <vector>     // Include the vector library for using std::vector
#include <string>     // Include the string library for using std::string

using namespace std;  // Use the standard namespace to avoid prefixing std::

// Define a structure for an Item
struct Item {
    int id;          // Item ID
    string name;     // Item Name
    double price;    // Item Price

    // Display the item details
    void display() const {  // Member function to display an item's details
        cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
    }
};

// Function prototypes
void createItem(vector<Item>& items);  // Function to create a new item
void readItems(const vector<Item>& items);  // Function to read and display all items
void updateItem(vector<Item>& items);  // Function to update an existing item
void deleteItem(vector<Item>& items);  // Function to delete an item

int main() {
    vector<Item> items;  // Vector to store items
    int choice;          // Variable to store user's menu choice

    do {
        // Display menu options
        cout << "\n--- CRUD Operations Menu ---\n";
        cout << "1. Create Item\n";  // Option to create a new item
        cout << "2. Read Items\n";  // Option to read and display items
        cout << "3. Update Item\n";  // Option to update an item
        cout << "4. Delete Item\n";  // Option to delete an item
        cout << "5. Exit\n";         // Option to exit the program
        cout << "Enter your choice: ";
        cin >> choice;  // Get the user's choice

        // Execute the corresponding action based on the choice
        switch (choice) {
            case 1:
                createItem(items);  // Call createItem to add a new item
                break;
            case 2:
                readItems(items);  // Call readItems to display all items
                break;
            case 3:
                updateItem(items);  // Call updateItem to modify an existing item
                break;
            case 4:
                deleteItem(items);  // Call deleteItem to remove an item
                break;
            case 5:
                cout << "Exiting the program.\n";  // Exit message
                break;
            default:
                cout << "Invalid choice. Please try again later.\n";  // Handle invalid input
        }
    } while (choice != 5);  // Repeat until the user selects exit

    return 0;  // Indicate successful program executions
}

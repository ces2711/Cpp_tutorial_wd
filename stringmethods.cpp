#include <iostream>

int main(void){

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // the .length() method returns the length of a string

    if(name.length() > 12){
        std::cout << "Your name cannot be more than 12 characters.\n";
    }
    else{
        std::cout << "Welcome " << name << "!\n";
    }

    // .empty() will return whether a string is empty or not

    if(name.empty()){
        std::cout << "You didn't enter your name";
    }
    else{
        std::cout << "Hello, " << name << "\n";
    }

    // .clear() will delete whatever is in a string

    //name.clear();

    std::cout << "Hello, " << name << "\n";;

    // .append() will add a string to the end of a string

    name.append("@gmail.com");

    std::cout << "Your username is now " << name << "\n";

    // .at() will display the character at the index indicated

    std::cout << name.at(0) << "\n";

    // .insert() will insert a character into a string

    name.insert(0, "@");

    std::cout << name << "\n";

    // .find() will find specific cases of indicated characters

    std::cout << name.find('@') << "\n";

    // .erase() will erase a portion of a string with beginning and end index

    name.erase(0,3);

    std::cout << name;

    return 0;
}

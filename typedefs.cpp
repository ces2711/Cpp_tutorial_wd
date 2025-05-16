#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;

// this is defining this big long datatype with the name "pairlist"
// the _t is convention for datatypes

// typedef std::string text_t;
// typedef int number_t; 
// you would never actually do this
// only use this when you need it, like the big one above

// typedef has largely been replaced with "using" keyword

using text_t = std::string;
using number_t = int;

// the above does the same thing, something about templates

int main(void){
    // typedef = reserved keyword used to create an additional name
    // or alias for another datatyle
    // helps with readability and reduces typos

    pairlist_t pairlist; // now we can just use the typedef

    std::string firstName = "Conor";
    text_t lastName = "Shanley";

    // the above two lines do the same thing

    number_t age = 29;

    std::cout << firstName << " " << lastName << ".\n";
    std::cout << age << "\n";

    return 0;
}

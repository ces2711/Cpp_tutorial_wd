#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(void){
    //namespace provides a solution for preventing naming conflicts
    // in larger projects - each entity needs a unique name
    
    int x = 0;

    std::cout << x << '\n';
    // by default, if no namespace is selected, this assumes the
    // local version of x

    std::cout << first::x << '\n';
    // use the name of the namespace followed by :: to specify
    // a specific namespace
    // :: is the "scope resolution" operator

    std::cout << second::x << '\n';

    // you can also choose a namespace first and not specify it inline 
    using namespace first;

    return 0;
}

/*
You can also use the following line:

using namespace std;

to cut down on typing std:: before other commands
for instance, the following (in context) would compile and run

using namespace std;

string name = "Conor"
cout << "Hello" << name;

but, this results in a high likelihood of naming conflict
so don't do it - be explicit so you learn this software properly

*/
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main(int argc, char * argv[])
{
    if(argc <= 1)
    {
        cerr << "No URL Input!" << endl;
        exit(EXIT_FAILURE);
    }

    string url(argv[1]);
    string prefix("moz-extension://c390cee7-9ce9-4d7a-ba86-3a5c7b6d6715/pdf/viewer.html?file=");
    url = prefix + url;
    // cout << url << endl;
    string command = string("firefox ")+url;
    system(command.c_str());

    return 0;
}

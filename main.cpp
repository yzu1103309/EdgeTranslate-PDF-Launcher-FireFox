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


    /* !!! Please replace this with YOUR unique EdgeTranslate ID !!! */
    string extention_id("f7ad2c1b-c6e3-403a-ad26-fc25734caaa6");
    /* Replace this if you're not using original firefox (e.g. zen) */
    string app("firefox");


    string prefix(" moz-extension://");
    string url(argv[1]);
    url = prefix + extention_id + "/pdf/viewer.html?file=" + url;
    string command = app + url;
    system(command.c_str());

    return 0;
}

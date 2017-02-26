/*MAIN.CPP
*THIS IS THE ENTRY POINT FOR THE SERVER BACKGROUND PROCESSES AND SERVER SIDE PROGRAMS
**/

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << argv[0] << std::endl;
    for(int i=1; i<(sizeof(argv)/sizeof(char)); i++)
    {
      std::cout<<argv[i]<<"\n";
    }
    #ifdef __linux__
      std::cout<<"linux baby!!";
    #endif // __linux__
    #ifdef _WIN32
      std::cout<<"This is Windows!!\n";
    #endif // _WIN32
    #ifdef macintosh
      std::cout<<"this is not windows!!\n";
    #endif // macintosh
    #ifdef sun
    std::cout<<"still not windows"\n;
    #endif // sun

    return 0;
}

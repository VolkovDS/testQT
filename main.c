//http://axis.bplaced.net/news/851
//https://habr.com/ru/companies/ruvds/articles/645325/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#ifdef _WIN32
    #include <windows.h>
#endif
int main(int argc, char **argv)
{
#ifdef _WIN32
    //    int _setmode(int, int);
    //    _setmode(0, 0x8000);
    //    _setmode(1, 0x8000);
    SetConsoleOutputCP(CP_UTF8);
#endif
    for (int ii = 0; ii < argc; ii++) {
        // Выводим список аргументов в цикле
        char *arg = argv[ii];
        size_t len = strlen(arg);
        printf("%zu %s\n", len, arg);
    }
//    char *arg = argv[argc-1];
//    size_t len = strlen(arg);
//    printf("%zu %s\n", len, arg);

    printf("%s","1 Привет \n");
    printf("2 Hello World! Привет \n");
    getch();
    return 0;
}

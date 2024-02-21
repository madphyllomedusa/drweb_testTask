#include <iostream>

int TrimRight(char *s) {
    if(s != nullptr){
        char *end = s;
        while (*end != '\0') {
            end++;
        }
        while (end > s && (*(end - 1) == ' '  || *(end - 1) == '\t' || *(end - 1) == '\n')) {
            end--;
        }
        *end = '\0';
        return *s;
    }
    else
        std::cout<<"wrong link\n";
}

int main() {
    char str[] = "ffsfdfsfdcs  hsvdshdhs   sdhsfdjsv   sdjgsjdg       ";
    TrimRight(str);
    std::cout<< str << "\n";
    return 0;
}

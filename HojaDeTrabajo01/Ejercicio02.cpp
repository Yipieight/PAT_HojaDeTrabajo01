#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s)
{
    string righttoleft;
    int tamaño = s.size();
    for (int i = s.size(); i > 0; i--) {
        righttoleft += s[i-1];
    }
    
    if (s == righttoleft) {
        return true;
    }
    return false;
}



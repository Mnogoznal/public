#include <iostream>
#include <cstdlib>
#include <time.h>

    using namespace std;
 
    static const char alphanum[] = // Словарь символов >:
    
        //"101010" // Возможно вносить любые символы для усложнения пароля!
        //"<%>/?"  // Возможно вносить любые символы для усложнения пароля!
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
            
        int size = sizeof(alphanum) - 1;
        
        int main(){
                cout << "\n     RANDOM PASSWORLD \n \n      MAID IN PAKISTAN \n \n     Dev: A. Petrenko \n \n";
                cout << " Vash Cgeneririvani parol:\n\n";
                int lenght = 16; // длина пароля
                srand(time (NULL));
                 for (int i=0; i<lenght; i++){
                 cout << alphanum[rand()%size];
         }

         cout << endl;
    
    system ("pause");   // Для MS VS остоновка, для онл. терменалов можно не делать, но это уже привычка )
    
return 0;

}

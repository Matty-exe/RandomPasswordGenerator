#include <iostream>
#include <time.h>
#include <vector>
std::vector <std::string> Caratteri  {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z",",",".",";",":","-","_","@","ò","ç","à","#","°","ù","§","è","é","[","+","*","]","|","!","£","$","%","&","/","(",")","=","?","'","ì","^","€","<",">"};
std::string Generator(int PasswordLength){
    srand((unsigned)time(NULL));
    std::string GeneratedPassword;
    for(int i=0; i<PasswordLength; i++){
        int random = rand()%Caratteri.size();
            GeneratedPassword=GeneratedPassword+Caratteri[random];
    }
    return GeneratedPassword;
}
int main(void){
    int passwordlength;
std::cout<<"Generatore di password...."<<std::endl;
std::cout<<"By Shades"<<std::endl;
std::cout<<"https://github.com/Matty-exe"<<std::endl;
std::cout<<"Inserisci la lunghezza della password: "<<std::endl;
std::cin>>passwordlength;
std::cout<<Generator(passwordlength);
}
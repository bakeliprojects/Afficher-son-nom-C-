#include <iostream>
#include <string>

using namespace std;

int main() {
      cout << "Quel est votre prenom ?" << endl;
       string nomUtilisateur;
        getline(cin, nomUtilisateur);
           cout << "Vous vous appelez " << nomUtilisateur <<endl;
           return 0;
}


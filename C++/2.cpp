// 
// Escribe una función que reciba dos palabras (String) y retorne
// verdadero o falso (Bool) según sean o no anagramas.
// - Un Anagrama consiste en formar una palabra reordenando TODAS
//   las letras de otra palabra inicial.
// - NO hace falta comprobar que ambas palabras existan.
// - Dos palabras exactamente iguales no son anagrama.
// -----------------------------------------------------------------------------------------------------------------------------------------


#include <iostream>
#include <algorithm> // Para usar std::sort
#include <string> // Para usar std::string
using namespace std;

bool son_anagramas(const std::string& palabra1, const std::string& palabra2) {
    // Primero, verifica si las palabras son iguales; si lo son, no son anagramas
    if (palabra1 == palabra2) {
        return false;
    }

    // Si las palabras tienen diferentes longitudes, no pueden ser anagramas
    if (palabra1.length() != palabra2.length()) {
        return false;
    }

    // Crea copias de las palabras para ordenarlas
    string palabra1_ordenada = palabra1;
    string palabra2_ordenada = palabra2;

    // Ordena las copias
    sort(palabra1_ordenada.begin(), palabra1_ordenada.end());
    sort(palabra2_ordenada.begin(), palabra2_ordenada.end());

    // Compara las palabras ordenadas
    return palabra1_ordenada == palabra2_ordenada;
}

int main() {
    // Ejemplos de uso
    cout << boolalpha; // Para imprimir booleanos como true/false en lugar de 1/0
    cout << "amor y roma: " << son_anagramas("amor", "roma") << endl; // Debería retornar true
    cout << "amor y amor: " << son_anagramas("amor", "amor") << endl; // Debería retornar false
    cout << "listen y silent: " << son_anagramas("listen", "silent") << endl; // Debería retornar true
    cout << "python y typhon: " << son_anagramas("python", "typhon") << endl; // Debería retornar true
    cout << "hello y world: " << son_anagramas("hello", "world") << endl; // Debería retornar false

    return 0;
}
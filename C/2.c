// 
// Escribe una función que reciba dos palabras (String) y retorne
// verdadero o falso (Bool) según sean o no anagramas.
// - Un Anagrama consiste en formar una palabra reordenando TODAS
//   las letras de otra palabra inicial.
// - NO hace falta comprobar que ambas palabras existan.
// - Dos palabras exactamente iguales no son anagrama.
// -----------------------------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// Función de comparación para qsort
int comparar(const void* a, const void* b) {
    return *(const char*)a - *(const char*)b;
}

bool son_anagramas(const char* palabra1, const char* palabra2) {
    // Primero, verifica si las palabras son iguales; si lo son, no son anagramas
    if (strcmp(palabra1, palabra2) == 0) {
        return false;
    }

    // Si las palabras tienen diferentes longitudes, no pueden ser anagramas
    if (strlen(palabra1) != strlen(palabra2)) {
        return false;
    }

    // Copiar las palabras para ordenarlas
    char* copia1 = _strdup(palabra1); // Usar _strdup en lugar de strdup
    char* copia2 = _strdup(palabra2); // Usar _strdup en lugar de strdup

    // Ordenar las copias
    qsort(copia1, strlen(copia1), sizeof(char), comparar);
    qsort(copia2, strlen(copia2), sizeof(char), comparar);

    // Comparar las palabras ordenadas
    bool resultado = strcmp(copia1, copia2) == 0;

    // Liberar la memoria asignada
    free(copia1);
    free(copia2);

    return resultado;
}

int main() {
    // Ejemplos de uso
    printf("amor y roma: %s\n", son_anagramas("amor", "roma") ? "true" : "false"); // Debería retornar true
    printf("amor y amor: %s\n", son_anagramas("amor", "amor") ? "true" : "false"); // Debería retornar false
    printf("listen y silent: %s\n", son_anagramas("listen", "silent") ? "true" : "false"); // Debería retornar true
    printf("python y typhon: %s\n", son_anagramas("python", "typhon") ? "true" : "false"); // Debería retornar true
    printf("hello y world: %s\n", son_anagramas("hello", "world") ? "true" : "false"); // Debería retornar false

    return 0;
}

# 
# Escribe una función que reciba dos palabras (String) y retorne
# verdadero o falso (Bool) según sean o no anagramas.
# - Un Anagrama consiste en formar una palabra reordenando TODAS
#   las letras de otra palabra inicial.
# - NO hace falta comprobar que ambas palabras existan.
# - Dos palabras exactamente iguales no son anagrama.
# -----------------------------------------------------------------------------------------------------------------------------------------

def son_anagramas(palabra1, palabra2):
    # Primero, verifica si las palabras son iguales; si lo son, no son anagramas
    if palabra1 == palabra2:
        return False
    
    # Convierte las palabras a listas de caracteres, las ordena y las compara
    return sorted(palabra1) == sorted(palabra2)

# Ejemplos de uso
print(son_anagramas("amor", "roma"))  # Debería retornar True
print(son_anagramas("amor", "amor"))  # Debería retornar False
print(son_anagramas("listen", "silent"))  # Debería retornar True
print(son_anagramas("python", "typhon"))  # Debería retornar True
print(son_anagramas("hello", "world"))  # Debería retornar False

print()
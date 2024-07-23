<?php
// Escribe una función que reciba dos palabras (String) y retorne
// verdadero o falso (Bool) según sean o no anagramas.
// - Un Anagrama consiste en formar una palabra reordenando TODAS
//   las letras de otra palabra inicial.
// - NO hace falta comprobar que ambas palabras existan.
// - Dos palabras exactamente iguales no son anagrama.
// -----------------------------------------------------------------------------------------------------------------------------------------
function son_anagramas($palabra1, $palabra2) {
    // Primero, verifica si las palabras son iguales; si lo son, no son anagramas
    if ($palabra1 === $palabra2) {
        return false;
    }

    // Si las palabras tienen diferentes longitudes, no pueden ser anagramas
    if (strlen($palabra1) != strlen($palabra2)) {
        return false;
    }

    // Convertir las palabras a arrays de caracteres
    $array1 = str_split($palabra1);
    $array2 = str_split($palabra2);

    // Ordenar los arrays de caracteres
    sort($array1);
    sort($array2);

    // Comparar los arrays ordenados
    return $array1 === $array2;
}

// Ejemplos de uso
echo "amor y roma: " . (son_anagramas("amor", "roma") ? "true" : "false"); // Debería retornar true
echo "<br>";
echo "amor y amor: " . (son_anagramas("amor", "amor") ? "true" : "false"); // Debería retornar false
echo "<br>";
echo "listen y silent: " . (son_anagramas("listen", "silent") ? "true" : "false"); // Debería retornar true
echo "<br>";
echo "python y typhon: " . (son_anagramas("python", "typhon") ? "true" : "false"); // Debería retornar true
echo "<br>";
echo "hello y world: " . (son_anagramas("hello", "world") ? "true" : "false"); // Debería retornar false
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>First Exercise</title>
    <style>
        body {
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            background-color: #2e2e2e;
            color: #bfab93;
            font-size: 40px;
        }
        .numero {
            margin: -10px;
            padding: -10px;
        }
    </style>
</head>

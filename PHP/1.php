<?php
//Escribe un programa que muestre por consola (con un print) los
// números de 1 a 100 (ambos incluidos y con un salto de línea entre
// cada impresión), sustituyendo los siguientes:
// - Múltiplos de 3 por la palabra "fizz".
// - Múltiplos de 5 por la palabra "buzz".
// - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
//------------------------------------------------------------------------------------------------------------------------------------------
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Proyecto 1</title>
</head>

<style>
    body{
        display: flex;
        justify-content: center;
        align-items: center;
        background-color: #2e2e2e;
        color: #bfab93;
        font-size: 40px;
    }
</style>

<body>
    <?php for ($i = 0; $i <= 100; $i++):
         if($i % 3 == 0 and $i % 5 == 0): 
             echo "fizzbuzz<br>"; 
         elseif($i % 3 == 0):
             echo "fizz<br>";
         elseif($i % 5 == 0):
             echo "buzz<br>";
         else: 
             echo $i . "<br>"; 
         endif; 
     endfor; ?>
</body>

</html>
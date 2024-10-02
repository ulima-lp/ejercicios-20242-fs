-- Import necesario para funciones como toUpper y isLower
import Data.Char (toUpper, isLower)

-- 1. Escribe una función que reciba una lista de enteros y devuelva una lista con cada número duplicado usando map.
duplicarLista :: [Int] -> [Int]
duplicarLista = map (* 2)
-- duplicarLista xs = map (/x -> x * 2)

-- 2. Define una función que reciba una lista de caracteres y devuelva una lista con todos los caracteres convertidos a mayúsculas usando map.
convertirMayusculas :: [Char] -> [Char]
convertirMayusculas = map toUpper

-- 3. Crea una función que reciba una lista de enteros y devuelva una lista con solo los números pares utilizando filter.
filtrarPares :: [Int] -> [Int]
filtrarPares = filter even

-- 4. Implementa una función que reciba una lista de palabras y devuelva una lista con la longitud de cada palabra usando map.
longitudesPalabras :: [String] -> [Int]
longitudesPalabras = map length

-- 5. Escribe una función que reciba una lista de palabras y devuelva una lista con solo las palabras que tienen menos de 5 letras usando filter.
filtrarPalabrasCortas :: [String] -> [String]
-- filtrarPalabrasCortas xs = filter (\x -> length x < 5) xs
filtrarPalabrasCortas = filter (\x -> length x < 5)

-- 6. Define una función que reciba una lista de enteros y devuelva una lista con los números impares triplicados usando map y filter.
triplicarImpares :: [Int] -> [Int]
-- triplicarImpares = map (* 3) (filter odd)
triplicarImpares xs = map (* 3) (filter odd xs)

-- 7. Crea una función que reciba una lista de caracteres y devuelva solo las letras minúsculas utilizando filter, luego conviértelas a mayúsculas usando map.
mayusculasDeMinusculas :: [Char] -> [Char]
-- mayusculasDeMinusculas = map toUpper . filter isLower
mayusculasDeMinusculas xs = map toUpper (filter isLower xs)

-- 8. Escribe una función que reciba una lista de enteros y devuelva una lista con solo los números negativos usando filter.
filtrarNegativos :: [Int] -> [Int]
filtrarNegativos = filter (< 0)

-- 9. Define una función que reciba una lista de enteros y devuelva una lista con los cuadrados de los números positivos usando map y filter.
cuadradosPositivos :: [Int] -> [Int]
-- cuadradosPositivos = map (^ 2) . filter (> 0)
cuadradosPositivos xs = map (^ 2) (filter (> 0) xs)
cuadradosPositivos2 xs = map (\x -> x ^ 2) (filter (> 0) xs)

-- 10. Crea una función que reciba una lista de caracteres y devuelva solo las vocales usando filter.
filtrarVocales :: [Char] -> [Char]
filtrarVocales xs = filter (\x -> elem "aeiouAEIOU") xs

-- 11. Implementa una función que reciba una lista de enteros y devuelva una lista de strings con los números usando map.
enterosACadenas :: [Int] -> [String]
enterosACadenas = map show

-- 12. Escribe una función que reciba una lista de cadenas y elimine todas las cadenas vacías usando filter.
eliminarCadenasVacias :: [String] -> [String]
eliminarCadenasVacias = filter (/= "")

-- 13. Define una función que reciba una lista de enteros y multiplique por 2 los números pares y por 3 los impares usando map.
multiplicarParesEImpares :: [Int] -> [Int]
multiplicarParesEImpares = map (\x -> if even x then x * 2 else x * 3)

-- 14. Crea una función que reciba una lista de enteros y elimine los duplicados consecutivos utilizando filter.
eliminarDuplicadosConsecutivos :: [Int] -> [Int]
eliminarDuplicadosConsecutivos [] = []
eliminarDuplicadosConsecutivos (x:xs) = x : filter (/= x) (eliminarDuplicadosConsecutivos xs)

-- 15. Escribe una función que reciba una lista de enteros y devuelva una lista donde cada elemento está multiplicado por su índice usando map.
multiplicarPorIndice :: [Int] -> [Int]
multiplicarPorIndice xs = map (\(x, i) -> x * i) (zip xs [0..])

multiplicaPorIndice2 :: [Int] -> [Int]
multiplicaPorIndice2 xs = map multiplicarPorIndice2 (enumerar 0 xs)
enumerar :: Int -> [Int] -> [(Int, Int)]
enumerar _ [] = []
enumerar i (x:xs) = (i, x) : enumerar (i + 1) xs
multiplicarPorIndice2 :: (Int, Int) -> Int
multiplicarPorIndice2 (i, x) = i * x

-- ctrl+L
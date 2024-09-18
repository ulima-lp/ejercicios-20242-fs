main = print(sumaPares[1..10])

sumaPares :: [Int] -> Int
sumaPares lista = sumaParesAux lista 0

sumaParesAux :: [Int] -> Int -> Int
sumaParesAux [] suma = suma
sumaParesAux (x:xs) suma
    | x `mod` 2 == 0 = sumaParesAux xs (suma + x)
    | otherwise      = sumaParesAux xs suma
main = print (notasAprobadas [11, 09, 07, 16, 17, 20, 20, 10, 19])

notasAprobadas :: [Int] -> [Int]
notasAprobadas notas = filtrarAprobadas notas []

filtrarAprobadas :: [Int] -> [Int] -> [Int]
filtrarAprobadas [] aprobadas = aprobadas
filtrarAprobadas (x:xs) aprobadas
    | x >= 11   = filtrarAprobadas xs (aprobadas ++ [x])
    | otherwise = filtrarAprobadas xs aprobadas
-- Función estrellas
estrellas :: Int -> String
estrellas 0 = ""
estrellas 1 = "*"
estrellas n = "* " ++ estrellas (n-1)


-- Función piramide
piramide :: Int -> String
piramide 0 = ""
piramide h = (piramide (h-1)) ++ "\n" ++ (estrellas h)

-- Ejecución
main = do
    putStrLn (piramide 3)
    putStrLn (piramide 7)
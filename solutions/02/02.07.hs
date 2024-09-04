main = do
    putStr "Ingrese su peso (kg): "
    peso <- getLine
    putStr "Ingrese su altura (m): "
    alt <- getLine
    let imc = (read peso::Double)/((read alt::Double)**2)
    putStrLn ("Su indice de masa corporal (IMC) es: " ++ show imc)
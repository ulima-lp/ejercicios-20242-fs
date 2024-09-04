main = do
    putStrLn "Peso (kg): "
    peso <- getLine
    putStrLn "Altura (m): "
    alt <- getLine
    let imc = (read peso::Double)/((read alt::Double)**2)
    putStrLn ("Tu IMC es: " ++ show imc)
    if imc < 18.5 then
        putStrLn "Bajo peso" else
            if imc < 25 && imc > 18.5 then
                putStrLn "Normal" else
                    if imc < 30 && imc > 25 then
                        putStrLn "Sobrepeso" else
                            putStrLn "Obesidad"
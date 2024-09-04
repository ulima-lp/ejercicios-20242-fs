tipoCambio :: Float -> String -> Float
tipoCambio a b = case b of
    "Dolar" -> a*0.27
    "Euro" -> a*0.24
    "Peso chileno" -> a*212.57
    "Peso argentino" -> a*56.79
    "Dolar canadiense" -> a*0.36

main :: IO()
main = do
    let a = 100.0
        b = "Dolar"
    putStrLn $ "El cambio de " ++ show a ++ " en dolares es: " ++ show (tipoCambio a b)
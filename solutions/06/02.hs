--Elabore un programa que reciba una lista de tuplas de 2 valores, donde el primer valor sea un numero y una potencia, y devuelva una nueva lista con los números elevados a la potencia correspondiente. Ejemplo: [(2,2),(3,5),(4,2),(2,6)] => [4,243,16,64]


--Son tuplas 
--sacar solo el primer valor fst 
--sacer el segundo valor snd
potencia_2 (x,y) = fst (x,y) ^ snd (x,y)


potencia::(Int,Int)->Int
potencia (x,y) = x ^ y

--potencia_map lista = map (\x y-> x * y) lista 
--potencia_map::[Int]->[Int]->[Int] 

--funciona con potencia_2 , potencia , de la forma de funcion secreta
potencia_ lista = map (\(x,y)->x^y) lista 

main = do
 -- putStrLn (show (potencia cc))
  let lista_s = [(2,2),(3,5),(4,2),(2,6)]
  putStrLn (show (potencia_ lista_s))
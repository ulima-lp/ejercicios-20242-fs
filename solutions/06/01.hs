-- Elabora un algoritmo que reciba un arreglo de nombres, y devuelva uno nuevo agregando un saludo al principo de cada nombre. Ejemplo: ["Leo","Hernan","Pepe"] => ["Buenas tardes, Leo","Buenas tardes, Hernan","Buenas tardes, Pepe"]
buenas::String->String
buenas lista = "Buenas tardes " ++ lista

buenas_map::[String] -> [String] 
buenas_map lista = map buenas lista
--buenas_map lista2 = map (\x -> "Buenas tardes " ++ [lista]) lista2

main = do
  let lista_a = ["Leo","Hernan","Pepe"]
  putStrLn (show (buenas_map lista_a))
  
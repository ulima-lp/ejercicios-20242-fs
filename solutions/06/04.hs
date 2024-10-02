--Elabore un programa que reciba como entrada una lista de tuplas con 3 valores: nombre de producto (String), precio (Float), stock (Int). Se quiere obtener una lista de con los nombres de aquellos productos que su precio sea mayor a 10.0 y tengan stock (stock mayor a cero). Ejemplo: [("Polo", 30.0, 5), ("Camisa", 50.0, 0), ("Collar", 5.0, 2), ("Casaca", 30.50, 3)] => ["Polo","Casaca"]
primero::(String,Float,Int)->String
primero (x,y,z) = x

--filtro_l::(String,Float,Int)->Bool NO ES FUNCIONAL
--filtro_l (x,y,z) = filter (y>10.0 && z>0) (x,y,z)

tiemda_di::[(String,Float,Int)]->[String]
tiemda_di lista = map primero (filter (\(x,y,z)-> y>10.0 && z>0) lista)
--obtenerNombres2 lista = map fst (filter (\(x,y)->y>1025) lista)
main = do
  let lista = [("Polo", 30.0, 5), ("Camisa", 50.0, 0), ("Collar", 5.0, 2), ("Casaca", 30.50, 3)]
  let lista2 = ("Polo", 30.0 , 5)
  --let filtro = filter snd>10 lista
  putStrLn (show(tiemda_di lista))
  putStrLn (show(primero lista2))
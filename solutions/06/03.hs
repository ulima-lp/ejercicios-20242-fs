--Elabora un programa que reciba una lista de tuplas de dos valores: nombre del empleado (String) y sueldo (float). Se quiere obtener una lista con los nombres de aquellos empleados con un sueldo mayor al sueldo minimo (s/ 1025) Ejemplo: [("Jaime",2000),("Luis",1000),("Renato",4000),("Cuto",10000)] => ["Jaime","Renato","Cuto"]

--lista_e::(String,Float)->(String)
--lista_e (x,y) = if y> 1025 then (x) else ("")
lista_e lista = [ x | (x,y) <- lista, y>1025]

personal_s lista = map lista_e lista--[[]]
-- filter devuelve los valores true de una lista
-- va parte por parte de una lista y aplica la funcion 
obtenerNombres2 lista = map fst (filter (\(x,y)->y>1025) lista)
--personal_s lista2 = map (\(x,y)-> [x | y>1025 ] ) lista2
obtenerNombres empleados = map fst (filter (\(x , y) -> y > 1025.0) empleados)

main = do
  let lista = [("Jaime",2000),("Luis",1000),("Renato",4000),("Cuto",10000)]
  let lista23 = [("Jaime", 2000)]
  putStrLn(show(lista_e lista23))
  putStrLn(show(obtenerNombres2 lista))
  putStrLn(show(obtenerNombres lista))
  
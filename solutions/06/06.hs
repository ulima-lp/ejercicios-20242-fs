--Elabora un programa que reciba una lista de tuplas de 3 valores: nombre del curso (String), seccion (Int) y la nota (Float). El programa además deberá recibir el nombre de un curso (String) y deberá calcular el promedio de notas de todas las secciones correspondientes a ese curso.

--[("Mate", 205, 15.5), ("Filo", 207, 8.0), ("Leng", 205, 3.0), ("Filo", 206, 11.5), ("Mate", 207, 18.0), ("Leng", 207, 6.0), ("Filo", 206, 14.5), ("Mate", 207, 7.0), ("Filo", 205, 9.0), ("Leng", 206, 16.0), ("Mate", 206, 4.0), ("Mate", 207, 2.5), ("Filo", 205, 12.0), ("Leng", 207, 19.0), ("Mate", 206, 17.0), ("Leng", 206, 10.0), ("Mate", 207, 1.0), ("Filo", 207, 5.0), ("Leng", 205, 13.5), ("Filo", 206, 20.0)]


imprimir::(String,Int,Float)->Float
imprimir (x,y,z) = z
main = do
  print("Ingrese la curso: ")
  curso<-readLn
  let filtrar lista = map imprimir (filter (\(x,y,z)-> x==curso) lista)
  let lista = [("Mate", 205, 15.5), ("Filo", 207, 8.0), ("Leng", 205, 3.0), ("Filo", 206, 11.5), ("Mate", 207, 18.0), ("Leng", 207, 6.0), ("Filo", 206, 14.5), ("Mate", 207, 7.0), ("Filo", 205, 9.0), ("Leng", 206, 16.0), ("Mate", 206, 4.0), ("Mate", 207, 2.5), ("Filo", 205, 12.0), ("Leng", 207, 19.0), ("Mate", 206, 17.0), ("Leng", 206, 10.0), ("Mate", 207, 1.0), ("Filo", 207, 5.0), ("Leng", 205, 13.5), ("Filo", 206, 20.0)]
  let notas = filtrar lista
  --let tam_ = length notas
  --let sum_ = sum notas
  --let promedio a b = a / fromIntegral b
  let promedio = (sum notas) / fromIntegral (length notas)
  print("Las notas de ese curso son:")
  --putStrLn (show tam_)
  --putStrLn (show sum_)
  --putStrLn (show (promedio sum_ tam_))
  putStrLn (show(filtrar lista))

  print("El promedio de esas notas es: " ++ show (truncate promedio ))

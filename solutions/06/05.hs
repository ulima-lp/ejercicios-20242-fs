--Elabora un programa que reciba una lista de tuplas de 3 valores: nombre del anime (String), rating (Float) y género (String). El programa debera, además recibir como entrada un rating y un genero, y debera devolver una lista con aquellos animes con un rating mayor o igual al ingresado y pertenecientes al género ingresado. Ejemplo: lista: [("Noragami",7.9,"Action"),("Neon Genesis Evangelion",8.5,"Sci-Fi"),("Jujutsu Kaisen",8.5,"Action"),("Sword Art Online",7.5,"Adventure"),("Tokyo Ghoul",7.7,"Fantasy"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")] rating: 8.3 género: "Action" El resultado deberia ser: [("Jujutsu Kaisen",8.5,"Action"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")]
imprimir::(String,Float,String)->(String,Float,String)
imprimir (x,y,z) = (x,y,z)

main = do
  print("Ingrese un rating: ")
  rating<-readLn
  print("Ingrese un un genero: ")
  genero<-readLn
  let filtro_an lista2 = map imprimir (filter (\(x,y,z)-> rating <= y && genero == z) lista2)
  let lista = [("Noragami",7.9,"Action"),("Neon Genesis Evangelion",8.5,"Sci-Fi"),("Jujutsu Kaisen",8.5,"Action"),("Sword Art Online",7.5,"Adventure"),("Tokyo Ghoul",7.7,"Fantasy"),("Fullmetal Alchemist: Brotherhood",9.1,"Action")]
  print("Resultados: ")
  putStrLn(show (filtro_an lista))


  
  
  
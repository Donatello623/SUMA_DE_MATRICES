# README

## Descripción
Este programa en C++ realiza la suma de dos matrices bidimensionales de tamaño 2x2 y muestra el resultado. Es un ejemplo sencillo de cómo manipular matrices en C++ y realizar operaciones matemáticas entre ellas.

## Funcionalidad
El programa define una función llamada `sumarMatrices` que toma tres matrices bidimensionales de tamaño 2x2 como parámetros:
- `matriz1` y `matriz2` contienen los valores originales que se suman.
- `resultado` almacena los valores obtenidos tras la suma de las dos primeras matrices.

La función recorre ambas matrices con bucles anidados y calcula la suma elemento por elemento, almacenando los resultados en la matriz `resultado`.

En el programa principal:
1. Se inicializan dos matrices de 2x2 con valores predefinidos.
2. Se llama a la función `sumarMatrices` para realizar la suma.
3. Finalmente, se muestra la matriz resultante en la consola.

## Cómo ejecutar el programa
1. Asegúrte de tener un compilador de C++ instalado, como GCC o cualquier IDE que soporte C++.
2. Copia el código fuente a un archivo con extensión `.cpp`. Por ejemplo, `suma_matrices.cpp`.
3. Compila el archivo utilizando el compilador. Por ejemplo:
   ```
   g++ suma_matrices.cpp -o suma_matrices
   ```
4. Ejecuta el programa compilado:
   ```
   ./suma_matrices
   ```

## Resultado esperado
El programa suma las siguientes matrices:
```
Matriz 1:
1 2
3 4

Matriz 2:
5 6
7 8
```

El resultado mostrado en la consola es:
```
Matriz resultante de la suma:
6 8
10 12
```

## Propósito
El propósito principal de este programa es:
- Enseñar cómo manipular matrices en C++.
- Practicar el uso de bucles anidados para recorrer estructuras bidimensionales.
- Mostrar una aplicación práctica de operaciones matemáticas con matrices.

## Observaciones
- Actualmente, las matrices contienen valores predefinidos. Se podría mejorar el programa solicitando al usuario que ingrese los valores de las matrices.
- Este programa está limitado a matrices de tamaño 2x2. Para hacerlo más general, se podría modificar la función para trabajar con matrices de cualquier tamaño.
- No se incluye validación de errores ya que las matrices son estáticas y siempre tienen dimensiones válidas.
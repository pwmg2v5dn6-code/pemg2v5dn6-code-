# Promedio de Notas en C

Programa de consola escrito en lenguaje C que pide 10 notas a un estudiante, valida que cada una esté entre 0 y 100, y calcula la suma y el promedio.

## Qué problema resuelve

Calcular a mano el promedio de varias notas puede llevar a errores, y es fácil escribir una nota que no existe (por ejemplo 150 o -5). Este programa automatiza el cálculo y obliga a ingresar solo notas válidas.

## Tecnologías utilizadas

- Lenguaje **C**
- Compilador **GCC**
- Librería estándar `stdio.h`

## Cómo funciona

1. Un ciclo `for` repite el proceso 10 veces, una por cada nota.
2. Con `scanf` se lee la nota ingresada por el usuario.
3. Un ciclo `while` verifica que la nota esté entre 0 y 100. Si no lo está, muestra un mensaje y vuelve a pedirla hasta que sea válida.
4. Cada nota válida se acumula en la variable `suma`.
5. Al terminar, el promedio se calcula como `suma / 10.0`. Se usa `10.0` (decimal) para que el resultado conserve los decimales.
6. Se muestran en pantalla la suma y el promedio con 2 decimales.

## Cómo instalar y ejecutar

Necesitas tener instalado un compilador de C, como GCC.

1. Clona el repositorio o descarga el archivo `promedio_notas.c`:

```bash
git clone https://github.com/TU-USUARIO/promedio-notas-c.git
cd promedio-notas-c
```

2. Compila el programa:

```bash
gcc promedio_notas.c -o promedio_notas
```

3. Ejecútalo:

```bash
./promedio_notas
```

En Windows, el ejecutable se llama `promedio_notas.exe` y se corre con `promedio_notas.exe`.

## Ejemplo de uso

Ejemplo ingresando una nota inválida (150) en la tercera posición:

```
Ingrese la nota 1 (0-100): 80
Ingrese la nota 2 (0-100): 90
Ingrese la nota 3 (0-100): 150
Nota invalida. Ingrese una nota entre 0 y 100: 90
Ingrese la nota 4 (0-100): 70
Ingrese la nota 5 (0-100): 100
Ingrese la nota 6 (0-100): 60
Ingrese la nota 7 (0-100): 85
Ingrese la nota 8 (0-100): 95
Ingrese la nota 9 (0-100): 75
Ingrese la nota 10 (0-100): 88

La suma de las notas es: 833
El promedio del estudiante es: 83.30
```
## Qué aprendí

- Uso de entrada y salida en C con `printf` y `scanf`.
- Ciclos `for` y `while`.
- Validación de datos ingresados por el usuario.
- Diferencia entre división entera y decimal en C.

## Autor

**Jonathan Joel Rodríguez Agrazal**
Estudiante de Lic. en Redes Informáticas, Universidad Tecnológica

- Correo: jonajoel0715@gmail.com
- LinkedIn: [Jonathan Rodríguez](https://www.linkedin.com/in/jonathan-rodriguez-633836394)

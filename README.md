# Proyecto: Juego de Mesa - Laboratorio 0 PAV 2024

Este proyecto es una aplicación en C++ que simula un juego de mesa con niños, libros y objetos. Permite gestionar la interacción entre los participantes y los elementos del juego.

## Estructura del Proyecto

- `main.cpp`: Punto de entrada de la aplicación.
- `Ninio.cpp/h`: Clase que representa a un niño participante.
- `Libro.cpp/h`: Clase que representa un libro en el juego.
- `Objeto.cpp/h`: Clase base para objetos del juego.
- `DTObjetoRoto.cpp/h`: Clase para objetos rotos (Data Transfer Object).
- `JuegoMesa.cpp/h`: Lógica principal del juego de mesa.
- `makefile`: Script para compilar el proyecto.
- `.vscode/`: Configuraciones para Visual Studio Code.

## Requisitos

- Compilador C++ (recomendado: g++)
- Sistema operativo compatible (Windows, Linux, etc.)

## Compilación y Ejecución

1. Abre una terminal en la carpeta raíz del proyecto (`Lab0_Pav_2024-main`).
2. Compila el proyecto con:

   ```sh
   make
   ```

3. Ejecuta la aplicación con:

   - En Linux/Mac:
     ```sh
     ./programa
     ```
   - En Windows:
     ```sh
     programa.exe
     ```

## Uso

Al iniciar, la aplicación ejecuta la lógica definida en `main.cpp`, mostrando en consola la simulación del juego de mesa y las interacciones entre los niños, libros y objetos.

## Créditos

Laboratorio 0 - Programación Avanzada, 2024.

---

Si tienes problemas de compilación, asegúrate de tener instalado `g++` y estar en la carpeta correcta. Para limpiar y recompilar:

```sh
make clean
make
```

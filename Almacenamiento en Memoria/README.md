# Almacenamiento en memoria <img src="img/memory-slot.png" align = "right"  width="45" height="45"/>

Todas las variables de un programa en C tienen un espacio en la memoria de la computadora.<br>
Estas tienen un tamaño en bits, y un bit es la unidad de almacenamiento más pequeña, puede contener 0 o 1.
<br> <br>
Podemos imaginar a la memoria como un arreglo de bits.<br>
<img src="img/memory-array.png" width="500" height="100"/>
<br>
Los bits estan agrupados en bytes. Un byte esta formado por 8 bits.
<br>
<img src="img/memory-bytes.png"  width="500" height="80"/>
<br>
Todas las variadas declaradas en nuestro programa tienen una ubicación, y en esta dirección se almacena su información.
<img src="img/memory-address.png" width="500" height="130">
<br>

## Direcciones de Memoria <img src="img/address-logo.png" align = "right"  width="45" height="45"/>

Todos los bytes en la memoria tienen una dirección, que no es más que un índice correlativo, esto quiere decir que se almacenan uno detrás de otro. <br>
Las direcciones de memoria suelen escribirse en notación hexadecimal.<br>
<img src="img/memory-address-and-data.png" width="180" height="200">
<br>
En C, el operador ‘&’ nos permite obtener la dirección de la memoria en que está almacenada una variable, o más precisamente, la dirección de su primer byte.<br>

```
    printf("La dirección de la variable es: %p", &variable);
```

<br>
<img src="img/memory-address-example.png" width="380" height="25">
<br><br>
Suponiendo que declaramos diferentes variables de diferentes tipos, se encuentran ubicados en  la memoria de una forma similar a la siguiente:
<br>
<img src="img/variables-in-memory.png" width="200" height="220">
<br>
<img src="img/variables-address.png" width="400" height="800">
<br>
En este caso, la variable "h" respresenta una estructura que contiene 3 variables de tipo "int".

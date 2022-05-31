#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <locale.h>
#include "Librerias/pila.h"

/// -- PROTOTIPADO --
int ingresarElementos(int arreglo[]);
int validosChar(char arreglo[]);
void mostrarArreglo (int arreglo[], int *elementosValidos);
void sumarArreglo(int arreglo[], int* elementosValidos);
void copiarElementosDeArregloAPila(int arreglo[], int elementos);
void ejercicio5(float arregloFloat[]);
void cargarRandom(float arregloR[]);
void mostrarArreglosFloat(float arregloF[]);
void sumarElementosReales(float arregloF[]);
char ingresarCharUsuario(char arreglo[]);
void mostrarArregloC (char arreglo[], int *elementosValidos);
void buscarChar(char arreglo[], int* elementosValidos);
void ordenAlfabetico(char arreglo[]);
char elementoMayorChar(char arreglo[], int elementosValidos);
void esCapicua(char arreglo[], int* elementosValidos);
int validosInt(int arreglo[]);
void arregloInvertido(char arreglo[], int elementosValidos);
int posicionMenorInt(int arreglo[], int elementosValidos, int inicial);
void intercambiarValores(int arreglo[], int menor, int actual);
int insertarOrdenadoInt(int arreglo[], int elementosValidos, int insertado);
void ordenarSeleccion(int arreglo[], int elementosValidos);
void ordenarInsercion(int arreglo[], int elementosValidos);
int posicionMenorChar(char arreglo[], int elementosValidos, int inicial);
void intercambiarValoresChar(char arreglo[], int menor, int actual);
int insertarOrdenadoChar(char arreglo[], int elementosValidos, int insertado);
void ordenarSeleccionChar(char arreglo[], int elementosValidos);
void ordenarInsercionChar(char arreglo[], int elementosValidos);
void intercalado(char arregloUno[], char arregloDos[], char resultado[], int elementosValidosUno, int elementosValidosDos);
int menu();

/// -- MAIN --

int main()
{
    int dim;
    int arregloInt[30];
    char arregloChar[10];
    int valInt;
    char valChar;
    setlocale(LC_ALL, "");
    int opt=0;
    do{
        opt=menu();
        system("cls");
        switch(opt){
        case 1:{
            printf(" 1.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO DE NÚMEROS ENTEROS Y PERMITA QUE EL USUARIO INGRESE VALORES AL MISMO POR TECLADO. LA FUNCIÓN DEBE RETORNAR LA CANTIDAD DE ELEMENTOS CARGADOS EN EL ARREGLO (O PUEDEN UTILIZAR COMO PUNTEROS VÁLIDOS).\n\n");
            //ingresarElementos(arregloInt);
            valInt=ingresarElementos(arregloInt);
            printf(" LA CANTIDAD DE ELEMENTOS ES DE: %i\n\n", valInt);
            system("pause");
            system("cls");
        }break;
        case 2:{
            printf(" 2.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO Y LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y LOS MUESTRE POR PANTALLA.\n\n");
            mostrarArreglo(arregloInt,valInt);
            system("pause");
            system("cls");
        }break;
        case 3:{
            printf(" 3.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO Y LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y CALCULE LA SUMA DE SUS ELEMENTOS.\n\n");
            mostrarArreglo(arregloInt,valInt);
            sumarArreglo(arregloInt,valInt);
            system("pause");
            system("cls");
        }break;
        case 4:{
            printf(" 4.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO, LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y UNA PILA. LA FUNCIÓN DEBE COPIAR LOS ELEMENTOS DEL ARREGLO EN LA PILA.\n\n");
            mostrarArreglo(arregloInt,valInt);
            copiarElementosDeArregloAPila(arregloInt,valInt);
            system("pause");
            system("cls");
        }break;
        case 5:{
            printf(" 5.REALIZAR UNA FUNCIÓN QUE SUME LOS ELEMENTOS DE UN ARREGLO DE NÚMEROS REALES (FLOAT) DE DIMENSIÓN 100. (SE RECOMIENDA HACER UNA FUNCIÓN PARA CARGAR Y OTRA PARA MOSTRAR PARA ESTE TIPO DE DATO ASOCIADO AL ARREGLO).\n\n");
            ejercicio5(arregloInt);
            system("pause");
            system("cls");
        }break;
        case 6:{
            printf(" 6.REALIZAR UNA FUNCIÓN QUE INDIQUE SI UN ELEMENTO DADO SE ENCUENTRA EN UN ARREGLO DE CARACTERES.\n\n");
            valChar = ingresarCharUsuario(arregloChar);
            mostrarArregloC(arregloChar,valChar);
            buscarChar(arregloChar,valChar);
            system("pause");
            system("cls");
        }break;
        case 7:{
            printf(" 7.REALIZAR UNA FUNCIÓN QUE INSERTE UN CARÁCTER EN UN ARREGLO ORDENADO ALFABÉTICAMENTE, CONSERVANDO EL ORDEN.\n\n");
            ordenAlfabetico(arregloChar);
            system("pause");
            system("cls");
        }break;
        case 8:{
            printf(" 8.REALIZAR UNA FUNCIÓN QUE OBTENGA EL MÁXIMO CARÁCTER DE UN ARREGLO DADO.\n\n");
            mostrarArregloC(arregloChar,valChar);
            elementoMayorChar(arregloChar,valChar);
            system("pause");
            system("cls");
        }break;
        case 9:{
            printf(" 9.REALIZAR UNA FUNCIÓN QUE DETERMINE SI UN ARREGLO ES CAPICÚA.\n\n");
            mostrarArregloC(arregloChar,valChar);
            esCapicua(arregloChar,valChar);
            system("pause");
            system("cls");
        }break;
        case 10:{
            mostrarArregloC(arregloChar,valChar);
            arregloInvertido(arregloChar,valChar);
            mostrarArregloC(arregloChar,valChar);
            printf("\n");
            system("pause");
            system("cls");
        }break;
        case 11:{
            printf(" 11.ORDENAR UN ARREGLO SEGÚN LOS SIGUIENTES MÉTODOS:\n A) SELLECION.\n B) INSERCION. \n\n");
            int opcion;
            do{
                printf(" QUE TIPO DE ARREGLO DESEA ORDENAR: \n\n");
                printf(" 1.INT\n");
                printf(" 2.CHAR\n");
                printf(" 3.SALIR\n\n");
                printf(" INGRESE LA OPCION: ");
                fflush(stdin);
                scanf("%i", &opcion);
                system("cls");
                switch(opcion){
                case 1:{
                    valInt=ingresarElementos(arregloInt);
                    printf(" ARREGLO TIPO INT\n");
                    mostrarArreglo(arregloInt,valInt);
                    ordenarSeleccion(arregloInt,valInt);
                    mostrarArreglo(arregloInt,valInt);
                    ordenarInsercion(arregloInt,valInt);
                    mostrarArreglo(arregloInt,valInt);
                    system("pause");
                    system("cls");
                }break;
                case 2:{
                    printf(" ARREGLO TIPO CHAR\n");
                    valChar=ingresarCharUsuario(arregloChar);
                    mostrarArregloC(arregloChar,valChar);
                    ordenarSeleccionChar(arregloChar,valChar);
                    mostrarArregloC(arregloChar,valChar);
                    ordenarInsercionChar(arregloChar,valChar);
                    mostrarArregloC(arregloChar,valChar);
                    system("pause");
                    system("cls");
                }break;
                case 3:{
                    printf(" FIN DEL EJERCICIO 11\n\n");
                    system("pause");
                    system("cls");
                }break;
                default:
                    printf(" OPCION INCORRECTA\n\n");
                    system("pause");
                    break;
                }
            }while(opcion!=3);
        }break;
        case 12:{
            printf(" 12.DADOS DOS ARREGLOS ORDENADOS ALFABÉTICAMENTE, CREAR UN TERCER ARREGLO CON LOS ELEMENTOS DE LOS DOS PRIMEROS INTERCALADOS, DE MANERA QUE QUEDE UN ARREGLO TAMBIÉN ORDENADO ALFABÉTICAMENTE.\n\n");
            char arregloUNO[]="ABCDJKLMSTUVW";
            char arregloDOS[]="EFGHINOPQRVXYZ";
            char arregloCompleto[27];
            mostrarArregloC(arregloUNO,13);
            mostrarArregloC(arregloDOS,14);
            intercalado(arregloUNO,arregloDOS,arregloCompleto,13,14);
            mostrarArregloC(arregloCompleto,27);
            system("pause");
            system("cls");
        }break;
        case 13:{
            printf("\n FIN DEL TRABAJO PRACTICO\n");
            system("pause");
            system("cls");
        }break;
        default:
            printf("\n OPCION INCORRECTA\n\n");
            system("pause");
            system("cls");
            break;
        }
    }while(opt!=13);
    printf("\n FIN DEL PROGRAMA\n\n");
    system("pause");
}

/// -- FUNCIONES --

/// 1. Hacer una función que reciba como parámetro un arreglo de números enteros y permita que el
/// usuario ingrese valores al mismo por teclado. La función debe retornar la cantidad de elementos
/// cargados en el arreglo.
int ingresarElementos(int arreglo[]){
    char opt;
    int elemento=0;
    do{
        printf(" INGRESE UN ELEMENTO: ");
        scanf("%d",&arreglo[elemento]);
        elemento++;

        printf("\n DESEA CARGAR UN NUEVO ELEMENTO? Y/N: ");
        fflush(stdin);
        scanf("%c", &opt);
        printf("\n");
    }
    while(opt=='Y'||opt=='y');
    return elemento;
}

/// FUNCION VALIDOS
int validosInt(int arreglo[]){
    int flag=0;
    int validos=0;

    for(int i=0; flag==0; i++){
        if(arreglo[i]==NULL){
            flag=1;
        }
        else{
            validos++;
        }
    }
    return validos;
}
int validosChar(char arreglo[]){
    int validos = strlen(arreglo);
    return validos;
}

/// 2. Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
/// cargados en él y los muestre por pantalla.
void mostrarArreglo (int arreglo[], int* elementosValidos){
    printf(" ELEMENTOS DEL ARREGLO: ");
    for (int i = 0 ; i < elementosValidos ; i++){
        printf("| %i |", arreglo[i]);
    }
    printf("\n\n");
}

/// 3.Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos)
/// cargados en él y calcule la suma de sus elementos.
void sumarArreglo(int arreglo[], int* elementosValidos){
    int suma=0;{
        for(int i=0; i<elementosValidos; i++){
            suma = suma+arreglo[i];
        }
    }
    printf(" LA SUMA DE LOS ELEMENTOS DA: %i\n\n", suma);
}

/// 4.Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos) cargados
/// en él y una Pila. La función debe copiar los elementos del arreglo en la pila.
void copiarElementosDeArregloAPila(int arreglo[], int elementos){
    Pila pilaArreglo;
    inicpila(&pilaArreglo);
    for(int i=0; i<elementos; i++){
        apilar(&pilaArreglo, arreglo[i]);
    }
    mostrar(&pilaArreglo);
    printf("\n");
}

/// 5. Realizar una función que sume los elementos de un arreglo números reales de dimensión 100.
/// (para poder hacer esta función, hay que cargar un arreglo de reales, se recomienda hacer una función
/// para cargar y otra para mostrar este tipo de arreglos)
void ejercicio5(float arregloFloat[]){
    cargarRandom(arregloFloat);
    mostrarArreglosFloat(arregloFloat);
    sumarElementosReales(arregloFloat);
}
void sumarElementosReales(float arregloF[]){
    float suma=0;{
        for(int i=0; i<=100; i++){
            suma=suma+arregloF[i];
        }
    }
    printf(" LA SUMA DE LOS ELEMENTOS DA: %.2f\n\n", suma);
}
void cargarRandom(float arregloR[]){
    srand((unsigned int)time(NULL));
    float numRandom = 10.0;
    for (int i=0; i<100; i++){
        arregloR[i] = ((float)rand()/(float)(RAND_MAX)) * numRandom;
    }
}
void mostrarArreglosFloat(float arregloF[]){
    for(int i=0; i<100; i++){
        printf("| %.2f |", arregloF[i]);
    }
    printf("\n");
}

/// 6.Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres.
char ingresarCharUsuario(char arreglo[]){
    char opt;
    int elemento=0;
    do{
        printf(" INGRESE UN ELEMENTO: ");
        fflush(stdin);
        scanf("%c",&arreglo[elemento]);
        elemento++;

        printf("\n DESEA CARGAR UN NUEVO ELEMENTO? Y/N: ");
        fflush(stdin);
        scanf("%c", &opt);
        printf("\n");
    }
    while(opt=='Y'||opt=='y');

    //printf("\n");
   // mostrarArregloC(arreglo, elemento);
    //printf("\n");
    //buscarChar(arreglo, elemento);

    return elemento;
}
void mostrarArregloC (char arreglo[], int *elementosValidos){
    printf(" ELEMENTOS DEL ARREGLO: ");
    for (int i = 0 ; i < elementosValidos ; i++){
        printf("| %c |", arreglo[i]);
    }
    printf("\n\n");
}
void buscarChar(char arreglo[], int* elementosValidos){
    char buscado;
    printf(" ELEMENTO A BUSCAR: ");
    fflush(stdin);
    scanf("%c", &buscado);
    int flag=0;
    for (int i=0; i<elementosValidos; i++){
        if(buscado==arreglo[i]){
            printf("\n EL CHARACTER %c ESTA EN EL ARREGLO\n\n",buscado);
            flag=1;
        }
    }
    if(flag==0){
        printf("\n EL CHARACTER %c NO ESTA EN EL ARREGLO\n\n",buscado);
    }
}

/// 7.Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden.
void ordenAlfabetico(char arreglo[]){
    char arregloOrdenado[10]="abcd";
    char objetoNuevo;
    printf(" INGRESE EL ELEMENTO A ORDENAR: ");
    fflush(stdin);
    scanf("%c", &objetoNuevo);
    insertarElemento(arregloOrdenado,4,objetoNuevo);
    printf("\n");
    mostrarArregloC(arregloOrdenado,5);
}
void insertarElemento(char arreglo[],int validos, char objeto){
    int i=validos-1;
    while(i>=0&&objeto<arreglo[i]){
        arreglo[i+1]=arreglo[i];
        i--;
    }
    arreglo[i+1]=objeto;
}

/// 8. Realizar una función que obtenga el máximo carácter de un arreglo dado.
char elementoMayorChar(char arreglo[], int elementosValidos){
    char mayorElemento=arreglo[0];
    for (int i=1; i<elementosValidos-1; i++){
        if(arreglo[i]>mayorElemento){
            mayorElemento=arreglo[i];
        }
    }
    printf("\n EL MAYOR ELEMENTO ES: %c\n\n", mayorElemento);
    return mayorElemento;
}

/// 9. Realizar una función que determine si un arreglo es capicúa.
void esCapicua(char arreglo[], int* elementosValidos){
    int j = elementosValidos;
    j--;
    int flag=0;
    for(int i=0; i<elementosValidos; i++){
        if(arreglo[i]==arreglo[j]){
            j--;
        }
        else{
            flag=1;
        }
    }
    if(flag==0){
        printf("\n ES CAPICUA\n\n");
    }
    else{
        printf("\n NO ES CAPICUA\n\n");
    }
}

/// 10.Realizar una función que invierta los elementos de un arreglo. (Sin utilizar arreglo auxiliar)
void arregloInvertido(char arreglo[], int elementosValidos){
    char arregloInvertido[elementosValidos+10];
    for(int i=0; i<elementosValidos; i++){
        arregloInvertido[i] = arreglo[i];
    }

    printf("\n ARREGLO INVERTIDO\n");
    for(int i=0; i<elementosValidos;i++){
        arreglo[i]=arregloInvertido[elementosValidos-1-i];
    }
}

/// 11.Ordenar un arreglo segun los siguientes metodos:
/// INT
int posicionMenorInt(int arreglo[], int elementosValidos, int inicial){
    int aux = arreglo[inicial];
    int menor = inicial;
    for (int i=inicial; i<elementosValidos; i++){
        if(arreglo[i]<aux){
            aux = arreglo[i];
            menor = i;
        }
    }
    return menor;
}
void intercambiarValores(int arreglo[], int menor, int actual){
    int aux;
    aux = arreglo[menor];
    arreglo[menor]=arreglo[actual];
    arreglo[actual] = aux;
}
int insertarOrdenadoInt(int arreglo[], int elementosValidos, int insertado){
    for (int i=elementosValidos-1; i>=0 && insertado<arreglo[i];i--){
        arreglo[i+1] = arreglo [i];
        arreglo[i+1] = insertado;
    }
    return elementosValidos++;
}
/// a. Seleccion.
void ordenarSeleccion(int arreglo[], int elementosValidos){
    int posicionMenor=0;
    printf(" ORDEN POR SELECCION\n");
    for (int i=0; i<elementosValidos-1;i++){
        posicionMenor=posicionMenorInt(arreglo, elementosValidos, i);
        intercambiarValores(arreglo, posicionMenor, i);
    }
}
/// b. Insercion.
void ordenarInsercion(int arreglo[], int elementosValidos){
    printf(" ORDEN POR INSERCION\n");
    for(int i=0; i<elementosValidos;i++){
        insertarOrdenadoInt(arreglo, i, arreglo[i]);
    }
}
/// CHAR
int posicionMenorChar(char arreglo[], int elementosValidos, int inicial){
    int aux = arreglo[inicial];
    int menor = inicial;
    for (int i=inicial; i<elementosValidos; i++){
        if(arreglo[i]<aux){
            aux = arreglo[i];
            menor = i;
        }
    }
    return menor;
}
void intercambiarValoresChar(char arreglo[], int menor, int actual){
    int aux;
    aux = arreglo[menor];
    arreglo[menor]=arreglo[actual];
    arreglo[actual] = aux;
}
int insertarOrdenadoChar(char arreglo[], int elementosValidos, int insertado){
    for (int i=elementosValidos-1; i>=0 && insertado<arreglo[i];i--){
        arreglo[i+1] = arreglo [i];
        arreglo[i+1] = insertado;
    }
    return elementosValidos++;
}
/// a. Seleccion.
void ordenarSeleccionChar(char arreglo[], int elementosValidos){
    int posicionMenor=0;
    printf(" ORDEN POR SELECCION\n");
    for (int i=0; i<elementosValidos-1;i++){
        posicionMenor=posicionMenorChar(arreglo, elementosValidos, i);
        intercambiarValoresChar(arreglo, posicionMenor, i);
    }
}
/// b. Insercion.
void ordenarInsercionChar(char arreglo[], int elementosValidos){
    printf(" ORDEN POR INSERCION\n");
    for(int i=0; i<elementosValidos;i++){
        insertarOrdenadoChar(arreglo, i, arreglo[i]);
    }
}

/// 12.Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de los
/// dos primeros intercalados, de manera que quede un arreglo también ordenado alfabéticamente.
void intercalado(char arregloUno[], char arregloDos[], char resultado[], int elementosValidosUno, int elementosValidosDos){
    int i=0;
    int j=0;
    int z=0;
    int validosResultado = elementosValidosUno+elementosValidosDos;

    while(z<validosResultado){
        if((i<elementosValidosUno)&& (j<elementosValidosUno)){
            if (arregloUno[i]<arregloDos[j]){
                resultado[z]=arregloUno[i];
                i++;
            }else{
                resultado[z] = arregloDos[j];
                j++;
            }
        }else if(i<elementosValidosUno){
            resultado[z] = arregloUno[i];
            i++;
        }else{
            resultado[z] = arregloDos[j];
            j++;
        }
        z++;
    }
    resultado[z+1]='\0';
}

int menu(){
    int option;
        printf("=================================\n");
        printf(" TRABAJO PRACTICO N° 4: ARREGLOS\n");
        printf("=================================\n");
        printf(" 1.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO DE NÚMEROS ENTEROS Y PERMITA QUE EL USUARIO INGRESE VALORES AL MISMO POR TECLADO. LA FUNCIÓN DEBE RETORNAR LA CANTIDAD DE ELEMENTOS CARGADOS EN EL ARREGLO (O PUEDEN UTILIZAR COMO  PUNTEROS VÁLIDOS).\n\n");
        printf(" 2.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO Y LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y LOS MUESTRE POR PANTALLA.\n\n");
        printf(" 3.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO Y LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y CALCULE LA SUMA DE SUS ELEMENTOS.\n\n");
        printf(" 4.HACER UNA FUNCIÓN QUE RECIBA COMO PARÁMETRO UN ARREGLO, LA CANTIDAD DE ELEMENTOS (VÁLIDOS) CARGADOS EN ÉL Y UNA PILA. LA FUNCIÓN DEBE COPIAR LOS ELEMENTOS DEL ARREGLO EN LA PILA.\n\n");
        printf(" 5.REALIZAR UNA FUNCIÓN QUE SUME LOS ELEMENTOS DE UN ARREGLO DE NÚMEROS REALES (FLOAT) DE DIMENSIÓN 100. (SE RECOMIENDA HACER UNA FUNCIÓN PARA CARGAR Y OTRA PARA MOSTRAR PARA ESTE TIPO DE DATO ASOCIADO AL ARREGLO).\n\n");
        printf(" 6.REALIZAR UNA FUNCIÓN QUE INDIQUE SI UN ELEMENTO DADO SE ENCUENTRA EN UN ARREGLO DE CARACTERES.\n\n");
        printf(" 7.REALIZAR UNA FUNCIÓN QUE INSERTE UN CARÁCTER EN UN ARREGLO ORDENADO ALFABÉTICAMENTE, CONSERVANDO EL ORDEN.\n\n");
        printf(" 8.REALIZAR UNA FUNCIÓN QUE OBTENGA EL MÁXIMO CARÁCTER DE UN ARREGLO DADO.\n\n");
        printf(" 9.REALIZAR UNA FUNCIÓN QUE DETERMINE SI UN ARREGLO ES CAPICÚA.\n\n");
        printf(" 10.REALIZAR UNA FUNCIÓN QUE INVIERTA LOS ELEMENTOS DE UN ARREGLO.  (SIN UTILIZAR UN ARREGLO AUXILIAR).\n\n");
        printf(" 11.ORDENAR UN ARREGLO SEGÚN LOS SIGUIENTES MÉTODOS:\n A) SELLECION.\n B) INSERCION. \n\n");
        printf(" 12.DADOS DOS ARREGLOS ORDENADOS ALFABÉTICAMENTE, CREAR UN TERCER ARREGLO CON LOS ELEMENTOS DE LOS DOS PRIMEROS INTERCALADOS, DE MANERA QUE QUEDE UN ARREGLO TAMBIÉN ORDENADO ALFABÉTICAMENTE.\n\n");
        printf(" 13.SALIR\n\n");
        printf("\n ELIJA UNA OPCIÓN: ");
        fflush(stdin);
        scanf("%i", &option);
        return option;
}

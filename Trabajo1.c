//ALMACÉN DE PRODUCTOS
#include<stdio.h>
#include<string.h>
struct persona
{
	char nombre1[40];
	char apellido[40];
	char genero[40];
	int edad;
	char correo[100];
	int numero;	
};
struct producto
{
	char nombre[40];
	int codigo;
	int existencias;
	float precio;
};

void AbrirFicheroMedicamentos(struct producto farmaco[], int farmacos);
int menu();
void Banner();

int main(){
	system("color 4F");
	Banner();
	
	struct persona contratada[7];
	struct producto farmaco[8];
	int i, j, farmacos=0, contratados=0, opcion, opcion1, intentos;
	int codigoUsuario=0, existenciasUsuario=0;
	float PrecioFinal=0.0f;
	char despedido[40], jefe[7], contrasena[7], JEFE[7]="Malcom", CONTRASENA[7]="aBcDeF";
	FILE*pfichero;
	
	AbrirFicheroMedicamentos(farmaco, farmacos);
	
    do
	{ 
	opcion1=menu(opcion);
    switch (opcion1)
    {
    	case 1:
    		system("cls");
	    	
	    	printf("\n  Nombre: ");
    		scanf("%s", contratada[7].nombre1);
    		fflush(stdin);
    		printf("  Apellido: ");
    	    scanf("%s", contratada[7].apellido);
    		printf("  G%cnero: ", 130);
    		scanf("%s", contratada[7].genero);
    		printf("  Edad: ");
    		scanf("%d", &contratada[7].edad);
    		printf("  Correo: ");
    		fflush(stdin);
    		gets(contratada[7].correo);
    		printf("  N%cmero de tel%cfono: ", 163, 162);
    		scanf("%d", &contratada[7].numero);
	    	
	        pfichero=fopen("empleados.txt", "a");
	        if(pfichero==NULL){
                printf("Error al abrir el fihero");
                return 0;
	        }
    		fprintf(pfichero, "%s    %s     %s     %d    %s   %d\n", contratada[7].nombre1, contratada[7].apellido, contratada[7].genero, contratada[7].edad, contratada[7].correo, contratada[7].numero);
			fclose(pfichero);
    		
    		break;
    		
    	case 2:
    		system("cls");
    		intentos=3;
    		printf("\n   --INICIAR SESI%cN-- \n", 224);
    	    do{
    	    	printf("\n   USUARIO JEFE: ");
    	    	scanf("%s", jefe);
    	    	fflush(stdin);
    	    	printf("   CONTRASE%cA: ", 165);
                gets(contrasena);
    	    	intentos--;
    	    	if((strcmp(jefe, JEFE) && strcmp(contrasena, CONTRASENA))!=0 && (intentos>0 && intentos<=3))
    	    	    printf("   Por favor, introduzca los datos correctamente.\n");
			}while((strcmp(jefe, JEFE) && strcmp(contrasena, CONTRASENA))!=0 && (intentos>0 && intentos<=3));
			
		
			
			if((strcmp(jefe, JEFE) && strcmp(contrasena, CONTRASENA))==0){
				printf("\n   Nombre del personal a despedir: ");
    	    	gets(despedido);
    	    	
    	    	printf("\n   Usted ha despedido a %s\n", despedido);
			}
			else
			   printf("\n   **ACCESO DENEGADO**\n");
    		
    		break;
    	case 3:
    		system("cls");
    		
    		printf("\n-------------------------------------------------------------------------------\n");
    		printf("|   PRODUCTO    | CODIGO DE PRODUCTO | NUMERO DE EXISTENCIAS | PRECIO UNITARIO |\n");
    		for (i=0; i<8; i++) {
    		    printf("-------------------------------------------------------------------------------");
    		    printf("  %s            %d                  %d                  %.2f%c       \n", farmaco[i].nombre, farmaco[i].codigo, farmaco[i].existencias, farmaco[i].precio, 36);
    	    }
    	    printf("-------------------------------------------------------------------------------\n");
    		break;
    		
    	case 4:
    		
    		printf("\n  Introduce el c%cdigo del producto: ", 162);
    		scanf("%d", &codigoUsuario);
    		
    		for(i=0;i<8;i++)
    		{
    			if(codigoUsuario==farmaco[i].codigo)
    			{
    		    	printf("  Introduce las unidades que quiera comprar: ", 162);
    		    	scanf("%d", &existenciasUsuario);
    		    	
    		    	farmaco[i].existencias+=existenciasUsuario;
    		    }
        	}
        	printf("\n\n*****************************TABLA ACTUALIZADA**********************************");
            printf("\n-------------------------------------------------------------------------------\n");
    	    printf("|   PRODUCTO    | CODIGO DE PRODUCTO | NUMERO DE EXISTENCIAS | PRECIO UNITARIO |\n");
    	    for (i=0; i<8; i++) {
    		    printf("-------------------------------------------------------------------------------");
    		    printf("  %s            %d                  %d                  %.2f%c       \n", farmaco[i].nombre, farmaco[i].codigo, farmaco[i].existencias, farmaco[i].precio, 36);
    	    }
    	    printf("-------------------------------------------------------------------------------\n");
    		break;
    	case 5:
    		
    		printf("\n  Introduce el c%cdigo del producto: ", 162);
    		scanf("%d", &codigoUsuario);
    		
    		for(i=0;i<8;i++)
    		{
    			if(codigoUsuario==farmaco[i].codigo)
    			{
    				printf("  Unidades que desea vender: ");
    				scanf("%d", &existenciasUsuario);
    				
    				farmaco[i].existencias-=existenciasUsuario;
    				PrecioFinal=existenciasUsuario*farmaco[i].precio;
    				
    				printf("  El precio a abonar es de %.2f%c\n", PrecioFinal, 36);
				}
			}
			break;
    	case 6:
    		system("cls");
    		printf("\n  El almac%cn farmac%cutico Tr%cbol lleva en funcionamiento desde 1958 y es el\n", 130, 130, 130);
			printf("  primer almac%cn de Espa%ca que reparte medicamentos en m%cs 13800 establecimi-\n", 130, 164, 160);
			printf("  entos convierti%cndose en un almac%cn de cofianza en gran parte de las farma-\n", 130, 130);
			printf("  c%cuticas del pa%cs.", 130, 161);	
			break;	
		case 7:
    		system("cls");
    		printf("\n                           Ha salido del programa\n");
            break;	
    }
    }while(opcion1!=7);
   return 0;
}
int menu(int opcion){
	printf("\n                      %c%c%c%c%c MEN%c DE OPCIONES %c%c%c%c%c\n", 177, 177, 177, 177, 177, 233, 177, 177, 177, 177, 177);
	printf("\n                        1-Trabaja con nosotros\n");
	printf("                        2-Despedir personal\n");
	printf("                        3-Inventario\n");
	printf("                        4-Comprar productos\n");
	printf("                        5-Vender productos\n");
	printf("                        6-Con%ccenos\n", 162);
	printf("                        7-Salir del programa\n");
	
	scanf("%d", &opcion);
	
	return opcion;
}
void Banner(){
	printf("\n\n                *****  ******  ****** ******  ******  *\n");
	printf("                  *    *    *  *      *    *  *    *  *\n");
	printf("                  *    ******  ***    ******  *    *  *\n");
	printf("                  *    *    *  *      *    *  *    *  *\n");
	printf("                  *    *    *  ****** ******  ******  ******\n\n\n\n");
	
}
void AbrirFicheroMedicamentos(struct producto farmaco[], int farmacos){
	farmacos=0;
	FILE*pficheros;
	pficheros=fopen("fichero.txt", "r");
            
    if(pficheros==NULL){
        printf("Error al abrir el fihero");
	}		
    while (fscanf(pficheros, "%s %d %d %f", &farmaco[farmacos].nombre, &farmaco[farmacos].codigo, &farmaco[farmacos].existencias, &farmaco[farmacos].precio) != EOF){
		farmacos++;
	}
	fclose(pficheros);
	
}



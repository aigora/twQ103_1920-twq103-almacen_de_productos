//ALMACÉN DE PRODUCTOS
#include<stdio.h>
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

int main()
{
	int i, farmacos=0, opcion;
	int codigoUsuario=0, existenciasUsuario=0;
	float PrecioFinal=0.0f;
	char despedido[40];
	FILE*pfichero;
	struct producto farmaco[8];
	struct persona contratada;
	
	pfichero=fopen("fichero.txt", "r");
            
        if(pfichero==NULL){
            printf("Error al abrir el fihero");
            return 0;
		}
    		
    	while (fscanf(pfichero, "%s %d %d %f", &farmaco[farmacos].nombre, &farmaco[farmacos].codigo, &farmaco[farmacos].existencias, &farmaco[farmacos].precio) != EOF){
			farmacos++;
		}

	fclose(pfichero);

    do
	{ 
	system("color 4F");
	printf("\n                      %c%c%c%c%c MEN%c DE OPCIONES %c%c%c%c%c\n", 177, 177, 177, 177, 177, 233, 177, 177, 177, 177, 177);
	printf("\n                        1-Trabaja con nosotros\n");
	printf("                        2-Despedir personal\n");
	printf("                        3-Inventario\n");
	printf("                        4-Comprar productos\n");
	printf("                        5-Vender productos\n");
	printf("                        6-Con%ccenos\n", 162);
	printf("                        7-Salir del programa\n");
	
	scanf("%d", &opcion);
   
    switch (opcion)
    {
    	case 1:
    		system("cls");
    		printf("\n  Nombre: ");
    		scanf("%s", &contratada.nombre1);
    		printf("  Apellido: ");
    		scanf("%s", &contratada.apellido);
    		printf("  G%cnero: ", 130);
    		scanf("%s", &contratada.genero);
    		printf("  Edad: ");
    		scanf("%d", &contratada.edad);
    		printf("  Correo: ");
    		fflush(stdin);
    		gets(contratada.correo);
    		printf("  N%cmero de tel%cfono: ", 163, 162);
    		scanf("%d", &contratada.numero);
    		printf("\n  Gracias por su inter%cs, ya le llamaremos!\n", 130);
    		break;
    	case 2:
    		system("cls");
    		printf("\n  Nombre del personal a despedir: ");
    		scanf("%s", despedido);
    		printf("\n  Usted a despedido a %s\n", despedido);
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
    }
   while(opcion!=7);
}


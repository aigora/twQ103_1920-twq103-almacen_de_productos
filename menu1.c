//ALMACÉN DE PRODUCTOS
#include<stdio.h>
void main()
{
	//Prescindir de variables globales
	int opcion, numero, edad, unidades, codigo;
	float precioF;
	char nombre[40], apellido[40], correo[200], genero[20], despedido[40];

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
    		scanf("%s", nombre);
    		printf("  Apellido: ");
    		scanf("%s", apellido);
    		printf("  G%cnero: ", 130);
    		scanf("%s", genero);
    		printf("  Edad: ");
    		scanf("%d", &edad);
    		printf("  Correo: ");
    		fflush(stdin);
    		gets(correo);
    		printf("  N%cmero de tel%cfono: ", 163, 162);
    		scanf("%d", &numero);
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
    		printf("|   PRODUCTO   | CODIGO DE PRODUCTO | NUMERO DE EXISTENCIAS | PRECIO UNITARIO |\n");
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|  Farasemida  |        4382        |          1200         |       2,25%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|  Paracetamol |        5671        |           345         |       1,31%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|  Amoxicilina |        9346        |           873         |       2,86%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|   Omeprazol  |        8654        |           500         |       2,42%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|  Famotidina  |        1920        |           926         |       3,89%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|Colecalciferol|        7547        |          1001         |       5,33%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|   Walfarina  |        2100        |            27         |       8,72%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		printf("|   Ramipril   |        5825        |           614         |       4,84%c     |\n", 36);
    		printf("-------------------------------------------------------------------------------\n");
    		break;
    	case 4:
    		printf("\n  Introduce el c%cdigo del producto: ", 162);
    		scanf("%d", &codigo);
    		printf("  Introduce las unidades que desee: ");
    		scanf("%d", &unidades);
    		
    		switch (codigo)//Corregir-BUSCAR OTRA MANERA
    		{
    			case 4382:
    				precioF=unidades*2.25;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 5671:
    				precioF=unidades*1,31;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 9346:
    				precioF=unidades*2.86;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 8654:
    				precioF=unidades*2.42;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 1920:
    				precioF=unidades*3.89;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 7547:
    				precioF=unidades*5.33;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 2100:
    				precioF=unidades*8.72;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 5825:
    				precioF=unidades*4.84;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;	
				default:
				    printf("  No disponible");		
			}
    		break;
    	case 5:
    		printf("\n  Introduce el c%cdigo del producto: ", 162);
    		scanf("%d", &codigo);
    		printf("  Introduce las unidades a vender: ");
    		scanf("%d", &unidades);
    		
    		switch (codigo)//Corregir-BUSCAR OTRA MANERA
    		{
    			case 4382:
    				precioF=unidades*2.25;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 5671:
    				precioF=unidades*1,31;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 9346:
    				precioF=unidades*2.86;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 8654:
    				precioF=unidades*2.42;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 1920:
    				precioF=unidades*3.89;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 7547:
    				precioF=unidades*5.33;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 2100:
    				precioF=unidades*8.72;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;
    			case 5825:
    				precioF=unidades*4.84;
    			    printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);
    			    break;	
				default:
				    printf("  No disponible");		
			}
    		break;
    	/*	for(i=0;i<=7;i++)//Corregir
    		{
    			codigo[i]=precioU[i];
    		    precioF=unidades*codigo[i];
    	    }
    		printf("  Precio Total (IVA incluido): %.2f%c", precioF, 36);*/
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


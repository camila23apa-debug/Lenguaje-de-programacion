#include <stdio.h>
main()
{
   int calificaciones[50],n,i,suma=0 ;
   printf("Ingresar el número de calificaciones: "); 
     scanf("%d",&n);
   for(i=0;i<n;i++)
    {
      printf("Ingrese la calificación %d: ",i+1); 
	  scanf ("%d",&calificaciones[i]);
	  suma += calificaciones[i];
    }
   printf("\nLas calificaciones son: ");
   for(i=0;i<n;i++)
   printf("\n%d ", calificaciones[i]);
   printf("\nLA SUMA DE LAS CALIFICACIONES ES: %d ", suma);
   printf("\nEL PROMEDIO DE LAS CALIFICACIONES ES: %.2f ", (float)suma/n);
}


double potencia (double,double);
int op ();
double multiplicatoria(double numero [100]);
double sumatoria(double numero [100]);

int op(){
  int op;
  printf("\n\n\tBienvenido al sistema matematico de la uabc\n");
  printf("1) Elevar a la potencia\n");
  printf("2) Multiplicatoria\n");
  printf("3) Sumatoria\n");
  printf("4) Salir\n");
  printf("Ingrese que opcion desea utilizar....");
  scanf("%d",&op);
  printf("\n");
  return op;
}
double potencia (double,double){
  int x,y,r=1,i;
  printf("ingresa el valor de x\n");
  scanf("%d",&x);
  printf("ingresa el valor del exponente\n");
  scanf("%d",&y);
  for (i=1; i<=y; i++){
    r*=x;
  }
  printf("el resultado de elevar %d a la %des=%d",x,y,r);
  return 0;
}
double multiplicatoria(double numero [100]){
  int num;
  double multiplicacion=1;
  printf("ingrese la cantidad de numeros que desea multiplicar..\n");
  scanf("%d",&num);

  for(int i=0; i<num;i++){
  printf("Ingrese los numeros a multiplicar \n");
  scanf("%lf",&numero[i]);
    multiplicacion*=numero[i];  
  }
  printf("la multiplicacion es %.2lf",multiplicacion);
    
  return multiplicacion;
}

double sumatoria(double numero [100]){
int num;
  double sumatoria=0;
  printf("ingrese la cantidad de numeros que desea sumar..\n");
  scanf("%d",&num);

  for(int i=1; i<=num;i++){
  printf("Ingrese los numeros a sumar \n");
  scanf("%lf",&numero[i]);
    sumatoria+=numero[i];  
  }
  printf("la multiplicacion es %.2lf",sumatoria);
    
  return sumatoria;
}

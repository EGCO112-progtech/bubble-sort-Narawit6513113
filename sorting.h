// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n)
{
  int i,j;
  // how may pair to compare?
  for(i = 0 ; i < n-1 ; i++)
  {
    int sorted;
    printf("round %d\n",i+1);
    for(j = 0 ; j <= n-1 ; j++)
    {
      if (a[j] > a[j+1])
      {
        swap(&a[j] , &a[j+1]);
        sorted = 1;
      }
      display(a,n);
    }
    if (sorted == 0) break;
  } 
}

int Isprime(int z)
{
  int n, i, flag = 0;
  if (z == 0 || z == 1)
    flag = 1;

  for (i = 2; i <= z / 2; ++i) {

    if (z % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    return 1;
}




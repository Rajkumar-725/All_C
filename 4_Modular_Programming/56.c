//Write a user defined function to sum the series 1/1!+1/2!+1/3!....1/n!.
int fact(int n){
  if(n==1)
   return 1;  // Base condition
  else
    return n*fact(n-1); // Recursive definition {self calling}

}
int main()
{
    int n, result;
    printf("Enter number to find factorial");
    scanf("%d",&n);
    result = fact(n);

    
    printf("%d",result);
}


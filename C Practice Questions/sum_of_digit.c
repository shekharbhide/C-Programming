int main ()
{
    int n,rem, sum = 0;
 
    printf("Enter any num: ");
    scanf("%d",&n);   
 
    //loop to find sum of digits
    while(n>0)
    {
    	rem=n%10;
    	sum=sum+rem;
    	n=n/10;
   	}
    
  //output
    printf("Sum: %d",sum);
 
    return 0;

}

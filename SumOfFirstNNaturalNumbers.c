int main(int argc, char const *argv[])
{
    int num,sum=0;
    printf("Please Enter A Natural Number :");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        sum=sum+i;
    }
    printf("Sum Of First %d Natural Numbers Is : %d",num,sum);
    return 0;
}

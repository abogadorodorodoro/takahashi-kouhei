int main(void)
{
    int diff;
    char small; 
    char large; 
    
    printf("Tap a small alfabet");
    scanf("%c", &small);
    diff = 'a'-'A';
    large = small - diff;
    
    printf("Komoji is %c、Ohmoji%c\n", small, large);
    
    return 0;
}
int main(void)
{
    int k;
    printf("How many times have you lied so far?");
    scanf("%d", &k);
    if (k >= 1000)
    {printf("OMG");
    }
    else if (k< 999 && k>=100)
    {printf("Dirty Deeds Done Dirt Cheap");
    }
    else
    {printf("YOU SHALL NOT PASS!!");
    }
    int l;
    printf("BTW, People are said to go to hell when they lie.\n");
    printf("Do you tyou'll go to heaven? Do you think you'll go to hell?\n");
    printf("Choose 1 for heaven, 2 for hell.");
    scanf("%d", &l);
    if (l >= 3){
        printf("It is not included in the program.");
    }else if(l == 2){
        printf("You're an honest person. You'll surely have God's blessing.");
    }
    else
    {printf("AVADAKEDAVURA!");
    }
    
    return 0;
}
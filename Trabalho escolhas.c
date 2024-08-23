#include<stdio.h>

int main()
{

int compromisso, cidade, dinheiro , perto, chuva;

    printf("\nVoce vai ter compromisso? ( Digite 1 para 'sim' / Digite 2 para 'nao')");
    scanf(" %d", &compromisso);
    printf("Voce vai estar na cidade? ( Digite 1 para 'sim' / Digite 2 para 'nao')");
    scanf(" %d", &cidade);
    printf("Voce tem dinheiro?( Digite 1 para 'sim' / Digite 2 para 'nao')");
    scanf("%d",&dinheiro);
    printf(" O destino eh perto?( Digite 1 para 'sim' / Digite 2 para 'nao')");
    scanf("%d",&perto);
    printf ("Esta chovendo?( Digite 1 para 'sim' / Digite 2 para 'nao')");
    scanf("%d",&chuva);
    
    if ( (compromisso == 2 && cidade == 1 && dinheiro == 1 && chuva == 2)  || (compromisso == 2 && cidade == 1 && dinheiro == 2 && perto == 1))
    {
    
    printf("\nVoce vai ao passeio!");
    
    
    } 
    else
     {
    
    printf(" \nVoce NAO vai ao passeio!");
    
    
    }
    
     return 0;
}

//Meus testes

//ft_atoi
#include <string.h>
#include <stdlib.h>
int main()
{
  char str[20] = "913851297";
  unsigned int result, result2;

  result = ft_atoi(str);
  printf("Função criada  : %i\n", result);

  result2 = atoi(str);
  printf("Função original: %i\n", result2);
	return (0);
}

//void		ft_bzero(void *s, size_t n);
#include <stdio.h>
#include <string.h>
int main()
{
  char src[20] = "How Are you?";
  char dst[20] = "12345";

  // memcpy(dst,src,5);
  // printf("Usando a função da biblioteca: \nDST = %s\n\n", dst);
 // int resultado =  ft_bzero(dst, 2);

  printf("Usando a função criada: \nDST = %s\n", dst);
	printf("Tamanho: %d\n", resultado);
	return (0);
}

//int	isdigit(int c)
#include <stdio.h>
int main(void)
{
	char *ptr;
	int nr;
	
	ptr = "'";
	nr = ft_str_is_printable(ptr);
	printf("%d", nr);
	
	return (0);
}

//void *ft_memchr(const void *s, int c, size_t n);

int main(void){

	char	*vetor = "Mariana";
	char	letra = (char)105;
	int		p_inicio = (int)&*vetor; // & para pegar por refencia

  printf("Início: %d\n\n", p_inicio);

	int	result = (int)memchr(vetor, letra,5); 
	printf("Usando a função da biblioteca:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);

	result = (int)ft_memchr(vetor, letra,5);
	printf("Usando a função criada:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);
	return (0);
}


//
int main(void)
{
	int resultado = ft_memcmp("MAIANA", "MARIANA", 7);
	printf("Texto final: %d\n", resultado);
	return (0);	
}

//void ft_memcpy(void *dest, void *src, size_t n) 
int main()
{
  char src[20] = "Maaaia";
  char dst[20];

  memcpy(dst,src,5);
  printf("Usando a função da biblioteca: \nDST = %s\n\n", dst);
  ft_memcpy(dst,src,5);

  printf("Usando a função criada: \nDST = %s\n", dst);
	return (0);
}

//void *ft_memmove(void *dest, void *src, size_t n);

int main() 
{ 
  char vetor[100] = "TryTeste"; 

  // printf( "The string: %s\n", vetor);
  // memmove( vetor + 2, vetor, 4 );
  // printf( "New string: %s\n", vetor );

  ft_memmove(vetor+2, vetor, 4); 
  printf("Função: %s\n", vetor); 
  printf("Função: TrTryTte"); 
  return 0; 
} 

//char *ft_strchr(const char *str, int c);

int main(void){

	char	*vetor = "Mari";
	char	letra = (char)97;
//	int		p_inicio = (int)&*vetor; // & para pegar por refencia


	int	result = (int)strchr(vetor, letra); 
	printf("Usando a função da biblioteca:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);
  //printf("Início: %d\n", p_inicio);
	result = (int)ft_strchr(vetor, letra);
	printf("Usando a função criada:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);
	return (0);
}

//ft_strjoin
#include <stdio.h>
#include <string.h>
int main()
{
  char s1[] = "67890";
  char s2[] = "12345";

  // memcpy(dst,src,5);
  // printf("Usando a função da biblioteca: \nDST = %s\n\n", dst);
  char *resultado =  ft_strjoin(s2,s1);

  //printf("Usando a função criada: \nDST = %s\n", s2);
	printf("Tamanho: %s\n", resultado);
	return (0);
}

//int	ft_strlcat(char *dest, const char *src, int size)

#include <stdio.h>
#include <string.h>
int main()
{
  char src[20] = "How Are you?";
  char dst[20] = "Test";

  // memcpy(dst,src,5);
  // printf("Usando a função da biblioteca: \nDST = %s\n\n", dst);
  int resultado =  ft_strlcat(dst,src,9);

  printf("Usando a função criada: \nDST = %s\n", dst);
	printf("Tamanho: %d\n", resultado);
	return (0);
}


//int	ft_strlcpy(char *dest, const char *src, int size)
#include <stdio.h>
#include <string.h>
int main()
{
  char src[20] = "How Are you?";
  char dst[20];

  memcpy(dst,src,5);
  printf("Usando a função da biblioteca: \nDST = %s\n\n", dst);
  int resultado =  ft_strlcpy(dst,src,5);

  printf("Usando a função criada: \nDST = %s\n", dst);
	printf("Tamanho: %d\n", resultado);
	return (0);
}

// int	ft_strlen(char *str)
#include <stdio.h>

int            main(void)
{
    char string[30] = "quarentaedois";
    unsigned int length;
    
    length = ft_strlen(string);
    printf("length: %i\n", length);
}


//char *ft_strrchr(const char *str, int c);

int main(void){

	char	*vetor = "Meriana";
	char	letra = (char)97;
	int		p_inicio = (int)&*vetor; // & para pegar por refencia


	int	result = (int)strrchr(vetor, letra); 
	printf("Usando a função da biblioteca:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);
  printf("Início: %d\n", p_inicio);
	result = (int)ft_strrchr(vetor, letra);
	printf("Usando a função criada:\n A letra: %c, está na posição: %d do ponteiro\n", letra, result);
	return (0);
}

//strtrim

int main(void){
	char	*result =     ft_strtrim("ABCMaABCriABC", "ABC"); 
	printf("Resultado: %s\n", result);
    free(result);
	return (0);
}
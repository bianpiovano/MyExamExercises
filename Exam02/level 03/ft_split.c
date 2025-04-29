#include <stdlib.h>
#include <stdio.h>

void	free_array(char **array, int w)
{
	while (w >= 0)
		free(array[w--]);
	free(array);
}

char	**ft_split(char *str)
{
	int i;
	int j;
	int words;
	int w;
	char	**array;

	// Contar palabras
	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] > 32 && (i == 0 || str[i - 1] <= 32))
			words++;
		i++;
	}

	if (words == 0)
		return (NULL);

	// Reservar memoria para el array de palabras
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
	{
		return (NULL);
	}

	i = 0;
	w = 0;
	while (w < words)
	{
		// Saltar espacios
		while (str[i] && str[i] <= 32)
			i++;
		j = i;

		// Encontrar fin de palabra
		while (str[i] && str[i] > 32)
			i++;

		// Reservar memoria para la palabra
		array[w] = malloc(i - j + 1);
		if (!array[w])
		{
			free_array(array, w - 1);
			return (NULL);
		}

		// Copiar palabra
		int k = 0;
		while (j < i)
			array[w][k++] = str[j++];
		array[w][k] = '\0';
		w++;
	}
	array[words] = NULL;
	return (array);
}

int main()
{
	char **resultado = ft_split("  hola  mundo  42  ");
	int i = 0;

	// Verificar si `ft_split` devolvió algo
	if (!resultado)
	{
		return 1;
	}

	// Imprimir el resultado
	while (resultado[i])
	{
		printf("Palabra %d: %s\n", i, resultado[i]);
		free(resultado[i]);
		i++;
	}
	free(resultado);
	return 0;
}





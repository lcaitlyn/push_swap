#include <stdio.h>
#include <stdlib.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    return (s1[i] - s2[i]);
}

void    ft_check_argv(int ac, char **av)
{
    char    **av_p;
    int    i;

    i = 0;
    while (i < ac)
    {
        av_p = av + 1;
        while (*av_p)
        {
            if (!(ft_strcmp(*av, *av_p)))
                printf ("Exit!");
            av_p++;
        }
        i++;
        av++;
    }
}

int main()
{
  char **av;
  char **av_p;
  int ac;
  char *a = "hello";
  
  av = malloc (6 * sizeof (char *));
  av_p = av;
  ac = 0;
  while (ac != 5)
  {
    *av++ = a;
    ac++;
  }
  *av = NULL;
  ft_check_argv(ac, av_p);
}

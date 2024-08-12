 #include <unistd.h>
 
 void    ft_print_comb(void)
 {
     char    num[3];
     char    sep[2];
 
     num[0] = '0';
     sep[0] = ',';
     sep[1] = ' ';
     while (num[0] <= '7')
     {
         num[1] = num[0] + 1;
         while (num[1] <= '8')
         {
             num[2] = num[1] + 1;
             while (num[2] <= '9')
             {
                 write(1, &num, 3);
                 if (num[0] != '7')
                     write(1, &sep, 2);
                 num[2]++;
             }
             num[1]++;
         }
         num[0]++;
     }
 }

int main(void)
{

    ft_print_comb();
    return 0;
}

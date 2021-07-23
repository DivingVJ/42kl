/* Divides 2 ints and stores resolt in *div and remainder in *mod */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

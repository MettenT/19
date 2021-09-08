int		main(void)
{
	char src[] = "Source string.";
	char dest[] = "Destination string.";
	unsigned int n;

	n = 25;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
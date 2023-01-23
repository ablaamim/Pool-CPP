#include "iter.hpp"

static void	separator( void )
{
	std::cout << "\033[1;31m-- -- -- -- -- -- -- -- -- -- -- -- -- --\033[0m";
	std::cout << std::endl;
}

void	typeLetter( char const &letter )
{
	std::string vowels = "aAeEiIoOuUyY";

	if (vowels.find(letter) != std::string::npos)
		std::cout << letter << " is a vowel" << std::endl;
	else
		std::cout << letter << " is a consonant" << std::endl;
}

void	isPrime( int const &n )
{
	bool isPrime = true;

	if (n == 0 || n == 1)
		isPrime = false;
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
			{
				isPrime = false;
                break;
			}
		}
	}
	if (isPrime)
        std::cout << n << " is a prime number" << std::endl;
    else
        std::cout << n << " is not a prime number" << std::endl;
}


void rot13(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] -= 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] -= 13;
	}
	std::cout << str << std::endl;
}

void decodeRot13(std::string str)
{
	for (unsigned long i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] -= 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] -= 13;
	}
	std::cout << str << std::endl;
}

int main()
{
   separator();
	{
		char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
						'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
						'W', 'X', 'Y', 'Z'};	
		iter(letters, 26, typeLetter);
	}
	separator();
    {
		int array[10] = {7, 9, 11, 13, 15, 23, 27, 29, 37, 39};
	
		iter(array, 10, isPrime);
	}
    separator();
	{
		std::string str = "1337 is fun !";
		rot13(str);
	}
	separator();
	{
		std::string str = "1337 vf sha !";
		decodeRot13(str);
	}
	separator();
    return (0);
}
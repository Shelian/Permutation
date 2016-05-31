#ifndef Permutation
#define Permutation


void Permutation(char* pstr)
{
	if (pstr == NULL)
		return;

	Permutation(pstr, pstr);
}

void Permutation(char *pstr, char*pBegin)
{
	if (*pBegin == '\0')
		printf("%s\n", pstr);

	else
	{
		for (char* pCh = pBegin; *pCh != '\0'; ++pCh)
		{
			swap(*pCh, *pBegin);
			Permutation(pstr, pBegin+1);
			swap(*pCh, *pBegin);
		}
	}
}


#endif //Permutation
#include <iostream>

using namespace std;

string song[] = {
	"Happy", "birthday", "to", "you",
	"Happy", "birthday", "to", "you",
	"Happy", "birthday", "to", "Rujia",
	"Happy", "birthday", "to", "you"
};

int LEN_SONG = 16;

int main()
{
	string names[105];
	int n, i, j, song_repeat;

	cin >> n;

	for(i=0; i<n; i++)
	{
		cin >> names[i];
	}

	song_repeat = n / LEN_SONG;

	if (n % LEN_SONG != 0)
		song_repeat = song_repeat + 1;

	j = 0;
	for(i=0; i < (song_repeat*LEN_SONG); i++)
	{
		cout << names[j] << ": " << song[i%LEN_SONG] << endl;

		j++;

		if(j == n)
			j = 0;
	}

	return 0;
}

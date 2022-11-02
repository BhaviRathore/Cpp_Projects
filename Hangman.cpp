#include <iostream>
using namespace std;

int main()
{
    string word;
    char guess;
    cout << "Enter movie please (don't use caps)" << endl;
    getline (cin, word);
    for (int q = 0; q < 10; q++)
    {
        cout << "\n \n \n";
    }
    int len = word.length();
    char movieName[len] ;
    // this loop copies word to moviename

     for (int i = 0; i < len ;i++)
        {
                movieName[i] = word.at(i);
                if (word.at(i) == ' ')
                    movieName[i] = '/';
        }

    char guessed_letters[len];
    for (int i = 0; i < len; i++)
    {
        if (word.at(i)==' ')
            guessed_letters[i] = '/';
        else if (word.at(i) == 'a' || word.at(i) == 'e' || word.at(i) == 'i' || word.at(i) == 'o' || word.at(i) == 'u')
            guessed_letters[i] = '*';
        else
            guessed_letters[i] = '_';

    }
    for (int j = 0; j < len; j++)
    {
        cout << guessed_letters[j] << " ";
    }
    cout << endl;
    int x = 7;
    while (x > 0)
    {
        cout <<"enter guess letter: ";
        cin >> guess;
        cout << endl;
        for (int i = 0; i < len ;i++)
        {
            if (word.at(i) == guess)
            {
                guessed_letters[i] = guess;
            }
        }
        for (int j = 0; j < len; j++)
        {
            cout << guessed_letters[j] << " ";
        }

        char check[len];
        // initialising check to moviename
        for (int i = 0; i < len ;i++)
        {
                check[i] = movieName[i];
        }

         int count_2 = 0;

        for (int p = 0; p < len; p++)
        {
            if (check[p] == guessed_letters[p])
                count_2++;

        }
        if (count_2 == len)
        {
            x--;
            cout << "You have " << x << "chances left" << endl;
            break;
        }

        int count = 0;

        //This loop compares moviename and guessed letters
        for (int p = 0; p < len; p++)
        {
            if (movieName[p] == guessed_letters[p])
                count++;

        }
        if (count == len)
        {
            cout << endl << "Win!";
            break;
        }

    }
    return 0;
}

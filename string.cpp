#include <iostream>   
using namespace std;  

int main()
{
    
    char sentence[200], toFind[50], toReplace[50], result[300];  
    int i = 0, j = 0, k = 0, found = 0;  

    
    cout << "Enter the main sentence: ";
    cin.getline(sentence, 200);


    cout << "Enter the word or phrase to find: ";
    cin.getline(toFind, 50);


    cout << "Enter the replacement word or phrase: ";
    cin.getline(toReplace, 50);


    while (sentence[i] != '\0')
  {
        int match = 1;
        int temp = i;   
        int I = 0;      // index for toFind

        // Check if toFind matches at position i
        while (toFind[I] != '\0')
        {
            if (sentence[temp] != toFind[I]) // If any character mismatches
            {
                match = 0; // Not a match
                break;
            }
            temp++; // move in sentence
            I++;    // move in toFind
        }

        // If word/phrase matched
        if (match)
        {
            I = 0; // reset index for toReplace

            // Copy replacement word/phrase into result
            while (toReplace[I] != '\0')
            {
                result[k++] = toReplace[I++];
            }

            i = temp;  // Skip over the matched word in original sentence
            found = 1; // Mark that at least one replacement occurred
        }
        else
        {
            // If no match, copy original character to result
            result[k++] = sentence[i++];
        }
    }

    // Add null terminator to result string
    result[k] = '\0';

    // If replacement was done, print updated sentence
    if (found)
        cout << "\nUpdated sentence: " << result << endl;
    else
        // If no match was found
        cout << "\nThe word or phrase was not found in the sentence." << endl;

    return 0; // End of program
}

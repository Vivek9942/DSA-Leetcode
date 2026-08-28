class Solution {
public:
    int maxFreqSum(string s) {

        int freq1[26] = {0};  // frequency of vowels
        int freq2[26] = {0};  // frequency of consonants

        // Count frequencies
        for(int i = 0; i < s.length(); i++) {

            char ch = s[i];

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                freq1[ch - 'a']++;
            }
            else {
                freq2[ch - 'a']++;
            }
        }

        int vowel = 0;
        int consonant = 0;

        // Find maximum frequency among vowels and consonants
        for(int i = 0; i < 26; i++) {
            vowel = max(vowel, freq1[i]);
            consonant = max(consonant, freq2[i]);
        }

        return vowel + consonant;
    }
};
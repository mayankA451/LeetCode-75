class Solution {
public:
    
    bool Vowel(char ch)
    {
        if(ch=='a' || ch =='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string reverseVowels(string s) {
        int n = s.length();
        int i=0, j=n-1;
        while(i<j)
        {
            if(Vowel(s[i]) && Vowel(s[j]))
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(Vowel(s[i])!= 1)
            {
                i++;
            }
            else if(Vowel(s[j])!=1)
            {
                j--;
            }
        }
        return s;
    }
};
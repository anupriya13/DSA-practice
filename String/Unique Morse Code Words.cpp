class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        string code[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        int n = words.size();
        
        for(int i = 0; i < n; i++)
        {
            string t = "";
            for(int j = 0; j < words[i].size(); j++)
            {
                t += code[int(words[i][j] - 'a')];
            }
            s.insert(t);
        }
        
        return s.size();
        
    }
};

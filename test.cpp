class Solution {
public:
bool isMatch(string s, string p) {
    char *si=&s[0];
    char *pi=&p[0];
        char* star=NULL;
        char* ss=si;
        while (*si){
            if ((*pi=='?')||(*pi==*si))
            {
                si++;
                pi++;
                continue;
            } 

            if (*pi=='*')
            {
                star=pi++; 
                ss=si;
                continue;
            } 

            if (star)
            { 
                pi = star+1; 
                si=++ss;
                continue;
            } 

            return false;
        }

        while (*pi=='*'){pi++;}

        return !*pi;  
    }
};

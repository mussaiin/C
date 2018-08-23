long long pr(string k){
 long long l=0, i;
 for(i=0; i<k.length(); i++)
 {
     l*=10;
     l+=k[i]-'0';
 }
 return l;	
}
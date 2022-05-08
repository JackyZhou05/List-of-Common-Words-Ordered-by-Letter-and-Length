#include <bits/stdc++.h>
using namespace std;
string s[25500],a;
int i=0;
int z,l;
char lett;
int main(){
    fstream f2,f3,f4,f5,f6,f7,f8,f9,fa,fb,fc,fd,fe,ff,fi;
    fi.open("popular.txt", fstream::in);

    f2.open("z2.txt", fstream::out);
    f3.open("z3.txt", fstream::out);
    f4.open("z4.txt", fstream::out);
    f5.open("z5.txt", fstream::out);
    f6.open("z6.txt", fstream::out);
    f7.open("z7.txt", fstream::out);
    f8.open("z8.txt", fstream::out);
    f9.open("z9.txt", fstream::out);
    fa.open("z10.txt", fstream::out);
    fb.open("z11.txt", fstream::out);
    fc.open("z12.txt", fstream::out);
    fd.open("z13.txt", fstream::out);
    fe.open("z14.txt", fstream::out);
    ff.open("z15.txt", fstream::out);
	lett = 'z';

    for (i=0;i<25321;i++){
		fi>>s[i];
	}

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==2){
        f2<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==3){
        f3<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==4){
        f4<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==5){
        f5<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==6){
        f6<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==7){
        f7<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==8){
        f8<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==9){
        f9<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==10){
        fa<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==11){
        fb<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==12){
        fc<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==13){
        fd<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==14){
        fe<<s[i]<<endl;
        }
    }

    for (i=0;i<25321;i++)
    {
        if (s[i][0]==lett && s[i].length()==15){
        ff<<s[i]<<endl;
        }
    }

	return 0;
}

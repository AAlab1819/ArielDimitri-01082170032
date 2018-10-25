
for 946A

so the first line contains one integer - the number of elements in a
    cin>>n; (input n)

    int b=0,c=0;

then, there is second line which contains n integers a1,a2,..an, the elements of sequence a
    for(i=0;i<n;i++)
    {
        cin>>m; 

        if(m<0)
            c+=m;
        else
            b+=m;
    }

    cout<<(b-c); then we can calculate b-c, it is actually have a reason.
if m<0, the integers must be negative, so if we calculate b-c, b is equal with 0, then it can go to positive.

    return 0;
}
}


for 978B

so the first thing is, we input the first integer n, it is the length of file name.
	int i;
	int n,m;
	string s;

	cin>>n;
the second line is a string, consisting of lowercase Latin letters only.
	cin>>s;

	m=0;
	for(i=0;i<n;i++)
    {
        if(i+2<=n-1)
this is to read how many possibilities of xxx can show up.
        {
            if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            {
                m++;
            }
        }
    }

    cout<<m;
it is the minimum number of characters to remove from the file name, and the output will be 0, if there is no xxx.

return 0;
}

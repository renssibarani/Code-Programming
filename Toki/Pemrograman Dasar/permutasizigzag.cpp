#include<iostream>
using namespace std;

int catat[10],N;
bool pernah[10],cek;

int ceking()
{
    for(int i=1;i<N-1;i++)
    {
        if ((catat[i]>catat[i-1]&&catat[i]>catat[i+1])||(catat[i]<catat[i-1] && catat[i]<catat[i+1]))
        {
            cek=true;
        }
        else
        {
            cek=false;
            break;
        }
    }
    return cek;
}
void tulis(int kedalaman)
{
    if(N<=2 && kedalaman==N)
    {
        for(int i=0;i<N;i++)
        {
            cout<<catat[i];
        }
        cout<<endl;
    }
    else if(N>=3 && kedalaman==N)
    {
        cek=ceking();
        if(cek)
        {
            for(int i=0;i<N;i++)
            {
                cout<<catat[i];
            }
            cout<<endl;
        }
    }
    else
    {
    	for(int i=1;i<=N;i++)
    	{
    		if(!pernah[i])
    		{
    			pernah[i]=true;
    			catat[kedalaman]=i;
    			tulis(kedalaman+1);
    			pernah[i]=false;
    		}
    	}
    }
}

int main()
{
    cin>>N;
    tulis(0);
}

#include <iostream>

using namespace std;

int N, K;
int save[1001];
bool kond[1001];
bool betul;
void kombinasi(int level){
    if (K == 1)
    {
        if (level > K)
        {
            for (int j = 1; j <= K; j++)
            {
                cout << save[j];
            }
            cout << endl;
            
        }else
        {
            for (int j = 1; j <= N; j++)
            {
                if (!kond[j])
                {
                    kond[j] = true;
                    save[level] = j;
                    kombinasi(level+1);
                    kond[j] = false;
                }
            }
        }
    }else
    {
        if (level > K)
        {
            for (int i = 1; i < K; i++)
            {
                if (save[i] < save[i+1])
                {
                    betul = true;
                }else
                {
                    betul = false;
                    break;
                }
            }
            if (betul)
            {
                for (int i = 1; i <= K; i++)
                {
                    cout << save[i];
                    if (i != K)
                    {
                        cout << " ";
                    }
                    
                }
            cout << endl;
            }
        }else
        {
            for (int i = 1; i <= N; i++)
            {
                if (!kond[i])
                {
                    kond[i] = true;
                    save[level] = i;
                    kombinasi(level+1);
                    kond[i] = false;
                }
            }
        }
    }
}

int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        kond[i] = false;
    }
    kombinasi(1);
    
    return 0;
}

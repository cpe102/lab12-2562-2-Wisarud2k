#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "\nInput your brush size and location:";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 && x != 0 && y != 0 );
             return 0;    
}

// Write definition of updateImage() and showImage() here
void updateImage(bool img[][M],int s,int x,int y){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(sqrt(pow(i-x,2)+(pow(j-y,2)))<=s-1){
                img[i][j]=1;
            }
        }

    }
}

void showImage(const bool img[][M]){
    for(int i=0;i<M;i++){
        cout << "_";
    }cout << "\n";
    for(int i=0;i<N;i++){
        cout << "|";
        for(int j=0;j<M;j++){
            if(img[i][j]==1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "|";
        cout << "\n";
        
    }
    for(int i=0;i<M;i++){
        cout << "_";
    }
}

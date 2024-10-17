#include<iostream>
using namespace std;
int main(){
    string question[]={"1. When was House of Balloons Released?",
                       "2. What is the most streamed song of all time?",
                       "3. How many songs of the weeknd have over 1 billion streams on spotify?",
                       "4. How many mixtapes does the weeknd have?"};

    string options[][4]={{"A. 2013", "B. 2011", "C. 2010", "D. 2009"},
                         {"A. Starboy", "B. Shape of You", "C. Despacito", "D. Blinding Lights"},
                         {"A. 18", "B. 20", "C. 5", "D. 12"},
                         {"A. 1","B. 9","C. 3","D. 7"}};
    char anskey[]={'B', 'D', 'B', 'C'};
    int size = sizeof(question)/sizeof(string);
    char guess;
    double score=0;
    for(int i=0;i<size;i++){
        cout<<question[i]<<'\n';
        for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]); j++){cout<<options[i][j]<<'\n';}
        cin>>guess;
        guess=toupper(guess);
        if(guess==anskey[i]){cout<<"Correct!!\n";
        score++;}
        else{cout<<"Wrong!!!!\n";
        cout<<"Correct Answer:"<<anskey[i]<<'\n';}
        

    }


    cout<<"Results:\n";
    cout<<"Correct Answers: "<<score<<'\n';
    cout<<"Score: "<<(score)/(size)*100<<"%";

    
    return 0;
}
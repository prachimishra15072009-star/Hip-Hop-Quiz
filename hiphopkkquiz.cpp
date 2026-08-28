#include <iostream>
#include <string>
using namespace std;

int hiphopQuiz();

int main() {
    char login;
    string name;

    cout<<
    "================================================\n";
    cout<<"WELCOME TO HIPHOP QUIZ\n";
    cout<<"    [LOGIN]\n";
    cout<<" Press p to login:";
    cin>>login;
    if (login == 'p' || login == 'P') {
        cout<<
        "\n================================================\n";

    cout<<"ENTER NAME : ";
    cin>>name; 
    cin.ignore(); // clears the leftover newline from the input buffer
    
    cout<<"\nWelcome,"<<name<<"!\n";
    cout<<"Lets begin the HIPHOP QUIZ!\n\n";
    cout<<"Press q to start the quiz:";
    
    char start;
    cin>>start;

    if (start == 'q' || start == 'Q') {
        while (true) {
            int finalResult = hiphopQuiz();
            cout << "Your score is " << finalResult << endl;

            if (finalResult >= 10) {
                cout << "************************HURRAY!!!! you passed the quiz!*********************" << endl;
            } else {
                cout << "You failed the quiz." << endl;
            }

            char playagain;
            cout << "Do you want to play hiphop quiz again? (y/n): ";
            cin >> playagain;
            if (playagain != 'y' && playagain != 'Y') {
                cout << "Thanks for playing the HIPHOPQUIZ!!!!!!!!!!!!!!!!!" << endl;
                break;
            }
        }
    } else {
        cout << "Invalid start option" << endl;
    }
    } else {
        cout << "Invalid login" << endl;
    }
    return 0;
}

int level;

int hiphopQuiz(){
    char option;
    int score = 0;
    cout<<"----------Hiphop quiz----------"<<endl;
    cout<<"----------please follow the instructions----------"<<endl;
    cout<<"Step 1: Quiz contents total 15 questions"<<endl;
    cout<<"step 2: each question has 4 options"<<endl;
    cout<<"step 3: you will be given 1 marks for each right ans "<<endl;
    cout<<"step 4:There will be no negative marking"<<endl;
    cout<<"step 5: Quiz is starting press s again for questions to appear on screen....."<<endl;
    cout<<"step 6: Please select option a, b, c, d"<<endl;
    cout<<"step 7:if you score >=10 , you will pass the quiz"<<endl;
    char c;
    cin>>c;
    if(c=='s' || c=='S'){
        cout<<"Q1. who is the winner of hustle season 4 "<<endl;
        cout<<"(a)Paradox (b)MC square (c)shrusti (d)lashcurry"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score = score + 1;
        } 
        
        cout<<"Q2. MCing(Rapping) stands for "<<endl;
        cout<<"(a)Master of Ceremonies (b)Master controller (c)Microphone controller (d)both a and c"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score = score + 1;
        } 
        
        cout<<"Q3. B - boying often features "<<endl;
        cout<<"(a)footwork (b)all (c)power moves (d)freezes"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score = score + 1;
        }


        cout<<"Q4. who is the youngest hustler ever on the stage of mtv hustle "<<endl;
        cout<<"(a)Paradox (b)MC square (c)shrusti  (d)lashcurry"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
 
        cout<<"Q5. who is the winner of hustle season 5 , till date 18 august 2026"<<endl;
        cout<<"(a)no one for now (b)MC square (c)namsoojal (d)lashcurry"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q6. what is a flow "<<endl;
        cout<<"(a)don't know (b)rythmic cadence (c)rythming phrase (d)double meaning"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }


        cout<<"Q7. who is the winner of hustle season 2 "<<endl;
        cout<<"(a)Paradox (b)MC square (c)shrusti (d)lashcurry"<<endl;
        cin >>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        } 

        cout<<"Q8. who is the chhota don of hustle  "<<endl;
        cout<<"(a)Paradox (b)MC square (c)shrusti (d)lashcurry"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q9.what is the work of a Hype Man   "<<endl;
        cout<<"(a)echoing punchlines (b)energizing (c)backing rhymes (d)all "<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score=score+1;
        }
        else{
            score=score+0;
        }


        cout<<"Q10. what is the signature of hustle season 5 MC Square squad "<<endl;
        cout<<"(a)lathi (b)band (c)scarf (d)mc square"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

        cout<<"Q11. who is the youngest squad leader ever on hustle  "<<endl;
        cout<<"(a)Paraadox (b)prodox (c)paradox (d)paradax"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        } 

        cout<<"Q12. what is the sign of appreciation on hustle badshah "<<endl;
        cout<<"(a)wiper (b)banger (c)playlist (d)praises"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }

         cout<<"Q13.In a rap a triplet means"<<endl;
        cout<<"(a)The Migos Flow (b)triple rhyme (c) The Pocket Flows (d)all"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        cout<<"Q14. who is the winner of hustle season 3 "<<endl;
        cout<<"(a)M-Zee Bella (b)MC square (c)uday (d)lashcurry"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        
        cout<<"Q15. who is the winner of hustle season 1 "<<endl;
        cout<<"(a)paradox (b)deepak singh (c)epr (d)veer singh"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score=score+1;
        }
        else{
            score=score+0;
        }
        return score;
    }
    else{
        cout<<"You have enterd wrong value, please enter s"<<endl;
        return hiphopQuiz();
    }
    return 0;
}




#include <iostream>

using namespace std;

int count = 0, correct = 0, wrong = 0, attempts = 0;
string inp, a = "STOP",ans;
string list[7] = {"What planet are we on?","What tool helps us to see other planets from the Earth?","Who was the first human in Space?", "What rocket/mission was the first one to land on the moon?", "What device helps us monitor Earths' weather?","What system is our planet a part of?","What galaxy is our planet part of?"};
string ans_[7] = {"Earth","Telescope","Yuri Gagarin", "Apollo 11", "Satellites","Solar System","Milky Way"};
string cor[4] = {"Great work", "Nice Job!","Keep going!","Awesome"};
string wro[4] = {"Keep trying!","Try again!","Nope","Wrong!"};
string fun[5] = {"Space is completely silent.", "Hottest planet in our solar system is 450 Celsius.", "A full space suit costs $12,000,000.", "One million Earths can fit inside the Sun." , "The sunset on Mars is blue."};


int main() {
    cout << "Welcome to our Hackathon Project!\n" << "Developed by Mohammed Muneeb and Nirav Patel \n" << "\nOptions to explore\n" << "\nA: What is the Universe?" << endl;
    cout << "B: Our place in Space\n" << "C: Significant Achievements\n" << "D: Interesting facts\n" << "E: How far are we from each planet\n" << "F: Test yourself\n";
    inp = " ";

    do{
    cout << "\nInput a number accordingly to explore (Enter 'STOP' to end session): ";
    cin >> inp;
    
    
    if (inp == "STOP"){
        cout << "\nSession was ended. Thank you for using this tool!";
        break;
    }
    else if (inp == "A") {
        cout << "The universe is the vast expanse of space that contains all matter, energy, and phenomena, including all galaxies, stars, planets, and other celestial bodies. It is believed to have originated with the Big Bang, a massive explosion that occurred around 13.8 billion years ago, which created all matter and energy in the universe. \n" ;
    }

    else if (inp == "B") {
        cout << "Earth is located in the Milky Way galaxy, which is a barred spiral galaxy. Specifically, Earth is located in the Orion Arm, which is a spiral arm of the Milky Way. The Orion Arm is named after the constellation Orion, which is visible in the night sky from Earth.The Milky Way galaxy is estimated to be about 100,000 light-years in diameter and contains hundreds of billions of stars. Earth is located about 25,000 light-years away from the center of the galaxy. In addition to the Milky Way, Earth is part of a larger structure known as the Local Group, which is a small cluster of galaxies that includes the Milky Way, the Andromeda Galaxy, and several other smaller galaxies. The Local Group is part of an even larger structure known as the Virgo Supercluster, which contains thousands of galaxies. \n";
    }

    else if (inp == "C") {
        cout <<"Significant Space Achievements include: \n 1:The first satellite launched into space by the Soviet Union: Sputnik 1\n 2: The first human to go to space is Yuri Gagarin \n 3: Apollo 11 crew members Neil Armstrong and Buzz Aldrin were the first humans to land on the moon \n 4: Orbiting satellites also have provided, and continue to provide, important services to the everyday life of many people on Earth \n 5: Meteorologic satellites deliver information on short- and long-term weather patterns and their underlying causes\n 6: Telecommunications satellites allow essentially instantaneous transfer of voice, images, and data on a global basis \n 7: Satellites operated by the United States, Russia, China, Japan, India, and Europe give precision navigation, positioning, and timing information that has become essential to many terrestrial users \n 8: Several other useful tools  Space still remains an unkown territory and humans are still making the efforts to explore space   \n";
        
        
    }

    else if (inp == "D") {
        int srand(time(0));
        int rand_ = rand() % 4;
        cout << fun[rand_] << endl;
    }

    else if (inp == "E") {
        cout<< " Sun: 149.6 million kilometers \n Mercury: 77 million kilometers \n Venus: 261 million kilometers \n Mars: 76 million kilometers \n Jupiter: 628 million kilometers \n Saturn: 1.3 billion kilometers \n Uranus: 2.7 billion kilometers \n Neptune: 4.3 billion kilometers \n ";
    }

    else if (inp == "F") {
        cout << "Get ready to answer questions (One word answers and case sensitive so please capitalize answers) \n ";
        for(int i = 0; i != 7 ; i++) {
            cout << list[i] << endl;
            ans = " ";
            do{
                getline(cin, ans);
                int srand(time(0));
                int rand_ = rand() % 3;

               if(ans == ans_[i]){
                cout << cor[rand_] << endl;
                correct += 1;
                attempts += 1;
                break;
               }

               cout << wro[rand_] << endl;
               attempts += 1;
               wrong += 1;
            }while(ans != ans_[i]);
            
        }

        cout << "\nThank you for taking this short quiz!\n" << "Total Attempts: " << attempts << "\nCorrect: " << correct << "\nWrong: " << wrong << endl; 
        
    }


    }while(inp != "STOP");

}
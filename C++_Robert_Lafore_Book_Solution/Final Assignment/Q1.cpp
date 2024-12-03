#include <iostream>
#include <string>
using namespace std;

class Candidate{
private:
    string name;
    int votes;

public:
    
    Candidate(string candidateName) {
    	name=candidateName;
		votes=0;
	}
	
    
    string getName(){
        return name;
    }

    int getVotes(){
        return votes;
    }

    void castVote() {
        votes++;
    }
};

int main() {
    
	Candidate candidate1("Candidate A");
    Candidate candidate2("Candidate B");

    int totalVotes;

    cout << "Enter the total number of votes: ";
    cin >> totalVotes;

    for (int i = 0; i < totalVotes; ++i) {
        char voteChoice;
        cout << "Vote #" << i + 1 << ": Enter A for " << candidate1.getName() << " or B for " << candidate2.getName() << ": ";
        cin >> voteChoice;

		switch(voteChoice){
			case 'A':
			case 'a': 
					candidate1.castVote();
					break;	
			
			case 'B':
			case 'b':	
					candidate2.castVote();
					break;
			default: 		
				 std::cout << "Invalid vote choice. Please enter 1 or 2.\n";
	        	 --i; 
		}
    }

    if (candidate1.getVotes() > candidate2.getVotes()) {
        cout << candidate1.getName() << " is the winner with " << candidate1.getVotes() << " votes!\n";
    } else if (candidate2.getVotes() > candidate1.getVotes()) {
        cout << candidate2.getName() << " is the winner with " << candidate2.getVotes() << " votes!\n";
    } else {
        cout << "It's a tie! Both candidates have " << candidate1.getVotes() << " votes.\n";
    }

    return 0;
}
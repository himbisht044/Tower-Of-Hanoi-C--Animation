/* little code for tower of hanoi--> created by: 
  ####      #    #    #   #####  #    #
 #          #    ##   #     #    #    #
  ####      #    # #  #     #    ######
      #     #    #  # #     #    #    #
 #    #     #    #   ##     #    #    #
  ####      #    #    #     #    #    #
 find the sample animation created on Blender here: tech.woodcutters.org
*/

#include <bits/stdc++.h>
using namespace std;

int nDisk; //number of disks to shift

/*toh is a recurrsive function with char 'from' (tower name from where we want to shift)
  'to' (tower name to where we want to shift) and 'aux' (the tower which will help us to do so.
*/
int toh(int disk, char from, char to, char aux){
	if(disk==0){
		cout<<"move upper disk from "<<from<<" to "<<to<<endl; 

	}
	else{

		toh(disk-1, from, aux, to);
		
		cout<<"move disk from "<<from<<" to "<<to<<endl;
		
		toh(disk-1,aux, to, from);
	}
}

//main function with the initial call to toh function with three initial towers A, B, and C
int main(){

	cout<<"enter total number of disks\n";
	cin>>nDisk;
	toh(nDisk-1, 'A','C','B');
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int orderNum;
	string yourName;
	int quantity;
	cout<< "|---------------------------------| \n";
	cout<< "|         SANDY SANDWITCH         |  \n";
	cout<< "|_________________________________|\n\n ";
	cout << "Your Name: ";
	getline (cin, yourName);
	cout<< "Hello " << yourName;
	cout << "     \nMENU\n";
	cout << "1.EGG ROLL\n";
	cout << "2.CHILLI CHICKEN\n";
	cout << "3.FRIED RICE\n";
	cout << "4.SWEETS\n";
	cout << "5.SNACKS\n";
	cout << "6.BIRIYANI\n";

	cout << "Your order Num: ";
	cin >> orderNum;
	cout << "Quantity : ";
	cin >> quantity;
		if(orderNum<=5){
								cout <<"Your Order Is Getting Ready\n";
								
							}else {
								cout <<"No Stock";
							}
	switch (orderNum) {
		case 1:
			cout << "EGG ROLL";
			break;
			case 2:
				cout << "CHILLI CHICKEN";
				break;
				case 3:
					cout << "FRIED RICE";
					break;
					case 4:
						cout << "SWEETS";
						break;
						case 5:
							cout << "SNACKS";
							break;
						
			
						
	}
}

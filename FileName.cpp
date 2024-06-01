#include <iostream>
#include <cmath>
#include <string>

void Location_List() {

	std::string locations[10] = { "1. Thokar Niazbaigh", "2. Mall Road", "3. GPO","4. Dubai Town", "5. U.E.T", "6. Railway Station", "7. Ali Town", "8. Harbanspura", "9. Samanabad", "10. Wahdat Road" };
	std::cout << std::endl << "==================================================" << std::endl;
	std::cout << std::endl << "Enter location (Enter number only): " << std::endl << std::endl;

	for (int i = 0; i < 10; i++) {

		std::cout << "||     " << locations[i] << std::endl;

	}
	std::cout << std::endl << "==================================================" << std::endl;

}

void cash(int a, int b) {

	char q;
	std::cout << "Do you have any other people sharing the room with you? (y/n): " << std::endl;
	std::cin >> q;

	if (q == 'y' || q == 'Y') {

		std::cout << "Enter the number of people: ";
		std::cin >> a;

		if (a > 1) {
			b = b / a;
			std::cout << std::endl << "Each person will pay: " << b << "/month" << std::endl;
		}
		else {
			std::cout << "You will pay " << b << "/month" << std::endl;
		}

	}
	else {
		std::cout << "Your total payment will be " << b << "/ month" << std::endl;
	}

}

void Receipt(std::string name, std::string fname, std::string cnic, std::string func, std::string date_of_birth, std::string nation, std::string relig, std::string perm_address, std::string curr_address, std::string email, std::string phone, std::string emer_phone, double balance, int money) {

	std::cout << std::endl << std::endl << "Here is your Receipt:\n" << std::endl;
	std::cout << "=============================================================================" << std::endl << std::endl;
	std::cout << "//     Name: " << name << std::endl;
	std::cout << "//     Father's Name: " << fname << std::endl;
	std::cout << "//     CNIC: " << cnic << std::endl;
	std::cout << "//     Job/Program: " << func << std::endl;
	std::cout << "//     Date of Birth: " << date_of_birth << std::endl;
	std::cout << "//     Nationality: " << nation << std::endl;
	std::cout << "//     Religion: " << relig << std::endl;
	std::cout << "//     Permanent Address: " << perm_address << std::endl;
	std::cout << "//     Current Address: " << curr_address << std::endl;
	std::cout << "//     Email: " << email << std::endl;
	std::cout << "//     Personal Phone Number: " << phone << std::endl;
	std::cout << "//     Emergency Contact Number: " << emer_phone << std::endl;
	std::cout << "//     Paid Amount: " << money << std::endl;
	std::cout << "//     Remaining Balance: " << balance - money << std::endl << std::endl;
	std::cout << "=============================================================================" << std::endl;

}

void Profile(int money, int people) {
	std::string u_name, father_name, program, cnic, payment_method, dob, nationality, religion, permanent_address, current_address, email, personal_phone_no, secondary_phone_no;
	double av_balance = 0, card_no, s_pin, card_pin;
	std::cout << std::endl << "Enter your name: ";
	std::cin >> u_name;
	std::cout << "Enter your Father's/Guardian's name: ";
	std::cin >> father_name;
	std::cout << "Enter your CNIC: ";
	std::cin >> cnic;
	std::cout << "Enter your Date of Birth (Any Format): ";
	std::cin >> dob;
	std::cout << "Enter your Current Program or Job: ";
	std::cin >> program;
	std::cout << "Enter your Nationality: ";
	std::cin >> nationality;
	std::cout << "Enter your Religion: ";
	std::cin >> religion;
	std::cout << "Enter your Contact Number: ";
	std::cin >> personal_phone_no;
	std::cout << "Enter your Secondary/Emergency Contact Number: ";
	std::cin >> secondary_phone_no;
	std::cout << "Enter your Email: ";
	std::cin >> email;
	std::cout << "Enter your Permanent Address: ";
	std::cin >> permanent_address;
	std::cout << "Enter your Current Address (If same, Enter 'same'): ";
	std::cin >> current_address;

	if (current_address == "same" || current_address == "Same") {

		current_address = permanent_address;

	}
	std::cout << "Enter your method of Paying (Credit/Debit Card or Cash): ";
	std::cin >> payment_method;

	if (payment_method == "Debit" || payment_method == "debit" || payment_method == "Credit" || payment_method == "credit") {

		std::cout << "Enter your Credit Card Number: ";
		std::cin >> card_no;
		std::cout << "Enter your Security Pin No: ";
		std::cin >> s_pin;
		money = money / people;
		std::cout << "Enter your Card PIN: ";
		std::cin >> card_pin;
		do {
			std::cout << "Enter your Available Balance (Should be more than  " << money << " ): ";;
			std::cin >> av_balance;
		} while (av_balance < money);

		std::cout << "Amount in your credit card is now: " << av_balance - money << std::endl;
		std::cout << std::endl << "Here are your keys, You may proceed to Room No. 403" << std::endl << "Enjoy your stay!";

		Receipt(u_name, father_name, cnic, program, dob, nationality, religion, permanent_address, current_address, email, personal_phone_no, secondary_phone_no, av_balance, money);

	}
	else if (payment_method == "cash" || payment_method == "Cash") {

		std::cout << "Thanks for paying!" << std::endl << "Your Room No. is 403" << std::endl << "Hope you Enjoy your stay!";

		Receipt(u_name, father_name, cnic, program, dob, nationality, religion, permanent_address, current_address, email, personal_phone_no, secondary_phone_no, av_balance, money);

	}
	else {
		std::cout << "Not a Valid Payment Method.";
	}
}

int Floor(int fl, int b) {

	std::cout << "Enter your preferred floor (Only valid options range from (1 to " << b << "): ";
	std::cin >> fl;

	if (fl <= b) {
		return fl;
	}
	else {
		std::cout << "Enter a valid input.";
		return 0;
	}
}

int main() {

	std::string institute, gender, name, location;
	int people = 1, budget, money = 0, floor_no = 1;
	char op, prof, tr_ag;
	std::cout << "                                        ------------------------------------------------------------------------------------                                        " << std::endl;
	std::cout << "                                       |                                                                                    |                                       " << std::endl;
	std::cout << "                                       |                    WELCOME TO AAA HOSTEL MANAGEMENT SYSTEM                         |                                       " << std::endl;
	std::cout << "                                       |                                                                                    |                                       " << std::endl;
	std::cout << "                                        ------------------------------------------------------------------------------------                                        " << std::endl;
	std::cout << std::endl;
	do {
		std::cout << "Enter your Gender (Male or Female): ";
		std::cin >> gender;
		if (gender == "Male" || gender == "male") {

			std::cout << "Enter Government or Private: ";
			std::cin >> institute;

			if (institute == "Government" || institute == "Gov" || institute == "gov" || institute == "government") {

				Location_List();

				std::cin >> location;


				if (location == "1." || location == "1") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys." << std::endl << std::endl;
					std::cout << "1. Boys Hostel 175 LLU" << std::endl;
					std::cout << "2. Government Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (Between 4000 and 10,000): ";
						std::cin >> budget;

						if (budget >= 4000 && budget <= 10000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;

							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {

								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;
							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker.";
								money = 7000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount" << std::endl;
						}
					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 3000 to 9,000): ";
						std::cin >> budget;

						if (budget >= 3000 && budget <= 9000) {
							if (budget >= 3000 && budget <= 3500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 3000;

							}
							else if (budget > 3500 && budget <= 4000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 3500;
							}
							else if (budget > 4000 && budget <= 4500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 4500;

							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 5000;

							}

							else if (budget > 5500 && budget <= 6000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 5500;
							}
							else {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}
				}

				else if (location == "2" || location == "2.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. HS Boys Hostel" << std::endl;
					std::cout << "2. Mall Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (5500 to 10000): ";
						std::cin >> budget;

						if (budget >= 5500) {

							if (budget >= 5500 && budget <= 6000) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 5500;
							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;

								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;

								money = 7500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 6000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 6000) {
							if (budget >= 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;

							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 8500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "3" || location == "3.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel G.P.O" << std::endl;
					std::cout << "2. Government RB Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 to 7000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;

								money = 5500;
							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;

								money = 6000;
							}

							else if (budget > 6500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "4" || location == "4.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel 175 DT" << std::endl;
					std::cout << "2. Dubai Government Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (5000 to 10000): ";
						std::cin >> budget;

						if (budget >= 5000) {

							if (budget >= 5000 && budget <= 5500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 5500;
							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money =6500;

							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money =7000;

							}

							else if (budget > 7500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money =7500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;

								money = 5500;
							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "5" || location == "5.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. U.E.T Boys Hostel" << std::endl;
					std::cout << "2. Government Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 8000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 9000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "6" || location == "6.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel 198 RS" << std::endl;
					std::cout << "2. Government Railway Station Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 atleast upto 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "7" || location == "7.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel AT" << std::endl;
					std::cout << "2. Government ALI TOWN Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 atleast ): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "8" || location == "8.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel HBP" << std::endl;
					std::cout << "2. Harbanspur Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 atleast): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;

								money = 5500;
							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "9" || location == "9.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel S.B.D" << std::endl;
					std::cout << "2. Government Samnabad Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 atleast): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "10" || location == "10.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Boys Hostel W.R" << std::endl;
					std::cout << "2. Government Wahdat Road Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 atleast): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;

							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else {
					std::cout << "Give a valid input.";
				}
			}

			else if (institute == "Private" || institute == "private") {

				Location_List();

				std::cin >> location;


				if (location == "1." || location == "1") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. New Thoker Boys Hostel" << std::endl;
					std::cout << "2. Hafiz Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}
				}

				else if (location == "2" || location == "2.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Mall Road Boys Hostel" << std::endl;
					std::cout << "2. Mall View Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "3" || location == "3.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Raza Boys Hostels" << std::endl;
					std::cout << "2. New G.P.O Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "4" || location == "4.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Town Boys Hostel" << std::endl;
					std::cout << "2. Excellence Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {
							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "5" || location == "5.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. U.E.T Priv Boys Hostel" << std::endl;
					std::cout << "2. City Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "6" || location == "6.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Railway View Boys Hostel" << std::endl;
					std::cout << "2. Punjab Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "7" || location == "7.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Ali Priv Boys Hostel" << std::endl;
					std::cout << "2. Vigilant Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "8" || location == "8.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Harbanspur Priv Boys Hostel" << std::endl;
					std::cout << "2. Naseeb Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "9" || location == "9.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. The Samnabad Boys Hostel" << std::endl;
					std::cout << "2. Siddique Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "10" || location == "10.") {

					std::cout << std::endl << "There are 2 Private hostels in this location for boys" << std::endl << std::endl;
					std::cout << "1. Wahdat View Boys Hostel" << std::endl;
					std::cout << "2. New Lahore Boys Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else {
					std::cout << "Give a valid input.";
				}
			}

			else {
				std::cout << "Enter a valid input.";
			}
		}
		else if (gender == "Female" || gender == "female") {

			std::cout << "Enter Government or Private: ";
			std::cin >> institute;

			if (institute == "Government" || institute == "Gov" || institute == "gov" || institute == "government") {

				Location_List();

				std::cin >> location;


				if (location == "1." || location == "1") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Girls Hostel 180 LLU" << std::endl;
					std::cout << "2. Government Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}
				}

				else if (location == "2" || location == "2.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Mall Girls Hostel" << std::endl;
					std::cout << "2. C.M.H Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "3" || location == "3.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. G.P.O Girls Hostel" << std::endl;
					std::cout << "2. New GOV Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "4" || location == "4.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. A.M Girls Hostel" << std::endl;
					std::cout << "2. Government Pak Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "5" || location == "5.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Girls Hostel U.E.T" << std::endl;
					std::cout << "2. Kent Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "6" || location == "6.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Girls Hostel 179 ACU" << std::endl;
					std::cout << "2. Government Prime Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "7" || location == "7.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Panah Girls Hostel" << std::endl;
					std::cout << "2. Ali Government Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "8" || location == "8.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Prime Girls Hostel" << std::endl;
					std::cout << "2. Harbanspur Government Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "9" || location == "9.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Samnabad Girls Hostel" << std::endl;
					std::cout << "2. Destine Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "10" || location == "10.") {

					std::cout << std::endl << "There are 2 Government hostels in this location for girls" << std::endl << std::endl;
					std::cout << "1. Girls Hostel Wahdat Road" << std::endl;
					std::cout << "2. Government New Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {
						std::cout << "Enter your budget (4000 to 8000): ";
						std::cin >> budget;

						if (budget > 4000) {

							if (budget >= 4000 && budget <= 4500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;

							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;

								money = 6500;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 8000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {
						std::cout << "Enter your budget (Range: 4000 to 10,000): ";
						std::cin >> budget;

						if (budget >= 4000) {
							if (budget >= 4000 && budget <= 4500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;

								money = 4000;
							}
							else if (budget > 4500 && budget <= 5000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 4500;
							}
							else if (budget > 5000 && budget <= 5500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 5000;
							}
							else if (budget > 5500 && budget <= 6000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 5500;

							}
							else if (budget > 6000 && budget <= 6500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 6000;

							}

							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 6500;

							}
							else if (budget > 7000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 7000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 10000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else {
					std::cout << "Give a valid input.";
				}
			}
			else if (institute == "Private" || institute == "private") {

				Location_List();

				std::cin >> location;


				if (location == "1." || location == "1") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Canal View Girls Hostel" << std::endl;
					std::cout << "2. A.R Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}
				}

				else if (location == "2" || location == "2.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Excellence Girls Hostel" << std::endl;
					std::cout << "2. New Town Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "3" || location == "3.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Rashid Group Girls Hostel" << std::endl;
					std::cout << "2. Arena Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "4" || location == "4.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. New Dubai Girls Hostel" << std::endl;
					std::cout << "2. City Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "5" || location == "5.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. U.E.T priv Girls Hostel" << std::endl;
					std::cout << "2. Punjab Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "6" || location == "6.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Railway View Girls Hostel" << std::endl;
					std::cout << "2. Lahore Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}


							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "7" || location == "7.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Girls Hostel of Punjab" << std::endl;
					std::cout << "2. Ali Town Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "8" || location == "8.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Harbanspur Girls Hostel" << std::endl;
					std::cout << "2. Shan Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "9" || location == "9.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. New Samnabad Girls Hostel" << std::endl;
					std::cout << "2. Muhafiz Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;


							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else if (location == "10" || location == "10.") {

					std::cout << std::endl << "There are 2 private hostels in this location for Girls" << std::endl << std::endl;
					std::cout << "1. Naseem Girls Hostel" << std::endl;
					std::cout << "2. New Wahdat Girls Hostel" << std::endl;
					std::cout << "Enter your preferred hostel (number only): ";
					std::cin >> name;

					if (name == "1." || name == "1") {

						std::cout << "Enter your budget (6000 atleast): ";
						std::cin >> budget;

						if (budget > 6000) {

							if (budget >= 6000 && budget <= 6500) {
								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 6000;
							}
							else if (budget > 6500 && budget <= 7000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 6500;
							}
							else if (budget > 7000 && budget <= 7500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 7000;
							}
							else if (budget > 7500 && budget <= 8000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 7500;

							}
							else if (budget > 8000 && budget <= 9000) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 8000;

							}

							else if (budget > 9000 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9000;

							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 11000;
							}

							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}

						else {
							std::cout << "Enter a Valid Amount";
						}

					}


					else if (name == "2." || name == "2") {

						std::cout << "Enter your budget (Range: 7000 to 15000): ";
						std::cin >> budget;

						if (budget >= 7000) {
							if (budget >= 7000 && budget <= 7500) {

								std::cout << "You will get a single bed, and a personal locker in this budget." << std::endl << std::endl;
								money = 7000;

							}
							else if (budget > 7500 && budget <= 8000) {

								std::cout << "You will get a single bed, pillows, blankets and a personal locker in this budget." << std::endl;
								money = 7500;
							}
							else if (budget > 8000 && budget <= 8500) {

								std::cout << "You will get a single bed,its accessories,a personal locker and bathroom accessories in this budget." << std::endl;
								money = 8000;
							}
							else if (budget > 8500 && budget <= 9000) {
								std::cout << "Your facilities in this budget will be a single bed, a personal locker, 2 pillows, one blanket, bathroom accessories, and wifi. " << std::endl;
								money = 8500;

							}
							else if (budget > 9000 && budget <= 9500) {

								std::cout << "You will get a single bed, two pillows, one single blankets, wifi, bathroom accessories, a personal locker and  room accessories." << std::endl;
								money = 9000;

							}

							else if (budget > 9500 && budget <= 10000) {

								std::cout << "You will get a single bed, two pillows, one blanket, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 9500;

							}
							else if (budget > 10000 && budget <= 14000) {

								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker." << std::endl;
								money = 10000;
							}
							else {
								std::cout << "You will get a single bed, two pillows, two blankets, bathroom accessories, wifi, room accessories and a personal locker" << std::endl;
								money = 15000;
							}
							floor_no = Floor(floor_no, 10);

							cash(people, money);

							std::cout << "Would you like to continue and complete your profile? (y/n): ";
							std::cin >> prof;
							if (prof == 'y') {
								Profile(money, people);
							}
							else {
								std::cout << "Thanks for Visiting Us!";
							}
						}
						else {
							std::cout << "Enter a valid amount.";
						}
					}
					else {
						std::cout << "Not a valid name.";
					}

				}

				else {
					std::cout << "Give a valid input.";
				}
			}

			else {
				std::cout << "Enter a valid input.";
			}

		}

		else {
			std::cout << "Enter a valid input.";
		}

		std::cout << std::endl << "Go for another round? (y/Y): ";
		std::cin >> op;
		std::cout << std::endl;
	} while (op == 'y' || op == 'Y');

	std::cout << std::endl << "Thanks for Visiting our Hostel Management System!!!" << std::endl;

	return 0;
}
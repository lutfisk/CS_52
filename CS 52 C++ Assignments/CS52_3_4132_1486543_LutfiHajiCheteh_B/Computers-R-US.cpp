/*
Lutfi Haji Cheteh
Professor Howard Stahl
CS52 #4132
*/

#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	double cost = 0.0;
	char type, upgrade_cpu, upgrade_monitor, upgrade_memory, keyboard, mouse, speakers, fconfirm;
	double const desktop = 500.00; tablet = 199.99; laptop = 489.00; cpuDesktop = 350.00; cpuTablet = 99.00; cpuLaptop = 299.00; 
	monitor = 250.00; xMemory = 200.00; xMemTab = 99.00; xMouse = 50.00; xKeyboard = 50.00; speakDesktop = 99.00; speakTablet = 59.00; speakLaptop = 79.00;

do{
	cout << "Please tell me about the computer equipment you want! \n Desktop[0], Tablet[1] or Laptop[2]: ";
	cin  >> type;

	if (type == '0')
	{
		cost += desktop;
		cout << "Upgrade the CPU[0] or not[1]: ";
		cin >> upgrade_cpu;
		if (upgrade_cpu == '1')
		{
			cost += cpuDekstop;
		}
		cout << "Upgrade the monitor[0] or not[1]: ";
		cin >> upgrade_monitor;
		if (upgrade_monitor == '1')
		{
			cost += monitor;
		}
		cout << "Extra memory[0] or not[1]: ";
		cin >> upgrade_memory;
		if (upgrade_memory == '1')
		{
			cost += xMemory;
		}
		cout << "Bluetooth Keyboard[0] or not[1]: ";
		cin >> keyboard;
		if (keyboard == '1')
		{
			cost += xKeyboard;
		}
		cout << "Bluetooth Mouse[0] or not[1]: ";
		cin >> mouse;
		if (mouse == '1')
		{
			cost += xMouse;
		}
		cout << "External Speakers[0] or not[1]: ";
		cin >> speakers;
		if (speakers == '1')
		{
			cost += speakDesktop;
		}

		cout << "With 8.25% sales tax, your new Desktop will cost " << (cost*0.0825) << "\n";
	}
	
	else if(type == '1')
	{
		cost += tablet;
		cout << "Upgrade the CPU[0] or not[1]: ";
		cin >> upgrade_cpu;
		if (upgrade_cpu == '1')
		{
			cost += cpuTablet;
		}
		cout << "Extra memory[0] or not[1]: ";
		cin >> upgrade_memory;
		if (upgrade_memory == '1')
		{
			cost += xMemTab;
		}
		cout << "Bluetooth Keyboard[0] or not[1]: ";
		cin >> keyboard;
		if (keyboard == '1')
		{
			cost += xKeyboard;
		}
		cout << "Bluetooth Mouse[0] or not[1]: ";
		cin >> mouse;
		if (mouse == '1')
		{
			cost += xMouse;
		}
		cout << "External Speakers[0] or not[1]: ";
		cin >> speakers;
		if (speakers == '1')
		{
			cost += speakTablet;
		}

		cout << "With 8.25% sales tax, your new Tablet will cost " << (cost*0.0825) << "\n";
	}

	else if(type == '2')
	{
		cost += laptop;
		cout << "Upgrade the CPU[0] or not[1]: ";
		cin >> upgrade_cpu;
		if (upgrade_cpu == '1')
		{
			cost += cpuLaptop;
		}
		cout << "Extra memory[0] or not[1]: ";
		cin >> upgrade_memory;
		if (upgrade_memory == '1')
		{
			cost += xMemory;
		}
		cout << "Bluetooth Keyboard[0] or not[1]: ";
		cin >> keyboard;
		if (keyboard == '1')
		{
			cost += xKeyboard;
		}
		cout << "Bluetooth Mouse[0] or not[1]: ";
		cin >> mouse;
		if (mouse == '1')
		{
			cost += xMouse;
		}
		cout << "External Speakers[0] or not[1]: ";
		cin >> speakers;
		if (speakers == '1')
		{
			cost += speakLaptop;
		}

		cout << "With 8.25% sales tax, your new Laptop will cost " << (cost*0.0825) << "\n";
	}

cout << "Try again [Y/N]: ";
cin  >> fconfirm;

  }while(fconfirm == 'y' || fconfirm == 'Y');

  return 0;
}
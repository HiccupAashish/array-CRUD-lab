#include <iostream>
using namespace std;

const double SMALL_BURGER_Price = 3.0;
const double MEDIUM_BURGER_Price = 5.50;
const double LARGE_BURGER_Price = 7.25;

const double CHEESE = 0.80;
const double SALAD = 0.50;
const double BACON = 1.0;
const double KETCHUP = 0.30;
const double MAYO = 0.30;
const double EXTRA_BURGER = 1.50;

double Balance = 0.0;

void addCredits()
{

  double creditsToAdd;
  cout << "Enter the number of credits to add: " << endl;
  cin >> creditsToAdd;
  Balance += creditsToAdd;
  cout << "Credits added successfully. Current credit: " << Balance << endl;
}

void displayBurger()
{
  cout << "_____________________________" << endl;
  cout << "1. Small Burger   - $" << SMALL_BURGER_Price << endl;
  cout << "2. Medium Burger- $" << MEDIUM_BURGER_Price << endl;
  cout << "3. Large Burger - $" << LARGE_BURGER_Price << endl;
}
void displayTopping()
{
  cout << "Please Select a Topping for your burger" << endl;
  cout << "1. Cheese 🧀🧀" << endl;
  cout << "2. Salad 🥗🥗" << endl;
  cout << "3. Bacon 🥓🥓 " << endl;
  cout << "4. Ketchup 🍅🍅" << endl;
  cout << "5. Mayo 🍯🍯" << endl;
  cout << "6. Extra Burger 🍔🍔" << endl;
}

class History
{
public:
  string name;
  double total, initialbalance, finalbalance;
};

int main()
{
  History history[3];
  int mainmenu;
  string burger;
  string usrinput, checkoutinput;
  double price = 0;
  int toppingprice, selectedburger, selectedtopping; ///
  int array[10];
  int arraySize = 1;
  string *toppings = new string[arraySize];
  int elements = 0;
  string name;
  double finalbalance;

  do
  {
    addCredits();
    cout << "Please Enter your Name" << endl;
    cin >> name;

    int loop = 0;
    system("clear");
    cout << "******************** 🤠🤠🤠   Welcome To Aason Cafe 🤠🤠🤠   ********************" << endl;
    cout << " How can we help you today ?" << endl;
    cout << "1. View History" << endl;
    cout << "2. See Menu" << endl;
    cin >> mainmenu;
    if(mainmenu==1){
        for (int i=0; i<3 ; i++){
          cout <<history[i].name << "your initial balance was "<< history[i].initialbalance <<", after you ordered a total of  $"<< history[i].total << "you had "<< history[i].finalbalance<<"left" <<endl; ;
        }
    }
    else{

    for (int i = 1; i > 0; i++)
    {
      displayBurger();
      cin >> selectedburger;
      if (selectedburger == 1)
      {
        cout << "Small Burger has been selected. " << endl;
        burger = "Small Burger";
        price += SMALL_BURGER_Price;
        break;
      }
      else if (selectedburger == 2)
      {
        cout << "Medium Burger has been selected." << endl;
        burger = "Medium Burger";
        price += MEDIUM_BURGER_Price;
        break;
      }
      else if (selectedburger == 3)
      {
        cout << "Big Burger has been selected." << endl;
        burger = "Big Burger";
        price = LARGE_BURGER_Price;
        break;
      }
      else
      {
        cout << "Please Choose one of the Options above" << endl;
      }
    }
    for (int i = 1; i > 0; i++)
    {
      displayTopping();
      cin >> selectedtopping;

      if (selectedtopping == 1)
      {
        cout << "Cheese has been added with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Cheese 🧀🧀";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Cheese 🧀🧀";
          arraySize++;
          elements++;
        }

        price = price + 0.80;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else if (selectedtopping == 2)
      {
        cout << "Salad has been added with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Salad 🥗🥗";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Salad 🥗🥗";
          arraySize++;
          elements++;
        }
        price = price + 0.50;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else if (selectedtopping == 3)
      {
        cout << "Bacon has been added with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Bacon 🥓🥓";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Bacon 🥓🥓";
          arraySize++;
          elements++;
        }
        price = price + 1.0;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else if (selectedtopping == 4)
      {
        cout << "Ketchup has been added with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Ketchup 🍅🍅";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Ketchup 🍅🍅";
          arraySize++;
          elements++;
        }
        price = price + 0.30;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else if (selectedtopping == 5)
      {
        cout << "Mayo has been added with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Mayo 🍯🍯";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Mayo 🍯🍯";
          arraySize++;
          elements++;
        }
        price = price + 0.30;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else if (selectedtopping == 6)
      {
        cout << "Extra burger coming with your " + burger << endl;
        if (elements < arraySize)
        {
          toppings[elements] = "Extra Burger 🍔🍔";
          elements++;
        }
        else
        {
          string *temparray = new string[arraySize + i];
          for (int i = 0; i < elements; i++)
          {
            temparray[i] = toppings[i];
          }
          delete[] toppings;
          toppings = temparray;
          toppings[elements] = "Extra Burger 🍔🍔";
          arraySize++;
          elements++;
        }
        price = price + 1.50;
        cout << " Would you like to add more topping ?(y/n)" << endl;
        cin >> usrinput;
        if (usrinput != "y")
        {
          break;
        }
      }
      else
      {
        cout << "Please Select an appropriate Topping" << endl;
      }
    }
    system("clear"); // system ("cls") // for windows
    cout << "Thankyou your order is Ready. That would be a total of " << price << endl;
    cout << "Your Toppings Include :" << endl;
    for (int i = 0; i < arraySize; i++)
    {
      cout << "-----------" << toppings[i] << "------------" << endl;
    }

    cout << "Press Y to proceed ahead or other key to start again" << endl;
    cin >> checkoutinput;

    if (checkoutinput == "y" || checkoutinput == "Y")
    {
      finalbalance = Balance - price;
      cout << "Thankyou for your Purchase" << endl;
      cout << "Your Change will be " << Balance << endl;
      cout << "------------------" << endl;
      cout << "------------------" << endl;
    }
    history[loop].total = price;
    history[loop].name = name;
    history[loop].initialbalance = Balance;
    history[loop].finalbalance = finalbalance;
    }
    price=NULL;
    name.clear();
    Balance=NULL;
    



  } while (checkoutinput != "y");
}

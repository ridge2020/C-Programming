/**********************************************************************
 * @file    spFunctionsHWspools.cpp
 * @brief  This program will prompt user for amount spools for purchase,
 *         then collect tax, shipping, stock, and backorder amount 
 *         and display it to screen.
 *
 * 
 *
 * @remarks     took me nearly 2 hours to figure out how to 
 *              use operators to compare strings
 *      Course:        Computer Science 2114
 *      Assignment #:  08
 *      Due Date:      october 9th
 *      Instructor:    MS. Serviner
 *
 *      Input:    purchased, state of residence, and shipping info
 *
 *      Output:   will display total, with shipping cost, and tax
 *                information.
 * 
 * @author        Ridge Diffine
 * @date          2018-10-09
 **********************************************************************
 */
 
 
 #include<iostream>
 #include<string>
 #include<fstream>
 #include<iomanip>
    using namespace std;
    


void createInvoice(int spoolsOrdered, double shippingCharges, double stateTax)
{
    double CostPerSpool = 154.50, subTotalCost, shippingTotal, salesTax, finalTotal;
    subTotalCost = spoolsOrdered * CostPerSpool;
    shippingTotal = spoolsOrdered * shippingCharges;
    salesTax = stateTax * (shippingTotal + subTotalCost);
    finalTotal = (salesTax + shippingTotal + subTotalCost);
    cout << setw(60) << "The ACME Ethernet Cable Company" << endl;
    cout << setw(45) << "Quantity" << setw(25) << "Cost Per Spool" 
         << setw(25) << "Cost" << endl;
    cout << setw(45) << spoolsOrdered << setw(25) << CostPerSpool
         << setw(25) << subTotalCost << endl;
    cout << "Subtotal" << setw(87) << subTotalCost << endl;
    cout << "Shipping/Handling" << setw(53) << shippingCharges
         << setw(25) << shippingTotal << endl;
    cout << "Sales Tax." << setw(85) << salesTax << endl;
    cout << "Total" << setw(90) << finalTotal << endl
         << endl << endl;
    
    

    
}

double determineShippingCharges()
{
    string answer;
    double shipping;
    cout << "The default shipping and handling charge is $15 per spool." 
         << endl;
    cout << "Are there special shipping and handling charges for this "
         << "order (y or n)? ";
    cin >> answer;
    while(answer != "y" && answer != "n"){

        cout << "That is an invalid response.  Please respond y or n.";
        cin >> answer;
    }
    if(answer == "y"){
        cout << "Please enter the amount for shipping: ";
        cin >> shipping;
        cout << endl;
        if(shipping < 0){
            cout << "Invalid data.  Shipping and handling must be non-negative. "
                 << "Please try again.";
            cin >> shipping;
            cout << endl;
        }
    }
    else{
        shipping = 15;
        cout << endl;
    }
    return shipping;
}

int getBackorderCount()
{
    int backOrderAmount;
    ifstream myFile;
    myFile.open("backorder.txt");
    if(myFile.fail())
    {
        return 0;
    }
    myFile >> backOrderAmount;
    return backOrderAmount;
}

int getSpoolsOrdered()
{
    int amountOrdered;
    cout << "How many spools would you like to purchase? ";
    cin >> amountOrdered;
    cout << endl;
    while(amountOrdered <= 0){
        cout << "invalid Data.  The number of spools must be positive. "
             << "Please try again.";
             cin >> amountOrdered;
             cout << endl;
    }
    return amountOrdered;
    
}

double getStateTaxRate()
{
    string state, stateOptions;
    double taxRate, finalTaxRate;
    cout << "Please enter the two character state abbreviation of the shipping "
         << "address: ";
    cin >> state;
    ifstream myFile;
    myFile.open("stateTax.txt");
    if(myFile.fail())
    {
        finalTaxRate = -1;
        cout << endl;
    }
    do{
        getline(myFile, stateOptions);
        myFile >> taxRate;
        taxRate = taxRate / 100;
        if(stateOptions == state)
        {
            finalTaxRate = taxRate;
            cout << endl;
            return finalTaxRate;
        }
    }while(taxRate != 8.19);
    finalTaxRate = 0;
    return finalTaxRate;
}

int getStockCount()
{
    int inStock;
    ifstream myFile;
    myFile.open("inStock.txt");
    if(myFile.fail()){
        return 0;
    }
    myFile >> inStock;
    return inStock;
    
}

void setBackorderCount(int updatedBackorderCount)
{
    ofstream myFile;
    myFile.open("backorder.txt");
    myFile << updatedBackorderCount;
}

void setStockCount(int updatedStockCount)
{
    ofstream myFile;
    myFile.open("inStock.txt");
    myFile << updatedStockCount;
}

int main()
{
    int spoolsInStock, difference, spoolsOrdered, newStock;
    double shipping, stateTaxRate;
    string invoice;
    cout << setprecision(2) << fixed;
    cout << "Welcome to The ACME Ethernet Cable Company." << endl
         << "We sell spools of 1000 feet of Cat6 Ethernet cable for $154.50 each." 
         << endl << endl;
         
    spoolsOrdered = getSpoolsOrdered();
    shipping = determineShippingCharges();
    stateTaxRate = getStateTaxRate();
    spoolsInStock = getStockCount();
    
    cout << "You requested " << spoolsOrdered << " spools." << endl;
    
    if(spoolsOrdered > spoolsInStock){
        difference = spoolsOrdered - spoolsInStock;
        cout << "We do not have that many spools in stock." << endl;
        cout << difference << " spools will be backordered and shipped"
             << " as soon as possible." << endl;
        cout << "We are shipping " << spoolsInStock << " spools." << endl << endl;
        setBackorderCount(difference);
    }
    if(spoolsOrdered < spoolsInStock){
        cout << "We are shipping " << spoolsOrdered << " spools." << endl << endl;
        newStock = spoolsInStock - spoolsOrdered;
        setStockCount(newStock);
    }
    if(spoolsInStock != 0){
    createInvoice(spoolsOrdered, shipping, stateTaxRate);
    }
    cout << "Thank you for choosing The ACME Ethernet Cable Company." << endl
         << "We appreciate your business." << endl;
    return 0;
}






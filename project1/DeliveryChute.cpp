/*
* Vending Machine Project
* CSE-40477
*
* DeliveryChute.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <iostream>
using std::cerr;

#include "DeliveryChute.h"

Project1::DeliveryChute::DeliveryChute(StatusPanel &statusPanel)
    : statusPanel(statusPanel),
      pProduct(0)
{}

Project1::DeliveryChute::~DeliveryChute()
{
    // remove pointer
    if (containsProduct())
    {
        delete pProduct;
    }
}

bool
Project1::DeliveryChute::insertProduct(Product *pProduct)
{
    if (containsProduct())
    {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_CHUTE_FULL);
        return false;
    } else {
        this->pProduct = pProduct;
        return true;
    }
}

Project1::Product *
Project1::DeliveryChute::retrieveProduct()
{
    if (containsProduct())
    {
        // creating static pointer so that it won't be deleted when function
        // scope is exited
        Product *rProduct;
        rProduct = pProduct;
        pProduct = NULL;
        return rProduct;
    } else {
        return 0;
    }
}

bool
Project1::DeliveryChute::containsProduct() const
{
    return pProduct != NULL;
}

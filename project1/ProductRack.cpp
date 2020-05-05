/*
* Vending Machine Project
* CSE-40477
*
* ProductRack.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include <cstring>
using std::strcmp;
using std::strcpy;

#include "ProductRack.h"

Project1::ProductRack::ProductRack(
    StatusPanel &statusPanel,
    const char *allowedProductName,
    DeliveryChute &deliveryChute,
    unsigned productPriceCents)
    : statusPanel(statusPanel),
        deliveryChute(deliveryChute),
        productCount(0),
        productPriceCents(productPriceCents)
{
    strcpy(this->allowedProductName, allowedProductName);
}

Project1::ProductRack::~ProductRack()
{
    // delete product objects still controlled
    for (unsigned p = 0; p < getNumProductsInRack(); p++)
    {
        delete products[p];
    }

}

bool
Project1::ProductRack::isCompatibleProduct(const char *productName) const
{
    return strcmp(allowedProductName, productName) == 0;
}

bool
Project1::ProductRack::isFull() const
{
    return getNumProductsInRack() == MAX_PRODUCTS;
}

bool
Project1::ProductRack::isEmpty() const
{
    return getNumProductsInRack() == 0;
}

bool
Project1::ProductRack::addProduct(Product* pProduct)
{
    // check if matches product name
    if (!isCompatibleProduct(pProduct->getName()))
    {
        statusPanel.displayMessage(
            statusPanel.MESSAGECODE_PRODUCT_DOES_NOT_MATCH_PRODUCT_RACK
        );
    } else if (isFull())  // check if full
    {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_RACK_IS_FULL);
    } else {
        // take control
        products[getNumProductsInRack()] = pProduct;
        ++productCount;
        return true;
    }

    return false;
}

bool
Project1::ProductRack::deliverProduct()
{
    if (!isEmpty())
    {
        if(deliveryChute.insertProduct(products[getNumProductsInRack() - 1])) {
                // relinquish control
                products[getNumProductsInRack() - 1] = NULL;
                --productCount;
                return true;
        }
    } else {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_SOLD_OUT);
    }
    return false;
}

unsigned
Project1::ProductRack::getNumProductsInRack() const
{
    return productCount;
}

unsigned
Project1::ProductRack::getProductPriceCents() const
{
    return productPriceCents;
}

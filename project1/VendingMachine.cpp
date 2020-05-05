/*
* Vending Machine Project
* CSE-40477
*
* VendingMachine.cpp
* YOU MUST IMPLEMENT THE FUNCTIONS IN THIS FILE.
*/
#include "VendingMachine.h"

#include <iostream>
using std::cout;

Project1::VendingMachine::VendingMachine(
    ostream &statusPanelStream,
    const char *productNames[NUM_PRODUCT_RACKS],
    unsigned productPrices[NUM_PRODUCT_RACKS])
    : statusPanel(statusPanelStream),
        deliveryChute(statusPanel),
        numCoins(0),
        unspentMoneyCents(0)
{
    // initialize product racks
    for (int pn = 0; pn < NUM_PRODUCT_RACKS; pn++)
    {
        productRacks[pn] = new ProductRack(
            statusPanel,
            productNames[pn],
            deliveryChute,
            productPrices[pn]
        );

        productButtons[pn] = new ProductButton(
            *productRacks[pn]
        );
    }
}

Project1::VendingMachine::~VendingMachine()
{
    // delete product racks and buttons
    for (int pn = 0; pn < NUM_PRODUCT_RACKS; pn++)
    {
        delete productRacks[pn];
        productRacks[pn] = NULL;
        delete productButtons[pn];
        productButtons[pn] = NULL;
    }

    // delete coins
    for (unsigned c = 0; c < numCoins; c++)
    {
        delete coinBox[c];
        coinBox[c] = NULL;
    }

}

bool
Project1::VendingMachine::insertCoin(Coin *pCoin)
{
    // check if coin is valid
    if (pCoin->getDenomination() != (*pCoin).COINTYPE_WOODEN_NICKEL)
    {
        // add to coinBox
        coinBox[getNumCoinsInCoinBox()] = pCoin;
        numCoins++;

        // return if successful
        return true;
    }
    // if not display error
    statusPanel.displayMessage(statusPanel.MESSAGECODE_BAD_COIN);
    return false;
}

bool
Project1::VendingMachine::pressButton(int button)
{
    // check if valid button
    if (
        (button < 0) || (button > (NUM_PRODUCT_RACKS - 1))
    )
    {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_WRONG_BUTTON);
    } else if (
        productRacks[button]->getProductPriceCents() > this->countTill()
    )
    {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_INSUFFICIENT_MONEY);
    } else if (
        productRacks[button]->isEmpty()
    )
    {
        statusPanel.displayMessage(statusPanel.MESSAGECODE_SOLD_OUT);
    } else {
        productButtons[button]->press();
        return true;
    }
    return false;
}

Project1::Product *
Project1::VendingMachine::retrieveProduct()
{
    return deliveryChute.retrieveProduct();
}

bool
Project1::VendingMachine::addProduct(Product *pProduct)
{
    // check compatibility
    for (int pn = 0; pn < NUM_PRODUCT_RACKS; pn++)
    {
        // right name
        if (productRacks[pn]->isCompatibleProduct(pProduct->getName()))
        {
            // check if space
            if (productRacks[pn]->isFull())
            {
                // although this would miss if there is space in a secondary rack
                // of the same product
                statusPanel.displayMessage(statusPanel.MESSAGECODE_RACK_IS_FULL);
                return false;
            } else {
                productRacks[pn]->addProduct(pProduct);
                return true;
            }
        }
    }
    statusPanel.displayMessage(statusPanel.MESSAGECODE_NO_RACK_FOR_PRODUCT);
    return false;
}

unsigned
Project1::VendingMachine::getProductCount(const char *productName) const
{
    // check compatibility
    for (int pn = 0; pn < NUM_PRODUCT_RACKS; pn++)
    {
        if (productRacks[pn]->isCompatibleProduct(productName))
        {
            // return count
            return productRacks[pn]->getNumProductsInRack();
        }
    }
    return 0;
}

unsigned
Project1::VendingMachine::countTill() const
{
    unsigned total = 0;
    for (unsigned c = 0; c < numCoins; c++)
    {
        total += coinBox[c]->getValueCents();
    }
    return total;
}

unsigned
Project1::VendingMachine::getNumCoinsInCoinBox() const
{
    return numCoins;
}

const standardShippingCost = 6 // CamelCase (the way we name variables/function etc)
const distcountedShippingCost = 4
let totalPrice;

function calculateShippingCost(totalPriceParameter) {
    let shippingCost;

    if (totalPrice <= 10) {
        shippingCost = standardShippingCost // less hard coded variables
    } else if (totalPrice <= 20) {
        shippingCost = standardShippingCost // less hard coded variables
    } else {
        shippingCost = 0
    }
    console.log(`Shipping cost for you is ${shippingCost}`)
    console.log(`for total price of ${totalPrice}`)
    console.log("-----------------------")
}
// user starts shopping
totalPrice = 10
calculateShippingCost(totalPrice) // ******

// more items added to shopping cart
totalPrice = 19
// ready to order
calculateShippingCost(totalPrice) //******

// add another item
totalPrice = 24;
calculateShippingCost(totalPrice) // ******

// place the order
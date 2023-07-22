/**
 * @param {number[]} coins
 * @param {number} amount
 * @return {number}
 */
var coinChange = function(coins, amount) {
    
    const table = Array(amount+1).fill(null)
    table[0] = []


    for(let i =0;i<=amount;i++){

        if(table[i] !== null){

            for(let coin of coins){

            const combination = [...table[i],coin]

            if(!table[i+coin] || combination.length < table[i+coin].length){
                table[i+coin]= combination
            }

            }
        }
    }

    return table[amount] ? table[amount].length : -1;
};

console.log(coinChange([1,2,5],11))
console.log(coinChange([2],3))
console.log(coinChange([1],0))
console.log(coinChange([1],1000))
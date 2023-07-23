/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    
    canComb(candidates,target);
};

const canComb = (candidates,target) => {

    if(target === 0) return [];
    if(target < 0 ) return null;
    const result = []

    for(let candidate of candidates){
        
        const remainder = target - candidate
        const remainderCombination = canComb(candidates,remainder)
        // console.log(remainderCombination + " Candidate- " + candidate + " Remainder- " + remainder)
        if(remainderCombination !== null){
            const combination = [...remainderCombination,candidate];
            // result.push(combination)
            console.log(combination)
        }
        console.log("Recursion")
    }
    
    return result

}

console.log(canComb([2,3,6,7],7))
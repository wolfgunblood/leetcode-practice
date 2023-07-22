const canConstruct = (target,wordBank,memo = {}) => {

    if(target in memo) return memo[target]; 
    if(target == "") return true;

    for(let word of wordBank){
        
        // console.log(target.indexOf(word))
        if(target.indexOf(word) === 0){
            const suffix = target.slice(word.length)
            // console.log(suffix)
            const check = canConstruct(suffix,wordBank,memo);
            if(check){
                memo[target] = true
                return true;
            }
        }
    }
    memo[target] = false

    return false;
}

console.log(canConstruct("purple",["purp","p","ur","le","purpl"])) //true
console.log(canConstruct("abcdef",["ab","abc","cd","def","abcd"])) //true
console.log(canConstruct("skateboard",["bo","rd","ate","t","ska","sk","boar"])) //false
console.log(canConstruct("enterapotentpot",["a","p","ent","enter","ot","o","t"])) //true
console.log(canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef",[
    "e",
    "ee",
    "eee",
    "eeee",
    "eeeee",
    "eeeeee"
]))
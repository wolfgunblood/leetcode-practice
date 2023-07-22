/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    
    // console.log(s);
    
    const arr = check(s);
    console.log(arr);
    return arr[arr.length-1].length;

};

const check = (s) => {

    const arr  = s.split(" ");

    const arr1 = arr.filter(item => item != "")
    
    // console.log(arr1);

    return arr1; 
}
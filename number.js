function numbersOfLetters(integer) {
    const digitNames = ["zero", "one", "two", "three","four", "five", "six", "seven", "eight", "nine"];

    if (integer == 4){
        return ["four"];
    }
    let numStr = integer.toString();
    // console.log(numStr);
    let wordRepresentation = "";
    for (let i = 0; i < numStr.length; i++) {
      const digit = parseInt(numStr[i]);
      wordRepresentation += digitNames[digit];
    //   console.log(digitNames[digit]);
    //   console.log(wordRepresentation);
    }
    let result = [wordRepresentation];
    while (true) {
      const currentLength = wordRepresentation.length;
    //   console.log(currentLength);
      const lengthStr = currentLength.toString();
    //   console.log(wordRepresentation);
      wordRepresentation = "";
    //   console.log("empty :"  + wordRepresentation);

      for (let i = 0; i < lengthStr.length; i++) {
        const digit = parseInt(lengthStr[i]);
        wordRepresentation += digitNames[digit];
      }
      result.push(wordRepresentation);
    //   console.log(result);  
     if (wordRepresentation === "four") {
       break;
      }
    }

    return result;
  }

function main() {

    // Test cases
    // console.log("kdkd");
    // console.log(numbersOfLetters(123)); // ["onetwothree", "threetwo", "foursix", "four"]
//     console.log(numbersOfLetters(123456)); // ["onetwothreefourfivesix", "eight", "five", "four"]
    console.log(numbersOfLetters(4)); // ["four", "four", "four"]
}


main();
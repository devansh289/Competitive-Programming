number = [];

for (var x = 0; x < 4; x++) {
	number.push(prompt());
}

//if (number[0] == 8 || number[0] == 9) {
//	if (number[3] == 8 || number[3] == 9) {
//		if (number[2] == number[3]) {
//			console.log("ignore")
//		}
//	}
//}

if ((number[0] == 8 || number[0] == 9) &&
	(number[3] == 8 || number[3] == 9) &&
	(number[1] == number[2])){
	console.log("ignore")
} else {
	console.log("answer")
}
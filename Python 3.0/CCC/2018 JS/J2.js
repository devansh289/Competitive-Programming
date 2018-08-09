var spaces = 7;
var day1 = "CCCCCCC";
var day2 = "C.C.C.C";
var count = 0;
for (var i = 0; i < spaces; i++) {
	if ((day1[i] == "C") && (day2[i] == "C")) {
		count++;
	}
}
console.log(count);
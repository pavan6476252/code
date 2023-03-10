var a = prompt("enter prime range");

const prime = new Array(100 + 1);
prime.fill(true);

for(let i =2;i<100;i++){
	if(prime[i]===true)
	for(let j =i*i;j<100;j = j*i){
		prime[j]=false;
	}
}
alert("check console for output");
console.log("prime numbers are");
for(let i=2; i<a;i++){
if(prime[i] ==true)
console.log(i);
}
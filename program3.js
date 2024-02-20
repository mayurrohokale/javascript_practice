let globe = "globe variale has global scope"

function test()
{
    const samp = "I am in function scope";
    console.log(samp);
   
}

{
    var  block1 = 'i am in first block';
    let block2 = "i am in block";
}
console.log(block2);
console.log(block1);

test();

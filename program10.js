//lexical environment = local memory + reference to its parent memory
//its also known as scope chain
function a()
{
    c();
    function c()
    {
        console.log(b);
    }
  
    
}

var b = 10;
a();

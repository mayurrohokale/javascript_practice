

function attachEventListner()
{
     let count = 0;
    document.getElementById("clickme").addEventListener("click", function xyz()
    {
        console.log("button clicked", ++count);
    });
}

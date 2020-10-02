 
var ul= document.getElementById("list");
var li = document.getElementById("check");

 


 
 
 
document.getElementById("add").onclick=() => 


  {
    var input = document.getElementById("input");
    var item = input.value;
    ul=document.getElementById("list");
    var textnode = document.createTextNode(item)
    // console.log(item);
    console.log(textnode);
    if(item === " ") {
        return  alert("enter the to-do") ;
    }
    else {
        // crate li
        li = document.createElement("li");
        li.setAttribute("id","bhumi")

        //crate checkbox
        var checkbox= document.createElement("input")
        checkbox.type = "checkbox";
        checkbox.setAttribute("id","check");

        //crate label
        var label= document.createElement("label");
        label.setAttribute("for","item")


        //add these elements on web page
       
        ul.appendChild(label);
        li.appendChild(checkbox);
        label.appendChild(textnode);
        li.appendChild(label);
        ul.insertBefore(li,ul.childNodes[0]);
        li.classname ="visual";
       }
     

 } 
 
  document.getElementById("remove").onclick = () =>
  {             var input = document.getElementById("input");
                var item = input.value;

      var umang = document.getElementById(item);
       console.log(umang);
    
                 
    
            

    

   
    


    

    
    








    




  }
    
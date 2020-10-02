let patterns ={

    username:/ ^[a-z\d]{5,10}$/i,
    password:/  [\w @-]{8,20}/i,
    email: /([a-z \d\.-]+)@([a-z\d-]+)\.([a-z]{2,6})(\.[a-z]{2,6})?$/,
    mobileno: /[0-9]{10}/,

}

document.getElementById("iform").onsubmit=(e)=>{
    e.preventDefault();
    console.log(e.target.username.value);
    if(!patterns.username.test(e.target.username.value)){
               alert("username is unvalid")
    }
    console.log(e.target.email.value);
    if (!patterns.email.test(e.target.email.value)){
        alert("enter valid email adress")
    }
    console.log(e.target.mobileno.value);
    if(!patterns.mobileno.test(e.target.mobileno.value)){
               alert("mobileno is unvalid")
    }
    console.log(e.target.password.value);
    if(!patterns.password.test(e.target.password.value)){
               alert(" password  is unvalid")
    }

}

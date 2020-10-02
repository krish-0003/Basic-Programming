var bubblesort = function(arr){
    do{
      var swapped = false;
      arr.forEach((num,i) => {
          if(num > arr[i+1]){
              var temp = num;
              arr[i] = arr[i+1];
              arr[i=1] = temp;
              swapped=true;
          }
      })
      
  }
    while(swapped===true)
    return array;

}

console.log(bubblesort([2,1,6,13,68,3]));

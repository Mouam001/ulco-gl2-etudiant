
function mul2(n) {
    return n*2;
}

function make_handler(input, output){
    return function(){
    output.innerHTML = mul2(input.value);
    }


}

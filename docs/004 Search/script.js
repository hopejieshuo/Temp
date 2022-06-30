var close=false;
document.querySelector(".search").onclick=function(){
    if(document.querySelector(".search").value!="" && close==true){
        document.querySelector(".search").select();
        close=false;
    }
}
document.querySelector(".btn").onmouseleave=function(){
    document.querySelector(".search").style.width="0px";
    document.querySelector(".search").style.left="calc(50%)";
    document.querySelector(".btn").style.left="calc(50% - 50px)";
    close=true;
}
document.querySelector(".btn").onmouseenter=function(){
    document.querySelector(".search").style.width="450px";
    document.querySelector(".search").style.left="calc(50% - 300px)";
    document.querySelector(".btn").style.left="calc(50% + 100px)";
}
document.querySelector(".search").onmouseleave=function(){
    document.querySelector(".search").style.width="0px";
    document.querySelector(".search").style.left="calc(50%)";
    document.querySelector(".btn").style.left="calc(50% - 50px)";
    close=true;
}
document.querySelector(".search").onmouseenter=function(){
    document.querySelector(".search").style.width="450px";
    document.querySelector(".search").style.left="calc(50% - 300px)";
    document.querySelector(".btn").style.left="calc(50% + 100px)";
}

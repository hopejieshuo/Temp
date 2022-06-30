var clockHour=document.querySelector(".clock-hour");
var clockMinute=document.querySelector(".clock-minute");
var clockSecond=document.querySelector(".clock-second");
var h=0;
var m=0;
var s=0;
var mode="dark";

setInterval(function(){
    var date=new Date();
    if(date.getHours()==12 && date.getMinutes()==0 && date.getSeconds()==0){
        h = h + 1;
    }
    if(date.getHours()==0 && date.getMinutes()==0 && date.getSeconds()==0){
        h = h + 1;
    }
    if(date.getMinutes()==0 && date.getSeconds()==0){
        m = m + 1;
    }
    if(date.getSeconds()==0){
        s = s + 1;
    }
    clockHour.style.transform="rotate("+(date.getHours() * 30 + h * 360)+"deg)";
    clockMinute.style.transform="rotate("+(date.getMinutes() * 6 + m * 360)+"deg)";
    clockSecond.style.transform="rotate("+(date.getSeconds() * 6 + s * 360)+"deg)";
},1000);

for(var a=0;a<=59;a++){
    document.querySelector(".num"+a).style.transform="rotate("+(a * 6)+"deg)";
}

function clickme(){
    if(mode=="dark"){
        document.querySelector(".clock-num").style.color="#FFFFFF";
        document.querySelector("#darkOrlight").style.backgroundColor="#FFFFFF";
        document.querySelector("#darkOrlight").innerHTML="☀";
        document.querySelector(".div-main").style.borderColor="#FFFFFF";
        document.querySelector(".clock-point").style.backgroundColor="#FFFFFF";
        document.querySelector("body").style.backgroundColor="#000000";
        document.querySelector(".div-main").style.backgroundColor="#000000";
        mode="light";
    }else{
        document.querySelector(".clock-num").style.color="#000000";
        document.querySelector("#darkOrlight").style.backgroundColor="#000000";
        document.querySelector("#darkOrlight").innerHTML="🌙";
        document.querySelector(".div-main").style.borderColor="#000000";
        document.querySelector(".clock-point").style.backgroundColor="#000000";
        document.querySelector("body").style.backgroundColor="#FFFFFF";
        document.querySelector(".div-main").style.backgroundColor="#FFFFFF";
        mode="dark";
    }
}

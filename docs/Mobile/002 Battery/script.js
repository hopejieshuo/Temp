var x=0;
var y=0;
var canvas=document.getElementById("cvs");
var ctx=canvas.getContext("2d");

let battery = navigator.getBattery();
var num="";
var lv=0;
var status="";
navigator.getBattery().then(function(battery){ 
    status=(battery.charging ? "yes" : "no");
    num=battery.level * 100 + "%";
    lv=battery.level * 100;
    document.getElementById("lv").innerHTML=num;
    battery.addEventListener("chargingchange", function(){
        status=(battery.charging ? "yes" : "no");
    });
    battery.addEventListener("levelchange", function() {
        num=battery.level * 100 + "%";
        lv=battery.level * 100;
    });
});

setInterval(function(){
    if(status=="yes" && x<lv*5){
        ctx.strokeStyle="#0000FF";
        ctx.beginPath();
        ctx.moveTo(x,y);
        ctx.lineTo(x,canvas.height);
        ctx.stroke();
        x=x+0.25;
    }
    if(status=="yes" && x>=lv*5){
        x=0;
        canvas.width=canvas.width;
        canvas.height=canvas.height;
    }
    if(status=="no"){
        canvas.width=canvas.width;
        canvas.height=canvas.height;
        for(x=0;x<=(lv*5);){
            ctx.strokeStyle="#0000FF";
            ctx.beginPath();
            ctx.moveTo(x,y);
            ctx.lineTo(x,canvas.height);
            ctx.stroke();
            x=x+0.25;
        }
    }
},1);
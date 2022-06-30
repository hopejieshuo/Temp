var getNum=document.getElementById("getNum");
var setNum=document.getElementById("setNum");
var iptNum=document.getElementById("iptNum");
var lv=document.getElementById("lv");
var Onum=0;
getNum.onclick=function(){
    var num=[];
    for(var i=0;i<=1000;i++){
        num[i]=Math.round(Math.random()*(Onum-1));
    }
    var numA=[];
    for(var i=0;i<=100;i++){
        numA[i]=num[Math.round(Math.random()*1000)];
    }
    var numB=[];
    for(var i=0;i<=10;i++){
        numB[i]=numA[Math.round(Math.random()*100)];
    }
    var str=numB[Math.round(Math.random()*10)];
    str=String(str);
    var lth=str.length;
    if(lth!=6){
        for(var i=1;i<=(Number(lv.innerHTML)-lth);i++){
            str="0"+str;
        }
    }
    iptNum.value=str;
}
setInterval(function(){
    lv.innerHTML=setNum.value;
    Onum=Math.pow(10,Number(lv.innerHTML));
},1);
window.addEventListener("keypress",function(data){
   if(data.keyCode==13){
    var num=[];
    for(var i=0;i<=1000;i++){
        num[i]=Math.round(Math.random()*(Onum-1));
    }
    var numA=[];
    for(var i=0;i<=100;i++){
        numA[i]=num[Math.round(Math.random()*1000)];
    }
    var numB=[];
    for(var i=0;i<=10;i++){
        numB[i]=numA[Math.round(Math.random()*100)];
    }
    var str=numB[Math.round(Math.random()*10)];
    str=String(str);
    var lth=str.length;
    if(lth!=6){
        for(var i=1;i<=(Number(lv.innerHTML)-lth);i++){
            str="0"+str;
        }
    }
    iptNum.value=str;
   }
   console.log("你按下了"+data.key+"键！")
});
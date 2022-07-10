var code = document.querySelector(".code");
var encode = document.querySelector(".encode");
var coding = document.querySelector(".coding");
var encoding = document.querySelector(".encoding");
var pai="3141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949129833673362440656643086021394946395224737190702179860943702770539217176293176752384674818467669405132000568127145263560827785771342757789609173637178721468440901224953430146549585371050792279689258923542019956112129021960864034418159813629774771309960518707211349999998372978049951059731732816096318595024459455346908302642522308253344685035261931188171010003137838752886587533208381420617177669147303598253490428755468731159562863882353787593751957781857780532171226806613001927876611195909216420198938095257201065485863278865936153381827968230301952035301852968995773622599413891249721775283479131515574857242454150695950829533116861727855889075098381754637464939319255060400927701671139009848824012858361603563707660104710181942955596198946767837449448255379774726847104047534646208046684259069491293313677028989152104752162056966024058038150193511253382430035587640247496473263914199272604269922796782354781636009341721641219924586315030286182974555706749838505494588586926995690927210797509302955321165344987202755960236480665499119881834797753566369807426542527862551818417574672890977772793800081647060016145249192173217214772350141441973568548161361157352552133475741849468438523323907394143334547762416862518983569485562099219222184272550254256887671790494601653".split("");

coding.onclick = function (){
    if(encode.value != ""){
        var turn = ec(encode.value);
        code.value = turn;
    }else{
        alert("明文不得为空!");
        code.value = "";
        encode.value = "";
    }
}
/*
    函数参数:"加密"按钮点击事件
    函数参数:无
    返回参数:无
*/

encoding.onclick = function (){
    if(code.value != ""){
        var turn = dc(code.value);
        encode.value = turn;
    }else{
        alert("密文不得为空!");
        code.value = "";
        encode.value = "";
    }
}
/*
    函数参数:"解密"按钮点击事件
    函数参数:无
    返回参数:无
*/

function ec(str){
    var Arr = new Array();
    var Arr1 = new Array();
    var lth = str.length;
    var rnd = Math.round(Math.random()*8)+1;
    for(var a = 1;a <= lth;a++){
        Arr.push(str.slice(a - 1,a));
        if(Arr[a - 1].charCodeAt(0) > 255){
            alert("请勿输入非法字符串!");
            code.value = "";
            encode.value = "";
            return "";
        }
        Arr1[a - 1] = Number(Number(Arr[a - 1].charCodeAt(0)) + Number(pai[rnd + a - 1]));
    }
    var Arr2 = tmc(Arr1, 10, 16);
    var str1 = Arr2.join("");
    str1 = String(rnd) + str1;
    return str1;
}
/*
    函数参数:加密
    函数参数:要加密的字符串
    返回参数:加密后的字符串
*/

function dc(str){
    var Arr = new Array();
    var rnd = Number(str.substr(0,1));
    var str1 = str.substr(1);
    for(var a = 0; a <= str.length - 2; ){
        Arr[(a + 2) / 2] = str1.slice(a,a+2);
        a = a + 2;
    }
    var Arr1 = tmc(Arr, 16, 10);
    var Arr2 = new Array();
    for(var a = 1; a <= Arr1.length - 1; a++){
        Arr2[a] = String.fromCharCode(Number(Arr1[a]) - Number(pai[rnd + a - 1]));
    }
    var str2 = Arr2.join("");
    return str2;
}
/*
    函数参数:解密
    函数参数:要解密的字符串
    返回参数:解密后的字符串
*/

function tmc(num, start, end){
    var iA = Array.isArray(num);
    var Arr = new Array();
    var result = 0;
    if (start == 2){
        if (iA == true){
            for(var a = 0;a <= num.length - 1;a++){
                var temp = parseInt(num[a], 2);
                Arr[a] = temp.toString(end);
            }
        }else{
            var temp = parseInt(num, 10);
            result = temp.toString(end);
        }
    }else if (start == 8){
        if (iA == true){
            for(var a = 0;a <= num.length - 1;a++){
                var temp = parseInt(num[a], 8);
                Arr[a] = temp.toString(end);
            }
        }else{
            num = parseInt(num, 10);
            result = num.toString(end);
        }
    }else if (start == 10){
        if (iA == true){
            for(var a = 0;a <= num.length - 1;a++){
                var temp = parseInt(num[a], 10);
                Arr[a] = temp.toString(end);
            }
        }else{
            result = num.toString(end);
        }
    }else if (start == 16){
        if (iA == true){
            for(var a = 0;a <= num.length - 1;a++){
                var temp = parseInt(num[a], 16);
                Arr[a] = temp.toString(end);
            }
        }else{
            num = parseInt(num, 10);
            result = num.toString(end);
        }
    }
    if (iA == true){
        return Arr;
    }else{
        return result;
    }
}
/*
    函数参数:进制转换
    函数参数:转换前的数值 数值进制 转换进制
    返回参数:转换后的数值
*/
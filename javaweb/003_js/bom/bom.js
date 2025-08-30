var str = "";
var flag = true;
window.onload = function () {

    var btn = document.getElementById("btn1");
    var div1 = document.getElementById("div1");
    var count1 = 1;
    div1.onclick = btn.onclick = function () {
        flag = true;
        count1++;
        if (count1 == 1) {
            div1.style.backgroundColor = "red";
        } else if (count1 == 2) {
            div1.style.backgroundColor = "green";
        } else if (count1 == 3) {
            div1.style.backgroundColor = "blue";
            count1 = 0;
        }
    }
    document.body.onkeyup = function (event) {
        var key = event.key;
        var count2 = parseInt(key);
        if (flag == true) {
            if (count2 == 1) {
                div1.style.backgroundColor = "red";
            } else if (count2 == 2) {
                div1.style.backgroundColor = "green";
            } else if (count2 == 3) {
                div1.style.backgroundColor = "blue";
                count2 = 0;
            } else {
                str = "#";
                flag = false;
            }
        } else {
            if (str.length <= 6) {
                str += key;
            } else {
                str = "#";
            }
            if (str.length == 7) {
                div1.style.backgroundColor = str;
                flag = true;
            }
        }

        console.log(str);
    }
}

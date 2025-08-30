function checkUsername() {
    var reg = /^[a-zA-Z0-9]{5,10}$/
    var usernameInput = document.getElementById("usernameInput");
    var str = usernameInput.value;
    var usernameMsg = document.getElementById("usernameMsg");
    var key = reg.test(str);
    if (!key && str != "") {
        usernameMsg.style.color = "red";
        usernameMsg.innerText = "用户名格式有误"
        return false;
    } else if (str == "") {
        usernameMsg.style.color = "red";
        usernameMsg.innerText = "不能为空";
        return false;
    } else {
        usernameMsg.style.color = "green";
        usernameMsg.innerText = "OK";
        return true;
    }
}

function checkUserPwd() {
    var reg = /^[0-9]{6}$/
    var userPwdInput = document.getElementById("userPwdInput");
    var str = userPwdInput.value;
    var userPwdMsg = document.getElementById("userPwdMsg");
    var key = reg.test(str);
    if (!key && str != "") {
        userPwdMsg.style.color = "red";
        userPwdMsg.innerText = "密码必须是6位数字"
        return false;
    } else if (str == "") {
        userPwdMsg.style.color = "red";
        userPwdMsg.innerText = "不能为空";
        return false;
    } else {
        userPwdMsg.style.color = "green";
        userPwdMsg.innerText = "OK";
        return true;
    }
}

function checkForm() {
    var flag1 = checkUsername()
    var flag2 = checkUserPwd()

    return flag1 && flag2
}

function resetText() {
    var usernameMsg = document.getElementById("usernameMsg");
    var userPwdMsg = document.getElementById("userPwdMsg");
    usernameMsg.innerText = "";
    userPwdMsg.innerText = "";
}

function recheckUserPwd() {
    var userPwdInput = document.getElementById("userPwdInput");
    var reuserPwdInput = document.getElementById("reuserPwdInput");
    var userPwdInputStr = userPwdInput.value;
    var reuserPwdInputStr = reuserPwdInput.value;
    var reuserPwdMsg = document.getElementById("reuserPwdMsg");
    var key = (userPwdInputStr == reuserPwdInputStr);
    if (!key && reuserPwdInputStr != "") {
        reuserPwdMsg.style.color = "red";
        reuserPwdMsg.innerText = "两次密码不一致"
        return false;
    } else if (reuserPwdInputStr == "") {
        reuserPwdMsg.style.color = "red";
        reuserPwdMsg.innerText = "不能为空";
        return false;
    } else {
        reuserPwdMsg.style.color = "green";
        reuserPwdMsg.innerText = "OK";
        return true;
    }
}

function checkFormr() {
    var flag1 = checkUsername()
    var flag2 = checkUserPwd()
    var flag3 = recheckUserPwd()

    return flag1 && flag2 && flag3;
}

function resetTextr() {
    var usernameMsg = document.getElementById("usernameMsg");
    var userPwdMsg = document.getElementById("userPwdMsg");
    var reuserPwdMsg = document.getElementById("reuserPwdMsg");
    usernameMsg.innerText = "";
    userPwdMsg.innerText = "";
    reuserPwdMsg.innerText = "";
}
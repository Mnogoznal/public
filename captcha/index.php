<?php 

if ($_POST['enter'] and $_POST['text'] and $_POST['captcha']) {
$_POST['text'] = FormChars($_POST['text']);

$_POST['captcha'] = FormChars($_POST['captcha']);
if ($_SESSION['captcha'] != md5($_POST['captcha'])) MessageSend(1, 'Капча введена не верно.');
mysqli_query($CONNECT, "INSERT INTO `chat`  VALUES ('', '$_POST[text]', '$_SESSION[USER_LOGIN]', NOW())");
Location('/feedback');

}

// Крч. если капча будет введена не верно то сообщение не отправится

<textarea class="ChatMessage" name="text" placeholder="Текст сообщения" required></textarea>
<div class="capdiv"><input type="text" class="capinp" name="captcha" placeholder="Капча" maxlength="10" pattern="[0-9]{1,5}" title="Только цифры." required> <img src="/resource/captcha.php" class="capimg" alt="Каптча"></div>
<br><input type="submit" name="enter" value="Отправить"> <input type="reset" value="Очистить">

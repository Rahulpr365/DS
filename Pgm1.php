<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Find the Largest Number</title>
</head>
<body>
    <form method="post">
        <input type="text" name="num1" placeholder="Number 1"><br><br>
        <input type="text" name="num2" placeholder="Number 2"><br><br>
        <input type="text" name="num3" placeholder="Number 3"><br><br>
        <input type="submit" value="Find">
    </form>
</body>
</html>
<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $num3 = $_POST['num3'];

    if (is_numeric($num1) && is_numeric($num2) && is_numeric($num3)) {
        $largest = max($num1, $num2, $num3);
        echo "The largest number is: $largest";
    } else {
        echo "Please enter valid numbers.";
    }
} else {
    echo "Invalid request method.";
}
?>

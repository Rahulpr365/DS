<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Odd-Even</title>
</head>
<body>
    <form method="post">
        <input type="text" name="num"><br><br>
        <input type="submit" value="Check" name="check">
    </form>

    <?php
    if (isset($_POST['check'])) {
        $n = $_POST['num'];
        if ($n % 2 == 0) {
            echo "$n IS EVEN";
        } else {
            echo "$n IS ODD";
        }
    }
    ?>
</body>
</html>

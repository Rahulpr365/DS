<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial Calculation</title>
</head>
<body>
    <form method="post">
        <input type="text" name="n" placeholder="Enter a number"><br><br>
        <input type="submit" value="FACTORIAL" name="fact">
    </form>

    <?php
    if (isset($_POST['fact'])) {
        $f = 1;
        $num = $_POST['n'];
        for ($i = $num; $i > 0; $i--) {
            $f = $f * $i;
        }
        echo "Factorial = $f";
    }
    ?>
</body>
</html>

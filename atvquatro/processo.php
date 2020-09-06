<!DOCTYPE html>
<html>
<head>
	<title>Processamento de Dados</title>
	<meta http-equiv="Content-Type">
	<meta charset="utf-8">
</head>
<body>
	<?php  
		$nome= $_POST['Nome'];
		$cpf= $_POST['cpf'];
		$endereco= $_POST['Endereço'];
		$estado= $_POST['listaestados'];
		$DataDeNas= $_POST['DataDeNas'];
		$sexo= $_POST['Sexo'];
		$musica= $_POST['musica'];
		$teatro= $_POST['teatro'];
		$cinema= $_POST['cinema'];
		$informatica= $_POST['informatica'];
		$Login= $_POST['Login'];
		$senha= $_POST['senha'];
		$senha2= $_POST['senha2'];
		$foto= $_FILES['foto'];

		$camposOK = true;

		if($nome==""){
			echo "Informe o seu nome <br>";
			$camposOK= false;
		}
		if($endereco==""){
			echo "Informe o seu endereço <br>";
			$camposOK= false;
		}
		if($senha != $senha2){
			echo "As senhas não conferem <br>";
			$camposOK= false;
		}

		if ($camposOK=true){
			echo "<table border='0'>";
			echo "<tr><td>NOME:</td><td><b>$nome</b></td></tr>";
			echo "<tr><td>CPF:</td><td><b>$cpf</b></td></tr>";			
			echo "<tr><td>ENDEREÇO:</td><td><b>$endereco</b></td></tr>";
			echo "<tr><td>ESTADO:</td><td><b>$estado</b></td></tr>";
			echo "<tr><td>DATA DE NASCIMENTO:</td><td><b>$DataDeNas</b></td></tr>";
			echo "<tr><td>SEXO:</td><td><b>$sexo</b></td></tr>";
			echo "<tr><td>LOGIN:</td><td><b>$Login</b></td></tr>";			
			echo "<tr><td>SENHA:</td><td><b>$senha</b></td></tr>";
			echo "<tr><td>ÁREAS DE INTERESSE:</td><td><b>";
				if($cinema==true){
					echo "Cinema <br>";
				}
				if($musica==true){
					echo "Música <br>";
				}
				if($teatro==true){
					echo "Teatro <br>";
				}
				if($informatica==true){
					echo "Informática <br>";
				}				
				echo "</b></td></tr></table>";
		}

			include'conexao.php';

			mysqli_query($link, "INSERT INTO `users`
			(`nome`, `cpf`, `endereco`, `estado`, `DataDeNas`,
			`sexo`, `musica`, `teatro`, `cinema`, `informatica`, `Login`, `senha`) 
			VALUES 
			('$nome','$cpf','$endereco', '$estado', '$DataDeNas','$sexo','$musica','$teatro',
			'$cinema','$informatica','$Login','$senha')")

	?>
</body>
</html>
function controllo() {
    var email = document.getElementById('email').value;
    var password = document.getElementById('password').value;

    if (email == 'accesso@gmail.com' && password == '1234') {
        var alertVerde = document.createElement('div');
        alertVerde.classList.add('alert', 'alert-success', 'mt-3');
        alertVerde.innerText = 'Accesso riuscito!';
        document.body.appendChild(alertVerde);

        setTimeout(function(){
            window.location.href = 'html/datiOutput.html';
        }, 10000);
        return true;

    } else {
        var alertRosso = document.createElement('div');
        alertRosso.classList.add('alert', 'alert-danger', 'mt-3');
        alertRosso.innerText = 'Accesso errato';
        document.body.appendChild(alertRosso);
        return false; 
    }   
}



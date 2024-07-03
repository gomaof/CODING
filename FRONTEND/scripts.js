$(document).ready(function() {
    $("#newUser").click(function() {
        $("#registrationForm").show();
        $("#loginForm").hide();
    });

    $("#existingUser").click(function() {
        $("#registrationForm").hide();
        $("#loginForm").show();
    });

    $("#registrationForm").submit(function(event) {
        if ($("#fullName").val() === "" || $("#cep").val() === "" || $("#email").val() === "" || $("#password").val() === "") {
            alert("Todos os campos são obrigatórios.");
            event.preventDefault();
        }
    });

    $("#loginForm").submit(function(event) {
        if ($("#loginEmail").val() === "" || $("#loginPassword").val() === "") {
            alert("Todos os campos são obrigatórios.");
            event.preventDefault();
        }
    });
});

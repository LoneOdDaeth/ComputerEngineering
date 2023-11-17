var words = ["JAVASCRIPT", "HTML", "CSS", "PROGRAMMING", "DEVELOPMENT"];
var selectedWord = words[Math.floor(Math.random() * words.length)];
var displayWord = "_".repeat(selectedWord.length);
var wordDisplayElement = document.getElementById("wordDisplay");
var guessInputElement = document.getElementById("guessInput");
var messageElement = document.getElementById("message");
var remainingAttemptsElement = document.getElementById("remainingAttempts");
var remainingAttempts = 6;

wordDisplayElement.textContent = displayWord;

function guessLetter() {
    var guessedLetter = guessInputElement.value.toUpperCase();

    if (guessedLetter.length === 1 && guessedLetter.match(/[A-Z]/)) {
        if (selectedWord.includes(guessedLetter)) {
            for (var i = 0; i < selectedWord.length; i++) {
                if (selectedWord[i] === guessedLetter) {
                    displayWord = displayWord.substr(0, i) + guessedLetter + displayWord.substr(i + 1);
                }
            }

            wordDisplayElement.textContent = displayWord;

            if (!displayWord.includes("_")) {
                messageElement.textContent = "Tebrikler! Kazandınız.";
                disableInputAndButton();
            }
        } else {
            remainingAttempts--;
            remainingAttemptsElement.textContent = remainingAttempts;
            if (remainingAttempts === 0) {
                messageElement.textContent = "Üzgünüm, kaybettiniz. Doğru kelime: " + selectedWord;
                disableInputAndButton();
            } else {
                messageElement.textContent = "Yanlış tahmin. Tekrar deneyin.";
            }
        }
    } else {
        messageElement.textContent = "Lütfen geçerli bir harf girin.";
    }

    guessInputElement.value = "";
}

function restartGame() {
    selectedWord = words[Math.floor(Math.random() * words.length)];
    displayWord = "_".repeat(selectedWord.length);
    wordDisplayElement.textContent = displayWord;
    guessInputElement.value = "";
    messageElement.textContent = "";
    remainingAttempts = 6;
    remainingAttemptsElement.textContent = remainingAttempts;
    enableInputAndButton();
}

function disableInputAndButton() {
    guessInputElement.disabled = true;
    document.querySelector("button").disabled = true;
}

function enableInputAndButton() {
    guessInputElement.disabled = false;
    document.querySelector("button").disabled = false;
}
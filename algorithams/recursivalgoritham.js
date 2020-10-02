var rps = function (rounds) {
  var result = [];
  var possiblevalue = ["r", "p", "s"];

  var play = function (playfor, rounds) {
    if (rounds === 0) {
      result.push(playfor);
      return;
    }
    for (var i = 0; i < 3; i++) {
      play(playfor + possiblevalue[i], rounds - 1);
    }
  };

  play("", rounds);
  return result;
};

var hu = rps(2);
hu;

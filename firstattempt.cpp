class App {
  async run() {
    var amy = new Person("Amy", 20);
    // * Async/Await
    var message = await amy.notify();
    console.log(`${message}: ${amy.name}`);
    // * Destructuring
    var { name, age } = amy;
    // * Array initialization
    var friends = ["Anish", "Landry"];
    amy.invite(
      (f) => {
        console.log(`Invited ${f}`)
      },
      friends
    );
// put the rest here
    function log() {
      console.log("Completed!");
    }

    log();

    // * Arrow style
    var trace = () => console.log("Done");
    trace();

    var thomas = new Person("Thomas", 36);
//3 line unerneath are broken
  //  var outer = () => {
     // var { name, age } = thomas;
     // console.log(name);

      var inner = () => {
        trace();
        console.log("Inner");
        return "Hello from inner()";


          var local = (msg) =>
        console.log(msg);

      local("Local!");
    }

    outer();
  }
}

var app = new App();
(async () => await app.run())();

import React, { children, useState } from "react";  

//simple button
const Button = ({children, props}) => {
    return (
        <button>{children}</button>
    )
};


//how to build a simple counter
const Counter = () => {
    const [counter, setCounter] = useState(0);
    return (
        <div>
        <p>youve clicked the button {counter} times</p>
        <button onClick={()=> setCounter(counter + 1)}>click me</button>
        </div>
    )
};

export default Counter;



//form handling
const Form = () => {
    const [dataForm, setDataFrom] = useState({
        name: '',
        email: '',
        password: ''
    })
};
      const HandleChange = (e) => {
        const [name, value] = e.target;
        setDataFrom({...dataForm, [name]: value});
    
      };
      
      
      
      const HandleSubmit = (e) => {
        e.preventDefualt();
        alert(`submitted a name: ${dataForm.name} and email: ${dataFrom.email}`)
      };
return (
    <form onSubmit={handleSubmit}>
        <input type="text" name="name" value={dataForm.name} onChange={handleChange}></input>
        <input type="text" name="email" value={dataForm.name} onChange={handleChange}></input>
        <input type="text" name="password" value={dataForm.name} onChange={handleChange}></input>
    </form>
    
)


//how to make a simple toggel switch
const Toggle = () => {
    const [isOn, setIsOn] = useState(false);
    return (
        <div className="toggle">
            <button onClick={() => setIsOn(!isOn)}>
            {isOn ? 'Turn off' : "turn on"}
            </button>
            {isOn && <p>the swith is on</p>}
        </div>
    )

};




const App = () => {

    <div>
        <Button onClick={()=> alert('clicked')}>Click Me!!!!</Button>
        <Counter />
    </div>


};
export default App;
import React, { children, useState } from "react";  

//simple button
const Button = ({children, onClick}) => {
    return (
        <button onClick={onClick}>
            {children}
        </button>
    )
}


//how to build a simple counter
const Counter = () => {
        const [count, setCount] = useState(0);
        return (
            <div className="tailwind">
              <button onclick={()=> setCount(count + 1)}/>Click me</button>  
            </div>
        );
    };
//form handling
const Form = () => {
    const [name, setName] = useState('');
    const handleChange = (e) => {
        setName(e.target.value)
    }
    handleSubmit = (e) => {
        e.preventDefault();
        alert('form submitted with a name: ${name}')
    }
    return (
        <form onSubmit={handleSubmit}>
            <label>
                name:
                <input type="text" value={name} onchange={handleChange} />
                <button type="submit">submit</button>
            </label>
        </form>
    )
}


//how to make a simple toggel switch
const Toggle = () => (
    const [isOn, setIsOn] = useState(false);
    return (
        <div className="toggle">
            <button onClick={() => setIsOn(!isOn)}>
            {isOn ? 'Turn off' : "turn on"}
            </button>
            {isOn && <p>the swith is on</p>}
        </div>
    )

);




const App = () => {

    <div>
        <Button onClick={()=> alert('clicked')}>Click Me!!!!</Button>
        <Counter />
    </div>


};
export default App;
import React, { children, useState } from "react";  

//simple button
const Button = ({children, onClick}) => {
    return (
        <button onClick={onClick}></button>
    )

}


//how to build a simple counter
const Counter = () => {
    const [counter, setCounter] = useState(0)
    return (
        <div>
            <p>you clicked counter {counter} times</p>
            <button onClick={()=> setCounter(counter + 1)}>click me</button>
        </div>
    )
}

export default Counter;



//form handling
const Form = () => {
    const [dataForm, setDataForm] = useState({
        name: '',
        email: '',
        password:
''    })
}
return (
    <
)


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
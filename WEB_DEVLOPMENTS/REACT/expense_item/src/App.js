import Expenses from "./Components/Expenses";
import React,{useState} from "react";
import NewExpense from "./Components/NewExpense/NewExpense";
const App=()=>{
    let DUMMY_EXPENSE=[
        {
            id: 'e1',
            title: 'Anjali Birthday',
            amount:11410814,
            date: new Date(2022,9,28)
        },
        {
            id: 'e2',
            title: 'Ali ',
            amount:1129,
            date: new Date(2022,3,5)
        },
        {
            id: 'e3',
            title: 'Sameer Birthday',
            amount:786,
            date: new Date(2022,3,5)
        },
        {
            id: 'e4',
            title: 'Heena Birthday',
            amount:1100,
            date: new Date(2022,7,18)
        }
    ];
            const [expenses,setExpenses]=useState(DUMMY_EXPENSE);

          const addExpenseHandler=(expense)=>{
            const updateExpense=[expense,...expenses];
            setExpenses(updateExpense);
          };
    return (
        <div>
            <NewExpense onAddExpense={addExpenseHandler}/>
        <Expenses item={expenses}/>
        </div>
    );
}

export default App;
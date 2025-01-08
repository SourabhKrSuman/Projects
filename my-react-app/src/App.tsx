import React from 'react';
import './App.tsx';
import Login from './components/Login';
import './styles/App.css';

const App: React.FC = () => {
  return (
    <div className="App">
      <h1>Welcome to My React App</h1>
      <Login />
    </div>
  );
};

export default App;
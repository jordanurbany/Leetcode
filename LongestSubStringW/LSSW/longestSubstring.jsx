import React, { useState } from 'react';

function LongestSubstring () => {
  const [input, setInput] = useState('');
  const [result, setResult] = useState(0);

  function lengthOfLongestSubstring(s) {
    const n = s.length;
    let maxLength = 0;
    const charSet = new Set();
    let left = 0;

    for (let right = 0; right < n; right++) {
      // Using the equivalent of `charSet.count(s[right]) == 0`
      // in c++ 'use the has method in javascript'
      if (!charSet.has(s[right])) {
        charSet.add(s[right]);
        maxLength = Math.max(maxLength, right - left + 1);
      } else {
        while (charSet.has(s[right])) {
          charSet.delete(s[left]);
          left++;
        }
        charSet.add(s[right]);
      }
    }

    return maxLength;
  }

  const handleSubmit = (e) => {
    e.preventDefault();
    setResult(lengthOfLongestSubstring(input));
  };

  return (
    <div>
      <h1>Longest Substring Without Repeating Characters</h1>
      <form onSubmit={handleSubmit}>
        <input
          type="text"
          value={input}
          onChange={(e) => setInput(e.target.value)}
          placeholder="Enter a string"
        />
        <button type="submit">Calculate</button>
      </form>
      <h2>Length of Longest Substring: {result}</h2>
    </div>
  );
}

export default LongestSubstring;


function LongestSubsrting() {

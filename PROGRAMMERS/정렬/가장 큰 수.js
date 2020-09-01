function test(numbers)
{
  var answer = numbers.map(v => v + '');
  answer = answer.sort((a, b) => (b+a) - (a+b));
  answer = answer.join('');
  return answer[0] === '0' ? '0' : answer;
}

//reduce를 사용한 방법
//toString() 과 parseInt()를 사용한 방법 존재
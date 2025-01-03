# SCC_CH2-3
## custom vector 클래스
### 필수 기능 (Essential/SimpleVector.h)
* 템플릿을 사용한 custom vector 클래스
* 기본 생성자는 크기가 10인 배열을 생성, 인자가 있는 생성자는 해당 숫자크기의 배열 생성(이때 생성자는 1개만 구현)
* 함수 구현
  * PushBack : 배열 맨 뒤 데이터 삽입
  * PopBack : 배열 마지막 요소 삭제
  * GetSize : 배열의 크기 반환
  * GetCapacity : 배열의 용량 반환
  * Print : 전체 배열 출력
</div>
</div>

### 도전 기능 (Challenge/SimpleVector_v2.h)
* 필수 기능에 추가적인 구현
* 복사 생성자 구현
* 함수 개선
  * PushBack에서 배열이 꽉 찬 경우 배열을 늘려주는 기능 구현
* 함수 구현
  * Resize : 정수를 인자로 받아 해당 정수가 배열의 크기보다 큰 경우 배열을 재할당
  * SortData : 배열 정렬

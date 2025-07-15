# 보안제품개발 서민재 sun-nbo 과제 제출

# 영상
[깃허브 영상 링크](https://github.com/BoB-14th-smj/sum-nbo/blob/main/%EB%B3%B4%EC%95%88%EC%A0%9C%ED%92%88%EA%B0%9C%EB%B0%9C-%EC%84%9C%EB%AF%BC%EC%9E%AC-sum-nbo.mp4)  
[유튜브 영상 링크](https://youtu.be/Hm6aCrKRaUU)

## 0:00 ~ 0:12 
- make clean 및 make
  
## 0:10 ~ 0:16 
- 정상 입력 확인
  ```bash
  ./sum-nbo thousand.bin five-hundred.bin two-hundred.bin

## 0:20 ~ 0:30
- 파일 1개씩 open 실패했을 경우 확인
  ```bash
  ./sum-nbo thousand.bin five-hundred.bin two-hundred.bi
  ./sum-nbo thousand.bin five-hundred.bi two-hundred.bin
  ./sum-nbo thousand.bi five-hundred.bin two-hundred.bin

## 0:30 ~ 0:35
- 파일 전부 open 하지 못했을 때
  ```bash
  ./sum-nbo thousand.bi five-hundred.bi two-hundred.bi

-> CAN'T CALC!! 출력

## 0:35 ~ 0:42
- 파일 1개만 open 실패했을 경우 확인
  ```bash
  ./sum-nbo thousand.bi five-hundred.bin two-hundred.bi
  ./sum-nbo thousand.bi five-hundred.bi two-hundred.bin

## 0:42 ~ 0:50
- 입력 매개변수 없음
  ```bash
    ./sum-nbo
-> lack argu 출력

# 0:50 ~     
- 정상 입력 확인
  ```bash
    ./sum-nbo thousand.bin five-hundred.bin two-hundred.bin




**참고자료**
- C언어 파일 입출력 : https://velog.io/@qlwb7187/C%EC%96%B8%EC%96%B4-%ED%8C%8C%EC%9D%BC-%EC%9E%85%EC%B6%9C%EB%A0%A52


*일체 AI활용 없었음을 맹세합니다*

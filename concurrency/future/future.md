std:future, standart _/<future>_ başlık dosyasında tanımlanmış bir sınıf şablonu. (C++11)
Bir operasyonun sonucunu temsil ediyor. (Ya çalıştırılacak bir fonksiyonun geri dönüş değeri ya da çalıştırılacak fonksiyondan gönderilecek exception. Ama ikisi birden değil)

```
template <class T> class future; 

template <class T > class future<T&>;  //partial specialization

template<> class future<void>; //void türü için explicit specialization 

```

Sonuç bir _shared state_ içinde tutuluyor. <br>
Bu shared state 
+ std::async fonksiyonu tarafından
+ std::packaged_task tarafından
+ std::promise tarafından
  
oluşturulmuş olabilir. std::future nesnesi oluşturulduğubnda onun tutacağı sonuç henüz hazır olmayabilir. Gelecekte olulşacakl bir sonucu tutmak için olanaklara sahiğp.
  
 sonuö sadece bir kez get edilebilir.

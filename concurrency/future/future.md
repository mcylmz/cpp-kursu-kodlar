std:future, standart _/<future>_ başlık dosyasında tanımlanmış bir sınıf şablonu. (C++11)
Bir operasyonun sonucunu temsil ediyor. (Ya çalıştırılacak bir fonksiyonun geri dönüş değeri ya da çalıştırılacak fonksiyondan gönderilecek exception. Ama ikisi birden değil)

```
template <class T> class future; 

template <class T > class future<T&>;  //partial specialization

template<> class future<void>; //void türü için explicit specialization 

```

Sonuç bir _shared state_ içinde tutuluyor. Bu shared state 
+ std::async fonksiyonu tarafından
+ std::packaged_task tarafından
+ std::promise tarafından
  
oluşturulmuş olabilir. _std::future_ nesnesi oluşturulduğubnda onun tutacağı sonuç henüz hazır olmayabilir. Gelecekte olulşacakl bir sonucu tutmak için olanaklara sahip.
  
  
Sonuç sadece bir kez _get_ edilebilir. Bir kez _get()_ fonksiyonu çağrıldıktan sonra _future_ nesnesi geçersiz hale gelir. <br>
Geçersiz bir future nesnei için sadece 
+ destructor
+ valid()
+ move assignment

işlevleri çağrılabilir. Başka bir işlevin çağrılması tanımsız davranıştır.

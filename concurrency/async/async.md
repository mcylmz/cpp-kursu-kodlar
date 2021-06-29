Fonksiyonun basitleştirilmiş bildirimi şöyle:

```
future asynch(std::launch, F func, args...);
```

Birinci parametre launch policy. <br>
enum class launch. (bitsel işlemlere uygun tür)


## Bu parametreye std::launch::async geçilirse
+ func fonksiyonunu args argümanları ile asenkron olarak başlatmaya çalışır. (paralel thread olarak). 
+ func asenkron olarak çalıştırılamaz ise system_error sınıfı türünden bir hata gönderilir.
  + Gönderilen hata kodu std::errc::resource_unavailable_try_again 
+ Program anormal sonlandırılmadıkça (abort) başlatılan thread program sonlanmadan önce mutlaka bitirilir.
+ Thread nasıl sonlanır?
  + geri döndürülen future nesnesinin get fonksiyonu çağrıldığında
  + geri döndürülen future nesneninin wait fonksiyonu çağrıdlığında



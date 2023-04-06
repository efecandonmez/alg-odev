# alg-odev
 
 1.Soru - Kodun amacı img1 ve img2 olarak adlandırdığımız iki farklı matris arasındaki benzerliği ölçerek, img1'i, img2'ye en uygun şekilde hizalamak için kullanılır. img1 ve img2 isimli iki adet N x N boyutunda ikili matris (binary matrix) tanımlanmıştır. Bu matrisler, iki adet farklı görüntüyü temsil etmektedir.print_images isimli fonksiyon yardımıyla img1 ve img2 matrisleri ekrana yazdırılır. Ardından, find_best_fit isimli bir fonksiyon tanımlanmıştır. Bu fonksiyon, img1 matrisini tüm yönlere (sol, sağ, yukarı, aşağı) kaydırarak img2 matrisine en çok benzeyen matrisi bulmaktadır. Bu işlem, nested for döngüleri kullanılarak gerçekleştirilmektedir. Kodun main fonksiyonunda ise, öncelikle img1 ve img2 matrisleri belirtilerek, print_images fonksiyonu kullanılarak bu matrisler ekrana yazdırılmaktadır. Daha sonra, find_best_fit fonksiyonu kullanılarak en uygun kaydırma işlemi bulunmakta ve sonuç ekrana yazdırılmaktadır.
 Ve bu sayede img1 ve img2 matrislerini en uygun şekilde hizalarız.
 
 
 
 2.Soru - Bu kodun amacı ise bir dizinin toplamları eşit iki alt kümeye bölünüp bölünemeyeceğini kontrol eder. İlk önce, bir alt kümedeki elemanların toplamını hesaplayan "subset_sum" fonksiyonunu tanımlarız. "subset_sum" fonksiyonu, bir dizinin herhangi bir alt kümesinin belirli bir toplama eşit olup olmadığını hesaplar. Bu hesaplama, "dp" adlı bir iki boyutlu dizi kullanılarak gerçekleştirilir. İlk olarak, "dp" dizisi sıfırlarla doldurulur. Daha sonra, sıfırıncı satırın tüm elemanları 1 olarak ayarlanır çünkü herhangi bir alt küme toplamı sıfır olabilir. Ancak, sıfırıncı sütunun tüm elemanları sıfır olarak ayarlanır çünkü herhangi bir alt küme toplamı sıfırdan büyük olmalıdır. Son olarak, diğer hücreler, önceki satırın aynı sütunundaki değerle veya önceki satırın toplamı eksi mevcut elemanla aynı sütundaki değerle hesaplanır. Daha sonra, "can_be_divided" adlı ana işlev tanımlanır. Bu fonksiyon, dizinin toplamını hesaplar ve toplamının ikiye bölünüp bölünemeyeceğini kontrol eder. Eğer dizinin toplamı tek sayı ise, dizi ikiye bölünemez ve bu durumda program, "0" değerini döndürür. Eğer toplam çift sayı ise, "subset_sum" fonksiyonu, dizinin iki alt kümeye bölünüp bölünemeyeceğini hesaplamak için çağrılır. Eğer iki alt kümenin toplamı eşit ise, bu durumda program "1" değerini döndürür ve dizinin iki alt kümede eşit şekilde bölünebildiği sonucu çıkarılır. Ana işlevde, "arr" adlı bir dizi tanımlanır ve "n" adlı değişken, dizinin boyutunu saklar. Ardından, "can_be_divided" fonksiyonu çağrılır ve sonuç, ekrana yazdırılır. Eğer sonuç "1" ise, dizi iki alt kümede eşit şekilde bölünebilir, aksi takdirde dizi iki alt kümeye bölünemez.
 

# kapalı kapılar programının çözüm algoritması kodu. tam kare olanlar açık kalıyor
def locker_problem(n):
    open_lockers = []
    for i in range(1, int(n**0.5) + 1):  # Her dolabın açık/kapalı olma durumu matematiksel olarak incelenir
        open_lockers.append(i * i)
    return open_lockers

def main():
    n = int(input("Dolap sayisi giriniz: "))
    open_lockers = locker_problem(n)
    print("acik dolaplar:", open_lockers)
    print("Toplam acik dolap sayisi:", len(open_lockers))

if __name__ == "__main__":
    main()

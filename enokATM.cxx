#include <stdio.h>
#include <stdlib.h>

int  main () {
    printf ( " Assalamualaikum \n " );
    printf ( " Selamat datang di Bank Indonesia Jaya Syariah \n " );
    printf ( " Silahkan masukkan kartu ATM anda \n " );
    printf ( " ========================== \n " );
    // Inisialisasi PIN awal
    int pin = 252525 ;
    // Inisialisasi saldo awal
    float saldo = 1000000 ;
    // Inisialisasi variabel-variabel lain yang dibutuhkan
    int pilihan, login_attempt = 0 ;
    int transfer_account_number;
    int id_pelanggan;
    int nomor_ponsel;
    float jumlah_transfer, top_up_dana, top_up_gopay, token_listrik, isi_pulsa,top_up_ovo, jumlah_penarikan;

    // Loop while untuk mengulang login hingga maksimal 3 kali percobaan
    while (login_attempt < 3 ) {
        // permintaan pengguna memasukkan PIN
        int input_pin;
        printf ( " Masukkan PIN anda: " );
        scanf ( "%d" , &input_pin);
        
        // Jika PIN benar, tampilkan menu opsi
        if (input_pin == pin) {
            printf ( " Login berhasil! \n " );
            while ( 1 ) {
                printf ( "\nMenu Transaksi\n");
                printf ("1. Info Saldo\n");
                printf ("2. Isi Saldo\n");
                printf ("3. Tarik Tunai\n");
                printf ("4. Transfer\n");
                printf ("5. Isi Ulang\n");
                printf ("6. Keluar\n");
                printf ("Pilih Transaksi:");
                scanf ( "%d", &pilihan);
                
                // Ganti case untuk setiap opsi pada menu
                switch (pilihan) {
                    case  1 :
                        printf ( "Saldo anda adalah: %.2f\n", saldo);
                        break ;
                    case  2 :
                        printf ( " Masukkan jumlah deposit:" );
                        float jumlah_setoran;
                        scanf ("%f" , &jumlah_setoran);
                        saldo += jumlah_setoran;
                        printf ("isi Saldo berhasil. Saldo anda: %.2f\n" , saldo);
                        break ;
                    case  3 :
                        printf ( " Masukkan jumlah Tarik Tunai: " );
                        scanf( "%f", &jumlah_penarikan);
                        if (jumlah_penarikan > saldo) {
                            printf ( " Maaf saldo anda tidak mencukupi. \n " );
                        } else {
                            saldo -= jumlah_penarikan;
                            printf ( " Transaksi berhasil. Saldo saldo anda: %.2f \n " , saldo);
                        }
                        break ;
                    case  4 :
                        printf ("Masukkan No Rekening Tujuan:");
                        scanf ("%d",&transfer_account_number);
                        printf ("Masukkan jumlah transfer: ");
                        scanf ("%f", &jumlah_transfer);
                        if (jumlah_transfer > saldo){
                            printf ("Maaf saldo anda tidak mencukupi.\n");
                        } else {
                            saldo -= jumlah_transfer;
                            printf ( " Transaksi berhasil. sisa saldo anda: %.2f \n " , saldo);
                        }
                        break ;
                    case  5 :
                        printf ("Menu isi pulsa\n");
                        printf ("1. Isi Ulang Dana\n");
                        printf ("2. Isi Ulang Gopay\n");
                        printf ("3. Token Listrik\n");
                        printf ("4. Top Up Ovo\n");
                        printf ("5.Isi Pulsa\n");
                        printf ("Pilih transaksi:");
                        int top_up_choice;
                        scanf ( "%d", &top_up_choice);
                        switch (top_up_choice) {
                            case  1 :
                            printf ("Masukkan No Ponsel:" );
                            scanf ("%d", &nomor_ponsel);
                            printf ("Masukkan jumlah pulsa : ");
                            scanf ("%f", &top_up_dana);
                            if (top_up_dana > saldo){
                            printf ("Maaf saldo anda tidak mencukupi.\n");
} else {
                            saldo -= top_up_dana;
                            printf ("Transaksi berhasil. sisa saldo anda: %.2f\n", saldo);
                        }
                                break ;
                            case  2 :
                             printf ("Masukkan No Ponsel : " );
                            scanf ( "%d" , &nomor_ponsel);
                            printf ( " Masukkan jumlah pulsa : " );
                            scanf ( "%f" , &top_up_gopay);
                            if (top_up_gopay > saldo){
                            printf ( " Maaf saldo anda tidak mencukupi. \n " );
                            } else {
                            saldo -= top_up_gopay;
                            printf ( " Transaksi berhasil. sisa saldo anda: %.2f\n " , saldo);
                        }
                                break ;
                            case  3 :
                             printf ( " Masukkan No id pelanggan: " );
                        scanf ( "%d" , &id_pelanggan);
                                printf ( " Masukkan jumlah pulsa: " );
                                scanf ( "%f" , &token_listrik);
                                if (token_listrik > saldo){
                            printf ( " Maaf saldo anda tidak mencukupi. \n " );
                            } else {
                            saldo -= token_listrik;
                            printf ( " Transaksi berhasil. sisa saldo anda: %.2f \n " , saldo);
                        }
                                break ;   
                              case  4 :
                               printf ( " Masukkan No ponsel anda: " );
                        scanf ( "%d" , &nomor_ponsel);
                                printf ( " Masukkan jumlah pulsa: " );
                                scanf ( "%f" , &top_up_ovo);
                                 if (top_up_gopay > saldo){
                            printf ( " Maaf saldo anda tidak mencukupi. \n " );
                            } else {
                            saldo -= top_up_ovo;
                            printf ( " Transaksi berhasil. sisa saldo anda: %.2f \n " , saldo);
                        }
                                break ;  
                              case  5 :
                              printf ( " Masukkan No ponsel anda: " );
                        scanf ( "%d" , &nomor_ponsel);
                                printf ( " Masukkan jumlah pulsa: " );
                                scanf ( "%f" , &isi_pulsa);
                              
                                 if (isi_pulsa > saldo){
                            printf ( " Maaf saldo anda tidak mencukupi. \n " );
                            } else {
                            saldo -= isi_pulsa;
                            printf ( " Transaksi berhasil. sisa saldo anda: %.2f \n " , saldo);
                        }
                                break ;
                            default :
                                printf ( " Pilihan salah \n " );
                                break ;
                        }
                        break ;
                    case  6 :
                        // Keluar dari menu dan kembali ke menu login
                        printf ( " Berhasil keluar \n " );
                        login_attempt = 3 ;
                        break ;
                    default :
                        printf ( " Pilihan salah \n " );
                        break ;
                }
            }
        } else {
            // Jika PIN salah, tampilkan pesan error dan tingkatkan jumlah percobaan
            printf ( " PIN salah. Silahkan coba lagi. \n " );
            login_attempt++;
        }
    }
    // Jika sudah 3 kali percobaan login dan masih gagal, keluar dari program
    if (login_attempt == 3 ) {
        printf ( " Melampaui batas PIN Salah. ATM dikunci. \n " );
    }
    return  0 ;
}
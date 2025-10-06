/*
un contadino recandosi al mercato porta x chili di mele ananas e legna sante
dopo aver fatto le 3 pesate (input) viene aperta la bancarella pronta alla ventita.
sapendo che mele=2.99/kg a=1.55/kg ls=4.55/kg calcola il massimo che il contadino puo guadagnare dalla vendita totale,
dato che la giornata è piovosa vengono solo 2 clienti, ed ognuno di loro effettua la spesa.
per ognuno dei clienti visualizzare lo scontrino finale.
visualizzare quanta merce è rimasta.
*/
#include <iostream>
using namespace std;

int main(){
    // Dichiarazione delle variabili per i pesi, prezzi e totali
    float pm,pa,pc,totp,totg,km1,ka1,kc1,pm1,pa1,pc1,totspeso1,km2,ka2,kc2,pm2,pa2,pc2,totspeso2;
    // Prezzi al kg delle varie merci (costanti)
    const float cm=2.99,ca=1.55,cc=4.55;
    // Input peso mele
    cout << "Inserire il peso delle mele: ";
    cin >> pm;
    // Input peso ananas
    cout << "Inserire il peso degli ananas: ";
    cin >> pa;
    // Input peso cachi
    cout << "Inserire il peso dei cachi: ";
    cin >> pc;
    // Calcolo peso totale
    totp = pm+pa+pc;
    // Calcolo guadagno massimo teorico
    totg = pm*cm+pa*ca+pc*cc;
    // Stampa peso totale e guadagno massimo
    cout << "Peso totale: "<<totp<<"kg, Guadagnio massimo: "<<totg<<" Euro"<<endl;
    // Pausa per visualizzare i dati
    system("pause");
    // Pulisce lo schermo
    system("cls");

    // Presentazione prezzi al cliente
    cout << "Benvenuto alla bancarella di Gino!\nCosto mele: "<<cm<<" Euro\nCosto ananas: "<<ca<<" Euro\nCosto cachi: "<<cc<<" Euro\n";
    // --- Cliente 1 ---
    cout <<endl<< "Cliente 1:"<<endl;
    // Input acquisto mele cliente 1
    cout << "Inserisci quani kg di mele hai preso: ";
    cin >> km1;
    // Input acquisto ananas cliente 1
    cout << "Inserisci quani kg di ananas hai preso: ";
    cin >> ka1;
    // Input acquisto cachi cliente 1
    cout << "Inserisci quani kg di cachi hai preso: ";
    cin >> kc1;

    // Calcolo spesa cliente 1 per ogni prodotto
    pm1=km1*cm;
    pa1=ka1*ca;
    pc1=kc1*cc;
    // Calcolo totale spesa cliente 1
    totspeso1= pm1+pa1+pc1;

    // --- Cliente 2 ---
    cout <<endl<< "Cliente 2:"<<endl;
    // Input acquisto mele cliente 2
    cout << "Inserisci quani kg di mele hai preso: ";
    cin >> km2;
    // Input acquisto ananas cliente 2
    cout << "Inserisci quani kg di ananas hai preso: ";
    cin >> ka2;
    // Input acquisto cachi cliente 2
    cout << "Inserisci quani kg di cachi hai preso: ";
    cin >> kc2;

    // Calcolo spesa cliente 2 per ogni prodotto
    pm2=km2*cm;
    pa2=ka2*ca;
    pc2=kc2*cc;
    // Calcolo totale spesa cliente 2
    totspeso2= pm2+pa2+pc2;

    // Stampa scontrino cliente 1
    cout <<endl<<"Cliente 1:"<<endl;
    cout << "Mele: "<<km1<<"kg | "<<pm1<<" Euro"<<endl;
    cout << "Ananas: "<<ka1<<"kg | "<<pa1<<" Euro"<<endl;
    cout << "Cachi: "<<kc1<<"kg | "<<pc1<<" Euro"<<endl;
    cout << "Prezzo Totale: "<<totspeso1<<" Euro"<<endl;

    // Stampa scontrino cliente 2
    cout <<endl<<"Cliente 2:"<<endl;
    cout << "Mele: "<<km2<<"kg | "<<pm2<<" Euro"<<endl;
    cout << "Ananas: "<<ka2<<"kg | "<<pa2<<" Euro"<<endl;
    cout << "Cachi: "<<kc2<<"kg | "<<pc2<<" Euro"<<endl;
    cout << "Prezzo Totale: "<<totspeso2<<" Euro"<<endl;

    // Aggiorna la merce rimasta
    pm -= km1 + km2;
    pa -= ka1 + ka2;
    pc -= kc1 + kc2;
    // Stampa merce rimasta
    cout <<endl<< "Merce rimasta: "<<endl;
    cout<<"Mele: "<<pm<<"kg\nAnanas: "<<pa<<"kg\nCachi: "<<pc<<"kg\n";

    system("pause");
    return 0;
}
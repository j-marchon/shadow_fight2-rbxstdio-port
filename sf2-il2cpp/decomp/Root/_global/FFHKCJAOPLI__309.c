// TypeDefIndex 309
// Namespace: 
// public class FFHKCJAOPLI
// Fields:
//   public HPPDIEDAKEC HPPDIEDAKEC; // 0x10
//   public HOOAAGABMBL CJLNOJMBNPN; // 0x18
//   public string NBAFFAONHFO; // 0x20
//   public string JNNGDLLCHAG; // 0x28

// ===== public void .ctor(HPPDIEDAKEC HONPNKFABKF, HOOAAGABMBL IKKAMAMLIKA, string JFPHHHFKKIK, string FLMDPLPNBFC)  [RVA 0x323BB7C]
// FFHKCJAOPLI$$.ctor @ RVA 0x323BB7C

void FFHKCJAOPLI___ctor(FFHKCJAOPLI_o *__this,int32_t HONPNKFABKF,HOOAAGABMBL_o *IKKAMAMLIKA,
                       System_String_o *JFPHHHFKKIK,System_String_o *FLMDPLPNBFC,MethodInfo *method)

{
  HOOAAGABMBL_o **ppHVar1;
  System_String_o **ppSVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HPPDIEDAKEC = HONPNKFABKF;
  ppHVar1 = &(__this->fields).CJLNOJMBNPN;
                    /* try { // try from 0333bbac to 0343bd93 has its CatchHandler @ 0333bbac
                       catch() { ... } // from try @ 0333bbac with catch @ 0333bbac
                       catch() { ... } // from try @ 0333c354 with catch @ 0333bbac
                       catch() { ... } // from try @ 0333c3ac with catch @ 0333bbac
                       catch() { ... } // from try @ 0333c548 with catch @ 0333bbac
                       catch() { ... } // from try @ 0333c550 with catch @ 0333bbac
                       catch() { ... } // from try @ 0333c6ac with catch @ 0333bbac */
  *ppHVar1 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppHVar1,IKKAMAMLIKA);
  ppSVar2 = &(__this->fields).NBAFFAONHFO;
  *ppSVar2 = JFPHHHFKKIK;
  thunk_FUN_01c20e04(ppSVar2,JFPHHHFKKIK);
  ppSVar2 = &(__this->fields).JNNGDLLCHAG;
  *ppSVar2 = FLMDPLPNBFC;
  thunk_FUN_01c20e04(ppSVar2,FLMDPLPNBFC);
  return;
}


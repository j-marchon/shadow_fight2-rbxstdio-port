// TypeDefIndex 534
// Namespace: 
// public class KBAIDAHOMHA
// Fields:
//   public int ADCKCMDHIHM; // 0x10
//   public int FABIFPKFPCK; // 0x14
//   public List<MGNDHCBAPEN<int, int>> ECGLDFDOAFM; // 0x18
//   public HOOAAGABMBL CJLNOJMBNPN; // 0x20
//   public bool ABAMCKCCONM; // 0x28
//   public bool IAMKPGAKFNH; // 0x29
//   public HBNENINHPGF IEINLOAOCLD; // 0x30

// ===== public void .ctor(HOOAAGABMBL IKKAMAMLIKA, int IDPMJOKDHNP, float NEEPAAGCCGE, HBNENINHPGF OAOLCGAIILM, bool GDNJEGHEDAI = False)  [RVA 0x3597C7C]
// KBAIDAHOMHA$$.ctor @ RVA 0x3597C7C

void KBAIDAHOMHA___ctor(KBAIDAHOMHA_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,int32_t IDPMJOKDHNP,
                       float NEEPAAGCCGE,HBNENINHPGF_o *OAOLCGAIILM,bool GDNJEGHEDAI,
                       MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o **ppSVar2;
  HOOAAGABMBL_o **ppHVar3;
  HBNENINHPGF_o **ppHVar4;
  
  if ((DAT_04568daa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
    DAT_04568daa = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>__ctor__);
  ppSVar2 = &(__this->fields).ECGLDFDOAFM;
  *ppSVar2 = __this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppHVar3 = &(__this->fields).CJLNOJMBNPN;
  *ppHVar3 = IKKAMAMLIKA;
  thunk_FUN_01c20e04(ppHVar3,IKKAMAMLIKA);
  ppHVar4 = &(__this->fields).IEINLOAOCLD;
  *ppHVar4 = OAOLCGAIILM;
  iVar1 = -0x80000000;
  if (NEEPAAGCCGE * 100.0 != INFINITY) {
    iVar1 = (int)(NEEPAAGCCGE * 100.0);
  }
  (__this->fields).ADCKCMDHIHM = IDPMJOKDHNP;
  (__this->fields).FABIFPKFPCK = iVar1;
  (__this->fields).IAMKPGAKFNH = GDNJEGHEDAI;
  thunk_FUN_01c20e04(ppHVar4,OAOLCGAIILM);
  (__this->fields).ABAMCKCCONM = OAOLCGAIILM != (HBNENINHPGF_o *)0x0;
  return;
}


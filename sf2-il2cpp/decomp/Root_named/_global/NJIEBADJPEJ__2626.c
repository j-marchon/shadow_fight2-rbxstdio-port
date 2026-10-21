// TypeDefIndex 2626
// Namespace: 
// public class NJIEBADJPEJ : OHAHOONNEIC
// Fields:
//   private string <HOHLBKMCIDD>k__BackingField; // 0x10
//   private string <MLEPHDNBABJ>k__BackingField; // 0x18
//   private string <GBHFKPGCMLN>k__BackingField; // 0x20

// ===== private void FJOMAIILKAD(string CJNHFNHJHPE)  [RVA 0x33B22DC]
// NJIEBADJPEJ$$FJOMAIILKAD @ RVA 0x33B22DC

void NJIEBADJPEJ__FJOMAIILKAD(NJIEBADJPEJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HOHLBKMCIDD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void CGOMOPMGFDB(string CJNHFNHJHPE)  [RVA 0x33B22E4]
// NJIEBADJPEJ$$CGOMOPMGFDB @ RVA 0x33B22E4

void NJIEBADJPEJ__CGOMOPMGFDB(NJIEBADJPEJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MLEPHDNBABJ_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void BGDGIOOEAOJ(string CJNHFNHJHPE)  [RVA 0x33B22EC]
// NJIEBADJPEJ$$BGDGIOOEAOJ @ RVA 0x33B22EC

void NJIEBADJPEJ__BGDGIOOEAOJ(NJIEBADJPEJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GBHFKPGCMLN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(string CJFAPGEEPLM, string AAIHDEKMIJG, string EHKEOHNBLCK)  [RVA 0x33B22F4]
// NJIEBADJPEJ$$.ctor @ RVA 0x33B22F4

void NJIEBADJPEJ___ctor(NJIEBADJPEJ_o *__this,System_String_o *CJFAPGEEPLM,
                       System_String_o *AAIHDEKMIJG,System_String_o *EHKEOHNBLCK,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._HOHLBKMCIDD_k__BackingField = CJFAPGEEPLM;
  thunk_FUN_01c20e04(&__this->fields,CJFAPGEEPLM);
  ppSVar1 = &(__this->fields)._MLEPHDNBABJ_k__BackingField;
  *ppSVar1 = AAIHDEKMIJG;
  thunk_FUN_01c20e04(ppSVar1,AAIHDEKMIJG);
  ppSVar1 = &(__this->fields)._GBHFKPGCMLN_k__BackingField;
  *ppSVar1 = EHKEOHNBLCK;
  thunk_FUN_01c20e04(ppSVar1,EHKEOHNBLCK);
  return;
}


// ===== public string KCODMKBDGIA()  [RVA 0x33B2354]
// NJIEBADJPEJ$$KCODMKBDGIA @ RVA 0x33B2354

System_String_o * NJIEBADJPEJ__KCODMKBDGIA(NJIEBADJPEJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._MLEPHDNBABJ_k__BackingField;
}


// ===== public string DDHGDIODCCH()  [RVA 0x33B235C]
// NJIEBADJPEJ$$DDHGDIODCCH @ RVA 0x33B235C

System_String_o * NJIEBADJPEJ__DDHGDIODCCH(NJIEBADJPEJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._HOHLBKMCIDD_k__BackingField;
}


// ===== public string IIBCLDACBAL()  [RVA 0x33B2364]
// NJIEBADJPEJ$$IIBCLDACBAL @ RVA 0x33B2364

System_String_o * NJIEBADJPEJ__IIBCLDACBAL(NJIEBADJPEJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._GBHFKPGCMLN_k__BackingField;
}


// ===== public bool BOJJBGPIKDP()  [RVA 0x33B236C]
// NJIEBADJPEJ$$BOJJBGPIKDP @ RVA 0x33B236C

bool NJIEBADJPEJ__BOJJBGPIKDP(NJIEBADJPEJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace
                    ((__this->fields)._GBHFKPGCMLN_k__BackingField,(MethodInfo *)0x0);
  return bVar1;
}


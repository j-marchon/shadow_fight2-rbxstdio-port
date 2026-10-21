// TypeDefIndex 3230
// Namespace: 
// public class EDLFPEGBIFO : OHAHOONNEIC
// Fields:
//   private string <HOHLBKMCIDD>k__BackingField; // 0x10
//   private byte[] <GOFDPKCMIJO>k__BackingField; // 0x18
//   private string <GBHFKPGCMLN>k__BackingField; // 0x20

// ===== public void .ctor(string CJFAPGEEPLM, byte[] IMMNELPBGIF, string EHKEOHNBLCK)  [RVA 0x3505730]
// EDLFPEGBIFO$$.ctor @ RVA 0x3505730

void EDLFPEGBIFO___ctor(EDLFPEGBIFO_o *__this,System_String_o *CJFAPGEEPLM,
                       System_Byte_array *IMMNELPBGIF,System_String_o *EHKEOHNBLCK,
                       MethodInfo *method)

{
  System_Byte_array **ppSVar1;
  System_String_o **ppSVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._HOHLBKMCIDD_k__BackingField = CJFAPGEEPLM;
  thunk_FUN_01c20e04(&__this->fields,CJFAPGEEPLM);
  ppSVar1 = &(__this->fields)._GOFDPKCMIJO_k__BackingField;
  *ppSVar1 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppSVar1,IMMNELPBGIF);
  ppSVar2 = &(__this->fields)._GBHFKPGCMLN_k__BackingField;
  *ppSVar2 = EHKEOHNBLCK;
  thunk_FUN_01c20e04(ppSVar2,EHKEOHNBLCK);
  return;
}


// ===== public byte[] LFCBPBFLNDA()  [RVA 0x3505790]
// EDLFPEGBIFO$$LFCBPBFLNDA @ RVA 0x3505790

System_Byte_array * EDLFPEGBIFO__LFCBPBFLNDA(EDLFPEGBIFO_o *__this,MethodInfo *method)

{
  return (__this->fields)._GOFDPKCMIJO_k__BackingField;
}


// ===== private void IIKPNGJAJIH(byte[] CJNHFNHJHPE)  [RVA 0x3505798]
// EDLFPEGBIFO$$IIKPNGJAJIH @ RVA 0x3505798

void EDLFPEGBIFO__IIKPNGJAJIH
               (EDLFPEGBIFO_o *__this,System_Byte_array *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GOFDPKCMIJO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string DDHGDIODCCH()  [RVA 0x35057A0]
// EDLFPEGBIFO$$DDHGDIODCCH @ RVA 0x35057A0

System_String_o * EDLFPEGBIFO__DDHGDIODCCH(EDLFPEGBIFO_o *__this,MethodInfo *method)

{
  return (__this->fields)._HOHLBKMCIDD_k__BackingField;
}


// ===== public string IIBCLDACBAL()  [RVA 0x35057A8]
// EDLFPEGBIFO$$IIBCLDACBAL @ RVA 0x35057A8

System_String_o * EDLFPEGBIFO__IIBCLDACBAL(EDLFPEGBIFO_o *__this,MethodInfo *method)

{
  return (__this->fields)._GBHFKPGCMLN_k__BackingField;
}


// ===== private void BGDGIOOEAOJ(string CJNHFNHJHPE)  [RVA 0x35057B0]
// EDLFPEGBIFO$$BGDGIOOEAOJ @ RVA 0x35057B0

void EDLFPEGBIFO__BGDGIOOEAOJ(EDLFPEGBIFO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GBHFKPGCMLN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public bool BOJJBGPIKDP()  [RVA 0x35057B8]
// EDLFPEGBIFO$$BOJJBGPIKDP @ RVA 0x35057B8

bool EDLFPEGBIFO__BOJJBGPIKDP(EDLFPEGBIFO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  
  pSVar2 = (__this->fields)._GOFDPKCMIJO_k__BackingField;
  if ((pSVar2 != (System_Byte_array *)0x0) && (0 < (int)pSVar2->max_length)) {
    bVar1 = System_String__IsNullOrWhiteSpace
                      ((__this->fields)._GBHFKPGCMLN_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ===== private void FJOMAIILKAD(string CJNHFNHJHPE)  [RVA 0x35057E0]
// EDLFPEGBIFO$$FJOMAIILKAD @ RVA 0x35057E0

void EDLFPEGBIFO__FJOMAIILKAD(EDLFPEGBIFO_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HOHLBKMCIDD_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


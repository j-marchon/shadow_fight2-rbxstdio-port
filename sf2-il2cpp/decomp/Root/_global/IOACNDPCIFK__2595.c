// TypeDefIndex 2595
// Namespace: 
// public class IOACNDPCIFK : IDisposable
// Fields:
//   private const int CBLLMKHCEED = 1;
//   private const int IPHCOHBDJNJ = 2;
//   private const int PBKCMIIBMGK = 4;
//   private const int NJLPFAPHKKD = 8;
//   public readonly int ONGLGHIKBJF; // 0x10
//   private int <ABODODGIMOO>k__BackingField; // 0x14
//   private byte[] LGFOJEKKBEN; // 0x18

// ===== public virtual short AAJEGIBHHHJ()  [RVA 0x33A8F68]
// IOACNDPCIFK$$AAJEGIBHHHJ @ RVA 0x33A8F68

int16_t IOACNDPCIFK__AAJEGIBHHHJ(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  int16_t iVar1;
  
  iVar1 = System_BitConverter__ToInt16
                    ((__this->fields).LGFOJEKKBEN,(__this->fields)._ABODODGIMOO_k__BackingField,
                     (MethodInfo *)0x0);
  (__this->fields)._ABODODGIMOO_k__BackingField = (__this->fields)._ABODODGIMOO_k__BackingField + 2;
  return iVar1;
}


// ===== private void MFGIDAHNDGI(int CJNHFNHJHPE)  [RVA 0x33A8FA4]
// IOACNDPCIFK$$MFGIDAHNDGI @ RVA 0x33A8FA4

void IOACNDPCIFK__MFGIDAHNDGI(IOACNDPCIFK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ABODODGIMOO_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public virtual byte DBEDJLMLPIF()  [RVA 0x33A8FAC]
// IOACNDPCIFK$$DBEDJLMLPIF @ RVA 0x33A8FAC

uint8_t IOACNDPCIFK__DBEDJLMLPIF(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  uint8_t uVar1;
  uint uVar2;
  System_Byte_array *pSVar3;
  
  pSVar3 = (__this->fields).LGFOJEKKBEN;
  if (pSVar3 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a8fe4 to 035a9183 has its CatchHandler @ 034a8fe4
                       catch() { ... } // from try @ 034a8fe4 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9278 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a92c0 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9308 with catch @ 034a8fe4
                       catch() { ... } // from try @ 034a9348 with catch @ 034a8fe4 */
    FUN_01bab8c8();
  }
  uVar2 = (__this->fields)._ABODODGIMOO_k__BackingField;
  if (uVar2 < (uint)pSVar3->max_length) {
    uVar1 = pSVar3->m_Items[(int)uVar2];
    (__this->fields)._ABODODGIMOO_k__BackingField = uVar2 + 1;
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public float[] GPLHKENBDJO(int DFIBGGDJPLM)  [RVA 0x33A8FEC]
// IOACNDPCIFK$$GPLHKENBDJO @ RVA 0x33A8FEC

System_Single_array *
IOACNDPCIFK__GPLHKENBDJO(IOACNDPCIFK_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  System_Single_array *pSVar1;
  
  pSVar1 = (System_Single_array *)FUN_03f93a30(DAT_04567d00,__this,DFIBGGDJPLM);
  return pSVar1;
}


// ===== public void Dispose()  [RVA 0x33A907C]
// IOACNDPCIFK$$Dispose @ RVA 0x33A907C

void IOACNDPCIFK__Dispose(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  System_Byte_array **ppSVar1;
  
  ppSVar1 = &(__this->fields).LGFOJEKKBEN;
  *ppSVar1 = (System_Byte_array *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public virtual bool AEIKEOCLFCC()  [RVA 0x33A9088]
// IOACNDPCIFK$$AEIKEOCLFCC @ RVA 0x33A9088

bool IOACNDPCIFK__AEIKEOCLFCC(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_BitConverter__ToBoolean
                    ((__this->fields).LGFOJEKKBEN,(__this->fields)._ABODODGIMOO_k__BackingField,
                     (MethodInfo *)0x0);
  (__this->fields)._ABODODGIMOO_k__BackingField = (__this->fields)._ABODODGIMOO_k__BackingField + 1;
  return bVar1;
}


// ===== public void .ctor(byte[] IMMNELPBGIF)  [RVA 0x33A90B8]
// IOACNDPCIFK$$.ctor @ RVA 0x33A90B8

void IOACNDPCIFK___ctor(IOACNDPCIFK_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  System_Byte_array **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).LGFOJEKKBEN;
  *ppSVar1 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppSVar1,IMMNELPBGIF);
  if (*ppSVar1 != (System_Byte_array *)0x0) {
    (__this->fields).ONGLGHIKBJF = (int32_t)(*ppSVar1)->max_length;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual int DOGNHIEBHJB()  [RVA 0x33A9104]
// IOACNDPCIFK$$DOGNHIEBHJB @ RVA 0x33A9104

int32_t IOACNDPCIFK__DOGNHIEBHJB(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_BitConverter__ToInt32
                    ((__this->fields).LGFOJEKKBEN,(__this->fields)._ABODODGIMOO_k__BackingField,
                     (MethodInfo *)0x0);
  (__this->fields)._ABODODGIMOO_k__BackingField = (__this->fields)._ABODODGIMOO_k__BackingField + 4;
  return iVar1;
}


// ===== public int OFDDJINNMNE()  [RVA 0x33A9130]
// IOACNDPCIFK$$OFDDJINNMNE @ RVA 0x33A9130

int32_t IOACNDPCIFK__OFDDJINNMNE(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  return (__this->fields)._ABODODGIMOO_k__BackingField;
}


// ===== public virtual long DJKKAIAOMPH()  [RVA 0x33A9138]
// IOACNDPCIFK$$DJKKAIAOMPH @ RVA 0x33A9138

int64_t IOACNDPCIFK__DJKKAIAOMPH(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  
  iVar1 = System_BitConverter__ToInt64
                    ((__this->fields).LGFOJEKKBEN,(__this->fields)._ABODODGIMOO_k__BackingField,
                     (MethodInfo *)0x0);
  (__this->fields)._ABODODGIMOO_k__BackingField = (__this->fields)._ABODODGIMOO_k__BackingField + 8;
  return iVar1;
}


// ===== private void GFECOLFOILC(int CJNHFNHJHPE)  [RVA 0x33A8F94]
// IOACNDPCIFK$$GFECOLFOILC @ RVA 0x33A8F94

void IOACNDPCIFK__GFECOLFOILC(IOACNDPCIFK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ABODODGIMOO_k__BackingField =
       (__this->fields)._ABODODGIMOO_k__BackingField + CJNHFNHJHPE;
  return;
}


// ===== public virtual float HHEEPMNEACO()  [RVA 0x33A9164]
// IOACNDPCIFK$$HHEEPMNEACO @ RVA 0x33A9164

float IOACNDPCIFK__HHEEPMNEACO(IOACNDPCIFK_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = System_BitConverter__ToSingle
                    ((__this->fields).LGFOJEKKBEN,(__this->fields)._ABODODGIMOO_k__BackingField,
                     (MethodInfo *)0x0);
                    /* try { // try from 034a9184 to 035a918b has its CatchHandler @ 034a92e0 */
  (__this->fields)._ABODODGIMOO_k__BackingField = (__this->fields)._ABODODGIMOO_k__BackingField + 4;
  return fVar1;
}


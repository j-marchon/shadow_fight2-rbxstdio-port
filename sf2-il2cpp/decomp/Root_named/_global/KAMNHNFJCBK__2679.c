// TypeDefIndex 2679
// Namespace: 
// public class KAMNHNFJCBK
// Fields:
//   private int <ACAPMJLHGIA>k__BackingField; // 0x10
//   private int <DMNBLKDCIOM>k__BackingField; // 0x14
//   private int <CPBIEMNPBNB>k__BackingField; // 0x18
//   public KAMNHNFJCBK.BNHAOHCGJMM BGHFADDGPAD; // 0x1C

// ===== private void .ctor()  [RVA 0x33C7810]
// KAMNHNFJCBK$$.ctor @ RVA 0x33C7810

void KAMNHNFJCBK___ctor(KAMNHNFJCBK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static KAMNHNFJCBK OJPJIHIEMFO(int MNADLPHNIJB, int BHCJLONIPAN, KAMNHNFJCBK.BNHAOHCGJMM ACCIHBHMFPN = 0)  [RVA 0x33C7818]
// KAMNHNFJCBK$$OJPJIHIEMFO @ RVA 0x33C7818

KAMNHNFJCBK_o *
KAMNHNFJCBK__OJPJIHIEMFO
          (int32_t MNADLPHNIJB,int32_t BHCJLONIPAN,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  KAMNHNFJCBK_o *pKVar1;
  
  pKVar1 = KAMNHNFJCBK__GPOJOHOCLNO
                     (MNADLPHNIJB * 4,MNADLPHNIJB * 4 + BHCJLONIPAN * 4 + -1,ACCIHBHMFPN,method);
  return pKVar1;
}


// ===== private void MKLALKOGPEH(int CJNHFNHJHPE)  [RVA 0x33C78A8]
// KAMNHNFJCBK$$MKLALKOGPEH @ RVA 0x33C78A8

void KAMNHNFJCBK__MKLALKOGPEH(KAMNHNFJCBK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._DMNBLKDCIOM_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public int MNCAADFLJON()  [RVA 0x33C78B0]
// KAMNHNFJCBK$$MNCAADFLJON @ RVA 0x33C78B0

int32_t KAMNHNFJCBK__MNCAADFLJON(KAMNHNFJCBK_o *__this,MethodInfo *method)

{
  return (__this->fields)._CPBIEMNPBNB_k__BackingField;
}


// ===== private void KHICECLEMCF(int CJNHFNHJHPE)  [RVA 0x33C78B8]
// KAMNHNFJCBK$$KHICECLEMCF @ RVA 0x33C78B8

void KAMNHNFJCBK__KHICECLEMCF(KAMNHNFJCBK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CPBIEMNPBNB_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public int OCGPNNOJHEI()  [RVA 0x33C78C0]
// KAMNHNFJCBK$$OCGPNNOJHEI @ RVA 0x33C78C0

int32_t KAMNHNFJCBK__OCGPNNOJHEI(KAMNHNFJCBK_o *__this,MethodInfo *method)

{
  return (__this->fields)._ACAPMJLHGIA_k__BackingField;
}


// ===== private void DPIEFIJNKOM(int CJNHFNHJHPE)  [RVA 0x33C78C8]
// KAMNHNFJCBK$$DPIEFIJNKOM @ RVA 0x33C78C8

void KAMNHNFJCBK__DPIEFIJNKOM(KAMNHNFJCBK_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._ACAPMJLHGIA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool AJGHCILADAI(KAMNHNFJCBK NECMHLICHNE)  [RVA 0x33C78D0]
// KAMNHNFJCBK$$AJGHCILADAI @ RVA 0x33C78D0

bool KAMNHNFJCBK__AJGHCILADAI(KAMNHNFJCBK_o *__this,KAMNHNFJCBK_o *NECMHLICHNE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (NECMHLICHNE != (KAMNHNFJCBK_o *)0x0) {
    iVar1 = (__this->fields)._ACAPMJLHGIA_k__BackingField;
    iVar2 = (NECMHLICHNE->fields)._ACAPMJLHGIA_k__BackingField;
    if ((iVar1 < iVar2) || (iVar2 < (__this->fields)._DMNBLKDCIOM_k__BackingField)) {
      iVar2 = (NECMHLICHNE->fields)._DMNBLKDCIOM_k__BackingField;
      if (iVar1 < iVar2) {
        bVar3 = false;
      }
      else {
        bVar3 = (__this->fields)._DMNBLKDCIOM_k__BackingField <= iVar2;
      }
    }
    else {
      bVar3 = true;
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static KAMNHNFJCBK GPOJOHOCLNO(int CKCOLJLFJDB, int DEDNHOELFOD, KAMNHNFJCBK.BNHAOHCGJMM ACCIHBHMFPN = 0)  [RVA 0x33C7828]
// KAMNHNFJCBK$$GPOJOHOCLNO @ RVA 0x33C7828

KAMNHNFJCBK_o *
KAMNHNFJCBK__GPOJOHOCLNO
          (int32_t CKCOLJLFJDB,int32_t DEDNHOELFOD,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  KAMNHNFJCBK_o *__this;
  
  if ((DAT_04567dfd & 1) == 0) {
    FUN_01bab630(&KAMNHNFJCBK_TypeInfo);
    DAT_04567dfd = 1;
  }
  __this = (KAMNHNFJCBK_o *)thunk_FUN_01bda818(KAMNHNFJCBK_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (KAMNHNFJCBK_o *)0x0) {
    (__this->fields)._ACAPMJLHGIA_k__BackingField = CKCOLJLFJDB;
    (__this->fields)._DMNBLKDCIOM_k__BackingField = DEDNHOELFOD;
    (__this->fields)._CPBIEMNPBNB_k__BackingField = (DEDNHOELFOD - CKCOLJLFJDB) + 1;
    (__this->fields).BGHFADDGPAD = ACCIHBHMFPN;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int OALDPIEBDPM()  [RVA 0x33C7928]
// KAMNHNFJCBK$$OALDPIEBDPM @ RVA 0x33C7928

int32_t KAMNHNFJCBK__OALDPIEBDPM(KAMNHNFJCBK_o *__this,MethodInfo *method)

{
  return (__this->fields)._DMNBLKDCIOM_k__BackingField;
}


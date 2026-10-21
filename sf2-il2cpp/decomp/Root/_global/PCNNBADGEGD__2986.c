// TypeDefIndex 2986
// Namespace: 
// public class PCNNBADGEGD
// Fields:
//   public LLGIDMGDNPG[] EGNNBHJHNON; // 0x10
//   public string AMGLPLAOCPD; // 0x18
//   public int LKJAKLDAIOK; // 0x20

// ===== public LLGIDMGDNPG OPHALLPMFHB(int EIMPAMOIHNM)  [RVA 0x349C58C]
// PCNNBADGEGD$$OPHALLPMFHB @ RVA 0x349C58C

LLGIDMGDNPG_o *
PCNNBADGEGD__OPHALLPMFHB(PCNNBADGEGD_o *__this,int32_t EIMPAMOIHNM,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  LLGIDMGDNPG_o *pLVar3;
  LLGIDMGDNPG_array *pLVar4;
  
  pLVar4 = (__this->fields).EGNNBHJHNON;
  if (pLVar4 == (LLGIDMGDNPG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)pLVar4->max_length;
  uVar2 = EIMPAMOIHNM - (__this->fields).LKJAKLDAIOK;
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0) {
    pLVar3 = (LLGIDMGDNPG_o *)0x0;
  }
  else {
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pLVar3 = pLVar4->m_Items[uVar2];
  }
  return pLVar3;
}


// ===== public int FPPDLDFOLJH()  [RVA 0x34A3030]
// PCNNBADGEGD$$FPPDLDFOLJH @ RVA 0x34A3030

int32_t PCNNBADGEGD__FPPDLDFOLJH(PCNNBADGEGD_o *__this,MethodInfo *method)

{
  LLGIDMGDNPG_array *pLVar1;
  
  pLVar1 = (__this->fields).EGNNBHJHNON;
  if (pLVar1 != (LLGIDMGDNPG_array *)0x0) {
    return (__this->fields).LKJAKLDAIOK + (int)pLVar1->max_length + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A3058]
// PCNNBADGEGD$$.ctor @ RVA 0x34A3058

void PCNNBADGEGD___ctor(PCNNBADGEGD_o *__this,MethodInfo *method)

{
  if ((DAT_045684bd & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045684bd = 1;
  }
  (__this->fields).AMGLPLAOCPD = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int NEKCPMNNPLO(int EIMPAMOIHNM)  [RVA 0x349C5FC]
// PCNNBADGEGD$$NEKCPMNNPLO @ RVA 0x349C5FC

int32_t PCNNBADGEGD__NEKCPMNNPLO(PCNNBADGEGD_o *__this,int32_t EIMPAMOIHNM,MethodInfo *method)

{
  int iVar1;
  LLGIDMGDNPG_array *pLVar2;
  
  pLVar2 = (__this->fields).EGNNBHJHNON;
  if (pLVar2 != (LLGIDMGDNPG_array *)0x0) {
    iVar1 = EIMPAMOIHNM - (__this->fields).LKJAKLDAIOK;
    if ((int)pLVar2->max_length <= iVar1) {
      iVar1 = -1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


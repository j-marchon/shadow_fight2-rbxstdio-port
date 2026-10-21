// Original name: Nekki.SF2.Core.Fights.Model.AI.Data.TacticalTable  (obfuscated PCNNBADGEGD)
// TypeDefIndex 2986
// Namespace: 
// public class TacticalTable
// Fields:
//   public Intervals[] EGNNBHJHNON; // 0x10
//   public string AMGLPLAOCPD; // 0x18
//   public int LKJAKLDAIOK; // 0x20

// ===== public Intervals OPHALLPMFHB(int EIMPAMOIHNM)  [RVA 0x349C58C]
// TacticalTable$$OPHALLPMFHB @ RVA 0x349C58C

Intervals_o *
TacticalTable__OPHALLPMFHB(TacticalTable_o *__this,int32_t EIMPAMOIHNM,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Intervals_o *pLVar3;
  Intervals_array *pLVar4;
  
  pLVar4 = (__this->fields).EGNNBHJHNON;
  if (pLVar4 == (Intervals_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (uint)pLVar4->max_length;
  uVar2 = EIMPAMOIHNM - (__this->fields).LKJAKLDAIOK;
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = 0xffffffff;
  }
  if ((int)uVar2 < 0) {
    pLVar3 = (Intervals_o *)0x0;
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
// TacticalTable$$FPPDLDFOLJH @ RVA 0x34A3030

int32_t TacticalTable__FPPDLDFOLJH(TacticalTable_o *__this,MethodInfo *method)

{
  Intervals_array *pLVar1;
  
  pLVar1 = (__this->fields).EGNNBHJHNON;
  if (pLVar1 != (Intervals_array *)0x0) {
    return (__this->fields).LKJAKLDAIOK + (int)pLVar1->max_length + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A3058]
// TacticalTable$$.ctor @ RVA 0x34A3058

void TacticalTable___ctor(TacticalTable_o *__this,MethodInfo *method)

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
// TacticalTable$$NEKCPMNNPLO @ RVA 0x349C5FC

int32_t TacticalTable__NEKCPMNNPLO(TacticalTable_o *__this,int32_t EIMPAMOIHNM,MethodInfo *method)

{
  int iVar1;
  Intervals_array *pLVar2;
  
  pLVar2 = (__this->fields).EGNNBHJHNON;
  if (pLVar2 != (Intervals_array *)0x0) {
    iVar1 = EIMPAMOIHNM - (__this->fields).LKJAKLDAIOK;
    if ((int)pLVar2->max_length <= iVar1) {
      iVar1 = -1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// TypeDefIndex 746
// Namespace: 
// public class MFKCBFODPNJ : OHPOFOPJIMB
// Fields:
//   private int FDFEONGBEBM; // 0x20
//   private int EJDJPJLBBNC; // 0x24

// ===== public void .ctor(int EJCBNPCNCBF, int KGOKKMGCCFI)  [RVA 0x304CAFC]
// MFKCBFODPNJ$$.ctor @ RVA 0x304CAFC

void MFKCBFODPNJ___ctor(MFKCBFODPNJ_o *__this,int32_t EJCBNPCNCBF,int32_t KGOKKMGCCFI,
                       MethodInfo *method)

{
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  (__this->fields).FDFEONGBEBM = EJCBNPCNCBF;
  (__this->fields).EJDJPJLBBNC = KGOKKMGCCFI;
  return;
}


// ===== public override bool BNNIDPDMOIL()  [RVA 0x304CB30]
// MFKCBFODPNJ$$BNNIDPDMOIL @ RVA 0x304CB30

bool MFKCBFODPNJ__BNNIDPDMOIL(MFKCBFODPNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this_00;
  
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    bVar1 = NDPMLPGANCI__FHLFKIOFBKL(__this_00,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void IKDPMKOIDMP()  [RVA 0x304CB5C]
// MFKCBFODPNJ$$IKDPMKOIDMP @ RVA 0x304CB5C

void MFKCBFODPNJ__IKDPMKOIDMP(MFKCBFODPNJ_o *__this,MethodInfo *method)

{
  RaidClansManager_o *__this_00;
  
  if ((DAT_04565e16 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565e16 = 1;
  }
  DialogsOpener__FOCOCNHNGMI((MethodInfo *)0x0);
  if ((__this->fields).EJDJPJLBBNC == 4) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (__this_00 == (RaidClansManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    RaidClansManager__HINLKLNCNDB(__this_00,(MethodInfo *)0x0);
  }
  OHPOFOPJIMB__FGNINNOOCCL((OHPOFOPJIMB_o *)__this,(MethodInfo *)0x0);
  return;
}


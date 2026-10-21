// TypeDefIndex 3396
// Namespace: 
// [Serializable]
// private sealed class APOIPFMPGEP.<>c
// Fields:
//   public static readonly APOIPFMPGEP.<>c <>9; // 0x0
//   public static Action <>9__2_0; // 0x8

// ===== private static void .cctor()  [RVA 0x3552C70]
// APOIPFMPGEP.<>c$$.cctor @ RVA 0x3552C70

void APOIPFMPGEP_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568b4a & 1) == 0) {
    FUN_01bab630(&APOIPFMPGEP_<>c_TypeInfo);
    DAT_04568b4a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(APOIPFMPGEP_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  APOIPFMPGEP_<>c_TypeInfo->static_fields->__9 = (APOIPFMPGEP___c_o *)__this;
  thunk_FUN_01c20e04(APOIPFMPGEP_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x3552CD8]
// APOIPFMPGEP.<>c$$.ctor @ RVA 0x3552CD8

void APOIPFMPGEP_<>c___ctor(APOIPFMPGEP___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void NICCDBKOBKP()  [RVA 0x3552CE0]
// APOIPFMPGEP.<>c$$NICCDBKOBKP @ RVA 0x3552CE0

void APOIPFMPGEP_<>c__NICCDBKOBKP(APOIPFMPGEP___c_o *__this,MethodInfo *method)

{
  FCJBEKHDLAF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568b4b & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04568b4b = 1;
    method = extraout_x1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
    method = extraout_x1_01;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_TypeInfo,method);
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
    FCJBEKHDLAF__IILEMANDADN(__this_00,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


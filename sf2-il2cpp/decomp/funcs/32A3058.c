// IGJEEGBBNFC$$BIFCHCBAFJL @ RVA 0x32A3058

void IGJEEGBBNFC__BIFCHCBAFJL
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  FCJBEKHDLAF_o *__this_00;
  HJNEOLCKEMD_o *pHVar2;
  
  if ((DAT_045673d9 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&OBCHCBKCAHC_TypeInfo);
    DAT_045673d9 = 1;
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  if ((CPECAEHDDDB == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) ||
     (pHVar2 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar2 == (HJNEOLCKEMD_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = (OBCHCBKCAHC_TypeInfo->_2).naturalAligment;
  if ((bVar1 <= (pHVar2->klass->_2).naturalAligment) &&
     ((pHVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)OBCHCBKCAHC_TypeInfo)) {
    FCJBEKHDLAF__GHCGOFHFBGO
              (__this_00,(UnityEngine_Color_o)*(UnityEngine_Color_Fields *)(pHVar2 + 1),
               *(int32_t *)&pHVar2[1].fields.super,SUB41(pHVar2[1].fields.super.BEMCNJHEADJ,0),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pHVar2);
}


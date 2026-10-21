// IGJEEGBBNFC$$GEGNDAIMJKJ @ RVA 0x32A0904

void IGJEEGBBNFC__GEGNDAIMJKJ
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MMDDDDFHOLG_o *__this_00;
  IGJEEGBBNFC_o *__this_01;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *DLOFGOGAGAA;
  MethodInfo *method_00;
  FCJBEKHDLAF_o *pFVar3;
  NJPBBPOABKP_o *pNVar4;
  AHMJMDBNMHO_o *__this_02;
  
  if ((DAT_045673bb & 1) == 0) {
    FUN_01bab630(&AHMJMDBNMHO_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<MMDDDDFHOLG_DOCBHLNBECF>__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    DAT_045673bb = 1;
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
  pFVar3 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  if (pFVar3 == (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (__this_02 = (AHMJMDBNMHO_o *)(CPECAEHDDDB->fields).EDOEMIDBEGO,
     __this_02 != (AHMJMDBNMHO_o *)0x0)) {
    bVar1 = (AHMJMDBNMHO_TypeInfo->_2).naturalAligment;
    if (((__this_02->klass->_2).naturalAligment < bVar1) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)AHMJMDBNMHO_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_02);
    }
    pNVar4 = (__this_02->fields).super._MLBBLNHFENE_k__BackingField;
    if ((pNVar4 != (NJPBBPOABKP_o *)0x0) &&
       (__this_00 = (pFVar3->fields).POEGCOJFMDB, __this_00 != (MMDDDDFHOLG_o *)0x0)) {
      __this_01 = MMDDDDFHOLG__MDEAJBFLJGP
                            (__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                             (pNVar4->fields)._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      DLOFGOGAGAA = AHMJMDBNMHO__MNMMJJICMGK(__this_02,CPECAEHDDDB,(MethodInfo *)0x0);
      bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)DLOFGOGAGAA,
                         Method_DJNBJHPDKDP_OBECCOPBADO<MMDDDDFHOLG_DOCBHLNBECF>__);
      if (bVar2) {
        return;
      }
      if (__this_01 != (IGJEEGBBNFC_o *)0x0) {
        IGJEEGBBNFC__IKDPMKOIDMP(__this_01,DLOFGOGAGAA,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


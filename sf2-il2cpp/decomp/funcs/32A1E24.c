// IGJEEGBBNFC$$LMLGCNJKCEL @ RVA 0x32A1E24

void IGJEEGBBNFC__LMLGCNJKCEL
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t GBLKICMLIHH;
  MMFIDKMDADC_o *__this_00;
  OLKKAIFGGAK_o *pOVar3;
  HJNEOLCKEMD_o *pHVar4;
  
  if ((DAT_045673c6 & 1) == 0) {
    FUN_01bab630(&MAOOAPJNNEO_TypeInfo);
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&StringLiteral_8775);
    DAT_045673c6 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar4 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar4 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (MAOOAPJNNEO_TypeInfo->_2).naturalAligment;
    if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)MAOOAPJNNEO_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pHVar4);
    }
    __this = (IGJEEGBBNFC_o *)0x0;
    if ((pHVar4[1].monitor != (NILLKLHKLHG_o *)0x0) &&
       (__this_00 = NILLKLHKLHG__CHKGAHCDFJF(pHVar4[1].monitor,false,(MethodInfo *)0x0),
       __this = (IGJEEGBBNFC_o *)0x0, __this_00 != (MMFIDKMDADC_o *)0x0)) {
      GBLKICMLIHH = MMFIDKMDADC__JBGCINPPLAC(__this_00,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pHVar4[1].klass,StringLiteral_8775,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pOVar3 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      __this = (IGJEEGBBNFC_o *)0x0;
      if (pOVar3 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__EHHDKBLFKAE(pOVar3,GBLKICMLIHH,(MethodInfo *)0x0);
        pOVar3 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
        __this = (IGJEEGBBNFC_o *)0x0;
        if (pOVar3 != (OLKKAIFGGAK_o *)0x0) {
                    /* try { // try from 033a1f08 to 034a201f has its CatchHandler @ 033a1f08
                       catch() { ... } // from try @ 033a1f08 with catch @ 033a1f08
                       catch() { ... } // from try @ 033a2088 with catch @ 033a1f08
                       catch() { ... } // from try @ 033a2120 with catch @ 033a1f08
                       catch() { ... } // from try @ 033a2158 with catch @ 033a1f08
                       catch() { ... } // from try @ 033a2198 with catch @ 033a1f08 */
          OLKKAIFGGAK__JPFGODGJKNP(pOVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


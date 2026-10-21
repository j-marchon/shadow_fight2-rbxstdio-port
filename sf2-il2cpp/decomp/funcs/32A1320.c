// IGJEEGBBNFC$$ODKIBKMMPFP @ RVA 0x32A1320

void IGJEEGBBNFC__ODKIBKMMPFP
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  OLKKAIFGGAK_o *__this_00;
  
  if ((DAT_045673c0 & 1) == 0) {
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&INLDLMGOHJE_TypeInfo);
    DAT_045673c0 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (__this = (IGJEEGBBNFC_o *)(CPECAEHDDDB->fields).EDOEMIDBEGO,
     (HJNEOLCKEMD_o *)__this != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (INLDLMGOHJE_TypeInfo->_2).naturalAligment;
    if (((((HJNEOLCKEMD_o *)__this)->klass->_2).naturalAligment < bVar1) ||
       ((((HJNEOLCKEMD_o *)__this)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)INLDLMGOHJE_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this_00 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__BBDNPJEJHKN
                (__this_00,(System_String_o *)((HJNEOLCKEMD_o *)((long)__this + 0x60))->klass,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


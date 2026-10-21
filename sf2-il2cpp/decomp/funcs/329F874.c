// IGJEEGBBNFC$$OLKBLECHGJA @ RVA 0x329F874

void IGJEEGBBNFC__OLKBLECHGJA
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  byte bVar1;
  LFOMNKEACBL_o *__this_00;
  
  if ((DAT_045673be & 1) == 0) {
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&LFOMNKEACBL_TypeInfo);
    DAT_045673be = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (__this_00 = (LFOMNKEACBL_o *)(CPECAEHDDDB->fields).EDOEMIDBEGO, __this = (IGJEEGBBNFC_o *)0x0,
     __this_00 != (LFOMNKEACBL_o *)0x0)) {
    bVar1 = (LFOMNKEACBL_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)LFOMNKEACBL_TypeInfo)) {
      LFOMNKEACBL__BOEFGIBCIIL(__this_00,CPECAEHDDDB,LOPENELMPML,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


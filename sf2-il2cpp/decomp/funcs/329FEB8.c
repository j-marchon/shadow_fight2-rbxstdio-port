// IGJEEGBBNFC$$DCOOOIENLFJ @ RVA 0x329FEB8

void IGJEEGBBNFC__DCOOOIENLFJ
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  OLKKAIFGGAK_o *pOVar2;
  NJPBHDMCLIN_o *pNVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *key;
  
  if ((DAT_045673b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&JKCGMMHNCFI_TypeInfo);
    DAT_045673b9 = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (__this = (IGJEEGBBNFC_o *)(CPECAEHDDDB->fields).EDOEMIDBEGO,
     (HJNEOLCKEMD_o *)__this != (HJNEOLCKEMD_o *)0x0)) {
                    /* try { // try from 0339fefc to 0349ff03 has its CatchHandler @ 033a0014 */
    bVar1 = (JKCGMMHNCFI_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0339ff1c to 0349ff2f has its CatchHandler @ 033a0010 */
    if (((((HJNEOLCKEMD_o *)__this)->klass->_2).naturalAligment < bVar1) ||
       ((((HJNEOLCKEMD_o *)__this)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)JKCGMMHNCFI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    if (((HJNEOLCKEMD_o *)((long)__this + 0x60))->klass != (HJNEOLCKEMD_c *)0x0) {
      key = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
            (((HJNEOLCKEMD_o *)__this)->fields)._COIPKAKHDFP_k__BackingField;
                    /* try { // try from 0339ff44 to 0349ff4f has its CatchHandler @ 0339fff8 */
      __this = (IGJEEGBBNFC_o *)
               NILLKLHKLHG__CHKGAHCDFJF
                         ((NILLKLHKLHG_o *)((HJNEOLCKEMD_o *)((long)__this + 0x60))->klass,false,
                          (MethodInfo *)0x0);
      pOVar2 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if ((((pOVar2 != (OLKKAIFGGAK_o *)0x0) &&
           (pNVar3 = (pOVar2->fields).FNEAAHOOHAA, pNVar3 != (NJPBHDMCLIN_o *)0x0)) &&
          ((HJNEOLCKEMD_o *)__this != (HJNEOLCKEMD_o *)0x0)) &&
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pNVar3->fields).JJCFAGEDAAN,
         __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,(Il2CppObject *)key,
                   (Il2CppObject *)*(PHDCILJMEHO_o **)&(((HJNEOLCKEMD_o *)__this)->fields).super,
                   Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


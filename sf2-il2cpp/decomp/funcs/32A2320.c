// IGJEEGBBNFC$$BDHAMOEKNNK @ RVA 0x32A2320

void IGJEEGBBNFC__BDHAMOEKNNK(IGJEEGBBNFC_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB;
  HJNEOLCKEMD_o *pHVar3;
  MethodInfo *method_00;
  int32_t iVar4;
  int index;
  
  if ((DAT_045673c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__);
    DAT_045673c8 = 1;
  }
  __this_00 = (__this->fields).AKMNHHKLCKL;
  if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = 0;
      do {
        CPECAEHDDDB = (MMDDDDFHOLG_DOCBHLNBECF_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__
                                );
        if ((CPECAEHDDDB == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) ||
           (pHVar3 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar3 == (HJNEOLCKEMD_o *)0x0))
        goto LAB_033a2430;
        method_00 = (pHVar3->klass->vtable)._6_LLCONNGHGKD.method;
        (*(pHVar3->klass->vtable)._6_LLCONNGHGKD.methodPtr)(pHVar3,CPECAEHDDDB);
        iVar2 = (CPECAEHDDDB->fields).CMPJANOIJAF;
        if (0 < iVar2) {
          iVar4 = (CPECAEHDDDB->fields).AEPIFFHAKJG;
          if ((iVar2 <= iVar4) || ((CPECAEHDDDB->fields).KBODCOAHGFG != false)) {
            IGJEEGBBNFC__CNPPLCGPBJB(__this,CPECAEHDDDB,method_00);
            iVar4 = (CPECAEHDDDB->fields).AEPIFFHAKJG;
          }
          (CPECAEHDDDB->fields).AEPIFFHAKJG = iVar4 + 1;
        }
        __this_00 = (__this->fields).AKMNHHKLCKL;
        if (__this_00 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
        goto LAB_033a2430;
        iVar2 = (__this_00->fields)._size;
        if (iVar1 == iVar2) {
          index = index + 1;
        }
        iVar1 = iVar2;
      } while (index < iVar2);
    }
    return;
  }
LAB_033a2430:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


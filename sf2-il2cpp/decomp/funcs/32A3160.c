// IGJEEGBBNFC$$AHJBAPBFEDD @ RVA 0x32A3160

void IGJEEGBBNFC__AHJBAPBFEDD(IGJEEGBBNFC_o *__this,bool PLNDIFBHPMG,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *__this_00;
  MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB;
  MethodInfo *method_00;
  int index;
  int iVar2;
  
  if ((DAT_045673db & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__);
    DAT_045673db = 1;
  }
  __this_00 = (__this->fields).AKMNHHKLCKL;
  if (__this_00 != (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    if (0 < iVar2) {
      index = 0;
      do {
        method_00 = Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__;
        CPECAEHDDDB = (MMDDDDFHOLG_DOCBHLNBECF_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,index,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_get_Item__
                                );
        if (PLNDIFBHPMG) {
LAB_033a31e0:
          IGJEEGBBNFC__CNPPLCGPBJB(__this,CPECAEHDDDB,method_00);
        }
        else {
          if (CPECAEHDDDB == (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) goto LAB_033a3218;
          if ((CPECAEHDDDB->fields).KBODCOAHGFG != false) goto LAB_033a31e0;
        }
        __this_00 = (__this->fields).AKMNHHKLCKL;
        if (__this_00 == (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0)
        goto LAB_033a3218;
        iVar1 = (__this_00->fields)._size;
        if (iVar2 == iVar1) {
          index = index + 1;
        }
        iVar2 = iVar1;
      } while (index < iVar1);
    }
    return;
  }
LAB_033a3218:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


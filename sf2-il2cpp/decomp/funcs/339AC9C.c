// HCAICJLDDJO$$PEENAMDLAKO @ RVA 0x339AC9C

DDMHMABAHHD_o * HCAICJLDDJO__PEENAMDLAKO(HOOAAGABMBL_o *IHGFKLOLPOK,MethodInfo *method)

{
  byte bVar1;
  JMDPBFOCHHP_o *__this;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar2;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  DDMHMABAHHD_o *pDVar3;
  MethodInfo *extraout_x1;
  System_String_o *HAEPFHOGAIM;
  
  if ((DAT_04567c79 & 1) == 0) {
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_04567c79 = 1;
    method = extraout_x1;
  }
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    bVar1 = (FAIJGJCCKJC_TypeInfo->_2).naturalAligment;
    if (((bVar1 <= (IHGFKLOLPOK->klass->_2).naturalAligment) &&
        ((IHGFKLOLPOK->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)FAIJGJCCKJC_TypeInfo)) && (IHGFKLOLPOK[1].klass != (HOOAAGABMBL_c *)0x0)) {
      HAEPFHOGAIM = ((IHGFKLOLPOK[1].klass)->_1).this_arg.data;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
      }
      __this = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (__this != (JMDPBFOCHHP_o *)0x0) {
        pJVar2 = JMDPBFOCHHP__OJOIAONADNG(__this,HAEPFHOGAIM,(MethodInfo *)0x0);
        if (pJVar2 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
          return (DDMHMABAHHD_o *)0x0;
        }
        if ((pJVar2->fields).HNGIBIJJKAP == false) {
          return (DDMHMABAHHD_o *)0x0;
        }
        __this_00 = (pJVar2->fields).GFBNJPMOEKD;
        if (__this_00 != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) {
          pDVar3 = (DDMHMABAHHD_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
          return pDVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return (DDMHMABAHHD_o *)0x0;
}


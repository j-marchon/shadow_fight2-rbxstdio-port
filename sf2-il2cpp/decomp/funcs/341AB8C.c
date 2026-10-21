// HEFOANCOHDC$$GNJJNIFJNKF @ RVA 0x341AB8C

void HEFOANCOHDC__GNJJNIFJNKF
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_array *pSVar3;
  System_String_array *value;
  int iVar4;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  undefined8 *puVar5;
  uint uVar6;
  
  if ((DAT_045680c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_1606);
    __this = (HEFOANCOHDC_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_045680c8 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (HEFOANCOHDC_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI,
     (System_String_array *)__this == (System_String_array *)0x0)) goto LAB_0351acec;
  if (1 < *(int *)&((System_String_array *)__this)->max_length) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (HEFOANCOHDC_o *)(System_String_array *)0x0;
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351acec;
    pSVar3 = (System_String_array *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (HEFOANCOHDC_o *)pSVar3;
    if ((((__this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
         (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,1,
                              Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                             ), __this = (HEFOANCOHDC_o *)(System_String_array *)0x0,
         pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) ||
        (value = (System_String_array *)
                 NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0),
        __this = (HEFOANCOHDC_o *)value, pSVar3 == (System_String_array *)0x0)) ||
       (pSVar3 = System_String__Split((System_String_o *)pSVar3,0x7c,0,(MethodInfo *)0x0),
       __this = (HEFOANCOHDC_o *)pSVar3, pSVar3 == (System_String_array *)0x0)) goto LAB_0351acec;
    iVar4 = (int)pSVar3->max_length;
    if (0 < iVar4) {
      if (iVar4 != 0) {
        uVar6 = 0;
        do {
          __this = (HEFOANCOHDC_o *)0x0;
          if (pSVar3->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_0351acec;
          bVar1 = System_String__Equals
                            (pSVar3->m_Items[(int)uVar6],(System_String_o *)value,(MethodInfo *)0x0)
          ;
          __this = (HEFOANCOHDC_o *)(ulong)bVar1;
          if (bVar1) {
            if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351acec;
            puVar5 = &StringLiteral_1606;
            goto LAB_0351acc0;
          }
          if (iVar4 - 1U == uVar6) goto LAB_0351acb4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)pSVar3->max_length);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_0351acb4:
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    puVar5 = &StringLiteral_1567;
LAB_0351acc0:
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)*puVar5;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351acec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


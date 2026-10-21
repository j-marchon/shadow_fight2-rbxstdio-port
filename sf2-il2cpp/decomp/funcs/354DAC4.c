// LEGDPJHPEOB$$JPNCGJDMAAF @ RVA 0x354DAC4

void LEGDPJHPEOB__JPNCGJDMAAF
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  AFFHKININGD_o *__this_02;
  System_String_o *pSVar2;
  System_String_Fields *pSVar3;
  System_String_Fields KGLJICLJHEL;
  System_String_Fields CJNHFNHJHPE;
  int32_t local_24;
  
  if ((DAT_04568b31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10705);
    FUN_01bab630(&StringLiteral_10704);
    __this = (LEGDPJHPEOB_o *)FUN_01bab630(&StringLiteral_1);
    DAT_04568b31 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (LEGDPJHPEOB_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        pSVar3 = (System_String_Fields *)&StringLiteral_1;
      }
      else {
        __this = (LEGDPJHPEOB_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           );
        if ((__this == (LEGDPJHPEOB_o *)0x0) ||
           (pSVar2 = (__this->fields).HGLHAHMIGDB, pSVar2 == (System_String_o *)0x0))
        goto LAB_0364dcc8;
        __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
        __this = (LEGDPJHPEOB_o *)0x0;
        if (__this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
        goto LAB_0364dcc8;
        pSVar3 = &pSVar2->fields;
      }
      KGLJICLJHEL = *pSVar3;
      if ((__this_00->fields)._size < 2) {
        pSVar3 = (System_String_Fields *)&StringLiteral_1;
      }
      else {
        __this = (LEGDPJHPEOB_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,1,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           );
        if ((__this == (LEGDPJHPEOB_o *)0x0) ||
           (pSVar2 = (__this->fields).HGLHAHMIGDB, pSVar2 == (System_String_o *)0x0))
        goto LAB_0364dcc8;
        pSVar3 = &pSVar2->fields;
      }
      CJNHFNHJHPE = *pSVar3;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      __this = (LEGDPJHPEOB_o *)0x0;
      if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
        __this_02 = NLPJLHOEAOE__POGAPHAJGBC
                              (__this_01,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this_02 == (AFFHKININGD_o *)0x0) {
          pSVar2 = System_String__Concat
                             (StringLiteral_10704,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
        }
        else {
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
          if (!bVar1) {
            local_24 = AFFHKININGD__FCKMLBIPLDK
                                 (__this_02,(System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            __this = (LEGDPJHPEOB_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,__this);
              return;
            }
            goto LAB_0364dcc8;
          }
          pSVar2 = StringLiteral_10705;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pSVar2 = StringLiteral_10705;
          }
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0364dcc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


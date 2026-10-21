// BAJEMIOPBCE$$AJJLBBCJAAL @ RVA 0x3485CD8

/* WARNING: Type propagation algorithm not settling */

System_String_o *
BAJEMIOPBCE__AJJLBBCJAAL(BAJEMIOPBCE_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *FBFPLEFCDOK;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_RuntimeFieldHandle_Fields *pSVar4;
  System_String_o *pSVar5;
  OOMHDDBCBJP_o *BANHBMINMMP;
  
  if ((DAT_045683ab & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4768);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4769);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4770);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4771);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4772);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4773);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    __this = (BAJEMIOPBCE_o *)FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045683ab = 1;
  }
  if (OPAEPDIIOEB != (System_String_array *)0x0) {
    if (OPAEPDIIOEB->max_length == 0) {
      pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar1,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4768,
                 (MethodInfo *)0x0);
      pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4769,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar3 = BAJEMIOPBCE__IGMDDJFPIJL((BAJEMIOPBCE_o *)pSVar5,method_00);
      pSVar5 = System_String__Concat(pSVar5,pSVar3,(MethodInfo *)0x0);
      return pSVar5;
    }
    if ((int)OPAEPDIIOEB->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0(__this);
    }
    pSVar5 = OPAEPDIIOEB->m_Items[0];
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
      FBFPLEFCDOK = NLPJLHOEAOE__POGAPHAJGBC(__this_00,pSVar5,(MethodInfo *)0x0);
      if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4770,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar4 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4771;
      }
      else {
        BANHBMINMMP = (FBFPLEFCDOK->fields).IFJLLGPGMHM;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__EEGOPNGLBMJ(FBFPLEFCDOK,false,BANHBMINMMP,true,true,false,(MethodInfo *)0x0);
        pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar1,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4772,
                   (MethodInfo *)0x0);
        pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        pSVar4 = (System_RuntimeFieldHandle_Fields *)
                 &Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4773;
      }
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar2,(System_RuntimeFieldHandle_o)pSVar4->value,
                 (MethodInfo *)0x0);
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
      pSVar5 = System_String__Format(pSVar3,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


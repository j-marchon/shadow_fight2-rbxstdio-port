// IEHDDOIHPNI$$GKGOBGPNJMB @ RVA 0x336CC6C

void IEHDDOIHPNI__GKGOBGPNJMB(Il2CppObject *OCMMDIHLKMH,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar3;
  HOOAAGABMBL_o **ppHVar4;
  int *piVar5;
  System_String_o *pSVar6;
  long lVar7;
  NDPMLPGANCI_o *__this;
  FFHKCJAOPLI_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  int32_t iVar8;
  IEHDDOIHPNI_StaticFields *pIVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  UnityEngine_Object_o *x;
  System_Enum_o local_58;
  int local_48;
  
                    /* try { // try from 0346cc94 to 0356cf27 has its CatchHandler @ 0346cc94
                       catch() { ... } // from try @ 0346cc94 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d0a4 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d154 with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d15c with catch @ 0346cc94
                       catch() { ... } // from try @ 0346d228 with catch @ 0346cc94 */
  if ((DAT_04567af6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FFHKCJAOPLI_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10876);
    FUN_01bab630(&StringLiteral_15462);
    FUN_01bab630(&StringLiteral_15461);
    DAT_04567af6 = 1;
    method = extraout_x1;
  }
  if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IEHDDOIHPNI_TypeInfo,method);
  }
  ppNVar3 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
  *ppNVar3 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
  thunk_FUN_01c20e04(ppNVar3,0);
  ppHVar4 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
  IKKAMAMLIKA = *ppHVar4;
  IEHDDOIHPNI_TypeInfo->static_fields->DDLIGIKDNAA = false;
  *ppHVar4 = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(ppHVar4,0);
  if (OCMMDIHLKMH == (Il2CppObject *)0x0) goto LAB_0346cfe8;
  if ((OCMMDIHLKMH->klass->_1).element_class !=
      (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0346cff0 to 0356cff7 has its CatchHandler @ 0346d174 */
    FUN_01babc64(OCMMDIHLKMH);
  }
  piVar5 = (int *)thunk_FUN_01bda96c(OCMMDIHLKMH);
  local_58.klass = (System_Enum_c *)Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo;
  iVar1 = *piVar5;
  local_58.monitor = (void *)0xffffffffffffffff;
  local_48 = iVar1;
  pSVar6 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat(StringLiteral_15461,pSVar6,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (iVar1 == 1) {
    if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((IKKAMAMLIKA->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_10876,
                         (MethodInfo *)0x0);
      iVar8 = 8;
      if (!bVar2) {
        iVar8 = 6;
      }
      lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar7 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0346cf28 to 0356cf4f has its CatchHandler @ 0346d190 */
      if (bVar2) {
        lVar7 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        if ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8) ==
            (Nekki_SF2_GUI_Shop_ShopScene_o *)0x0) {
LAB_0346cfe8:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Shop_ShopScene__ScrollToItem
                  ((Nekki_SF2_GUI_Shop_ShopScene_o *)**(undefined8 **)(lVar7 + 0xb8),iVar8,
                   IKKAMAMLIKA,(MethodInfo *)0x0);
      }
      else {
        __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 0346cf84 to 0356cfaf has its CatchHandler @ 0346d18c */
        __this_00 = (FFHKCJAOPLI_o *)thunk_FUN_01bda818(FFHKCJAOPLI_TypeInfo);
        FFHKCJAOPLI___ctor(__this_00,iVar8,IKKAMAMLIKA,(System_String_o *)0x0,(System_String_o *)0x0
                           ,(MethodInfo *)0x0);
        if (__this == (NDPMLPGANCI_o *)0x0) goto LAB_0346cfe8;
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this,4,(Il2CppObject *)__this_00,(System_Action_object__o *)0x0,true,
                   (MethodInfo *)0x0);
      }
    }
  }
  else if (iVar1 == 0) {
    if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK != (HOOAAGABMBL_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogWarning(StringLiteral_15462,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_01;
      }
      pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
      pSVar10 = pIVar9->ICLDBBGODHJ;
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0346cfe8;
      iVar8 = (pSVar10->fields)._size;
      (pSVar10->fields)._size = 0;
      (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
      if (0 < iVar8) {
        System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar8,(MethodInfo *)0x0);
        pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
        method_00 = extraout_x1_02;
      }
      IEHDDOIHPNI__EDNBFMMPAHG(pIVar9->JLLLPGEABHK,method_00);
    }
  }
  return;
}


// PFOMHOLCODE$$DNOIPCGIBIB @ RVA 0x3350BFC

void PFOMHOLCODE__DNOIPCGIBIB
               (PFOMHOLCODE_o *__this,Nekki_SF2_GUI_Dialogs_StrangerDialog_o *LMEHKLFGEHI,
               MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *in_x3;
  PFOMHOLCODE_JBJOKPCAJEP_o *pPVar2;
  ButtonWithIcon_o *pBVar3;
  
  if ((DAT_04567a1c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3661);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3662);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567a1c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)LMEHKLFGEHI,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3661,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3662,(MethodInfo *)0x0)
    ;
    message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  if (LMEHKLFGEHI != (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)0x0) {
    pBVar3 = (LMEHKLFGEHI->fields)._rejectButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pBVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pPVar2 = (__this->fields).DKMMLPDKILK;
      pBVar3 = (LMEHKLFGEHI->fields)._rejectButton;
      if (pPVar2 == (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = (pPVar2->fields).NIADBHNJPAJ != false;
      }
      if (pBVar3 == (ButtonWithIcon_o *)0x0) goto LAB_03450e78;
      SFButton__set_IsFlashing((SFButton_o *)pBVar3,bVar1,(MethodInfo *)0x0);
      PFOMHOLCODE__GPPFAACLBDH
                (__this,(__this->fields).DKMMLPDKILK,
                 (LabelButton_o *)(LMEHKLFGEHI->fields)._rejectButton,in_x3);
    }
    pBVar3 = (LMEHKLFGEHI->fields)._storeButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pBVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pPVar2 = (__this->fields).AKKPBPEJNNE;
      pBVar3 = (LMEHKLFGEHI->fields)._storeButton;
      if (pPVar2 == (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
        bVar1 = false;
      }
      else {
        bVar1 = (pPVar2->fields).NIADBHNJPAJ != false;
      }
      if (pBVar3 == (ButtonWithIcon_o *)0x0) goto LAB_03450e78;
      SFButton__set_IsFlashing((SFButton_o *)pBVar3,bVar1,(MethodInfo *)0x0);
      PFOMHOLCODE__GPPFAACLBDH
                (__this,(__this->fields).AKKPBPEJNNE,
                 (LabelButton_o *)(LMEHKLFGEHI->fields)._storeButton,in_x3);
    }
    pBVar3 = (LMEHKLFGEHI->fields)._acceptButton;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pBVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pPVar2 = (__this->fields).JMGEHHNGBMI;
    pBVar3 = (LMEHKLFGEHI->fields)._acceptButton;
    if (pPVar2 == (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) {
      bVar1 = false;
    }
    else {
      bVar1 = (pPVar2->fields).NIADBHNJPAJ != false;
    }
    if (pBVar3 != (ButtonWithIcon_o *)0x0) {
      SFButton__set_IsFlashing((SFButton_o *)pBVar3,bVar1,(MethodInfo *)0x0);
      PFOMHOLCODE__GPPFAACLBDH
                (__this,(__this->fields).JMGEHHNGBMI,
                 (LabelButton_o *)(LMEHKLFGEHI->fields)._acceptButton,in_x3);
      return;
    }
  }
LAB_03450e78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


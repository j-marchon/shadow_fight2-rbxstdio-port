// Nekki.SF2.GUI.Dialogs.LotteryDialog$$APJCIKLILGP @ RVA 0x328AEA4

void Nekki_SF2_GUI_Dialogs_LotteryDialog__APJCIKLILGP
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,BKKPAKHJDKB_o *MEJOGHDACNG,
               MethodInfo *method)

{
  int iVar1;
  ADJEBFOPFFF_o *__this_00;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  int32_t local_24;
  
  pMVar8 = (MethodInfo *)MEJOGHDACNG;
  if ((DAT_045672d8 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1617);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1618);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1619);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1620);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&ADJEBFOPFFF_JMKJIJBLDGM_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    DAT_045672d8 = 1;
    pMVar8 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__KNDKMGHNIMK(__this,pMVar8);
  Nekki_SF2_GUI_Dialogs_LotteryDialog__AINGLMJIPKH(__this,method_00);
  if (MEJOGHDACNG == (BKKPAKHJDKB_o *)0x0) {
    return;
  }
  iVar1 = (MEJOGHDACNG->fields).HHJIJKJCEOF;
  if (iVar1 == 4) {
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1617,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1618,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 0) {
      (__this->fields).FBODAFDBNLH = (MEJOGHDACNG->fields).EBJBJCPBFLE;
      thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
      if (__this_00 == (ADJEBFOPFFF_o *)0x0) {
LAB_0338b168:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ADJEBFOPFFF__AEADCLCKCEL(__this_00,(MEJOGHDACNG->fields).EBJBJCPBFLE,false,(MethodInfo *)0x0);
      pMVar8 = extraout_x1_00;
      goto LAB_0338b140;
    }
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1619,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1620,(MethodInfo *)0x0)
    ;
    pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    local_24 = (MEJOGHDACNG->fields).HHJIJKJCEOF;
    pIVar5 = (Il2CppObject *)thunk_FUN_01bda448(ADJEBFOPFFF_JMKJIJBLDGM_TypeInfo,&local_24);
    if (args == (System_Object_array *)0x0) goto LAB_0338b168;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pIVar5,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = pIVar5;
    thunk_FUN_01c20e04(args->m_Items,pIVar5);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(pSVar4,args,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_LotteryDialog__DMKPAPKKDMP(__this,true,true,in_x3);
  pMVar8 = extraout_x1_01;
LAB_0338b140:
  if (((__this->fields).FBODAFDBNLH != (BECIPDJBAOG_o *)0x0) &&
     ((__this->fields).IIMLAADGBEE != (UnityEngine_Coroutine_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_LotteryDialog__KAPGCIMJPED(__this,pMVar8);
  }
  return;
}


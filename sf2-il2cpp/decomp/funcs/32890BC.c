// Nekki.SF2.GUI.Dialogs.LotteryDialog$$EAPNENPIION @ RVA 0x32890BC

void Nekki_SF2_GUI_Dialogs_LotteryDialog__EAPNENPIION
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int32_t JEGMMDPFNIL;
  System_Byte_array *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  PCKJEMMFMKL_o *__this_00;
  MethodInfo *in_x3;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar4;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar5;
  System_String_o *str0;
  
  if ((DAT_045672f4 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1636);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1637);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1638);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1639);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    DAT_045672f4 = 1;
  }
  pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar1,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1636,(MethodInfo *)0x0);
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1637,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  pLVar4 = (__this->fields).DKMMBMBMJBO;
  if ((pLVar4 != (LPGLKMNHELJ_o *)0x0) &&
     (pJVar5 = (pLVar4->fields).FIJPJBGCODO, pJVar5 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0)) {
    str0 = (pJVar5->fields).JIJLBFGKNJK;
    pSVar1 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar1,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1638,(MethodInfo *)0x0)
    ;
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1639,(MethodInfo *)0x0)
    ;
    pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar1,pSVar2,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(str0,pSVar3,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LotteryDialog__GJAHDGBOOPO(__this,true,pSVar3,in_x3);
    __this_00 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (PCKJEMMFMKL_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      JEGMMDPFNIL = PCKJEMMFMKL__LAPHEMPOHMP(__this_00,0xc,1,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF(__this,JEGMMDPFNIL,JEGMMDPFNIL,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


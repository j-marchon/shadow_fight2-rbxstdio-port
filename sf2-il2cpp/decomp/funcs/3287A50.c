// Nekki.SF2.GUI.Dialogs.LotteryDialog$$AIHMNPJOJMF @ RVA 0x3287A50

void Nekki_SF2_GUI_Dialogs_LotteryDialog__AIHMNPJOJMF
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,int32_t JEGMMDPFNIL,
               int32_t KMOHFJKJBMK,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_045672e5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1621);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1622);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_045672e5 = 1;
  }
  pNVar2 = (__this->fields).LabelSpinADViews;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1621,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1622,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  local_44 = JEGMMDPFNIL;
  arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
  local_48 = KMOHFJKJBMK;
  arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
  pSVar1 = System_String__Format(pSVar1,arg0,arg1,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).LabelSpinADViews;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,1 < KMOHFJKJBMK,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


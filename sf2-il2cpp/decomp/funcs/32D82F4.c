// Nekki.SF2.GUI.Pvp.PhaseBox$$OnPhaseTagClick @ RVA 0x32D82F4

void Nekki_SF2_GUI_Pvp_PhaseBox__OnPhaseTagClick
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_array *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_0456759d & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456759d = 1;
    method = extraout_x1;
  }
  handle = Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var;
  iVar1 = (__this->fields).EMDCCMNONEK;
  if ((__this->fields).NLPOEKINGJI == false) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,method);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar4 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (int)pSVar4->max_length;
    iVar1 = iVar1 + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,iVar1 - iVar3 * iVar2,in_x2);
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
  }
  return;
}


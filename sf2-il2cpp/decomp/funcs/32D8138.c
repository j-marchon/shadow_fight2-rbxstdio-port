// Nekki.SF2.GUI.Pvp.PhaseBox$$NextPhase @ RVA 0x32D8138

int32_t Nekki_SF2_GUI_Pvp_PhaseBox__NextPhase
                  (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_array *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  int iVar4;
  
  if ((DAT_0456759d & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456759d = 1;
    method = extraout_x1;
  }
  handle = Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var;
  iVar4 = (__this->fields).EMDCCMNONEK;
  if ((__this->fields).NLPOEKINGJI == false) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,method);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar3 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (int)pSVar3->max_length;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar4 + 1) / iVar1;
    }
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,(iVar4 + 1) - iVar2 * iVar1,in_x2);
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
    iVar4 = (__this->fields).EMDCCMNONEK;
  }
  return iVar4;
}


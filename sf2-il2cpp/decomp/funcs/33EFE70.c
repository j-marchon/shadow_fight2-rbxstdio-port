// FCJBEKHDLAF$$PCPIMJNOMCF @ RVA 0x33EFE70

void FCJBEKHDLAF__PCPIMJNOMCF(FCJBEKHDLAF_o *__this,Il2CppObject *HBHPFKJMGCK,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *extraout_x1;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  
  if ((DAT_04567f10 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567f10 = 1;
    HBHPFKJMGCK = extraout_x1;
  }
  pNVar2 = (__this->fields).HIBPKNAIPLH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,HBHPFKJMGCK);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar1) && ((__this->fields).IOGBJMGAFEB != false)) &&
     ((__this->fields).MDJMIPGAJLL == false)) {
    pNVar2 = (__this->fields).HIBPKNAIPLH;
    (__this->fields).MDJMIPGAJLL = true;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
      Nekki_SF2_GUI_Fight_PreFight__OpenPauseScreen(pNVar2,(MethodInfo *)0x0);
      UnityEngine_Time__set_timeScale(0.0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


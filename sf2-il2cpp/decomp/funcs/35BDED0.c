// Nekki.SF2.GUI.Fight.ViewerFight$$RemovePointsTable @ RVA 0x35BDED0

void Nekki_SF2_GUI_Fight_ViewerFight__RemovePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PointsTable_o **ppNVar2;
  Nekki_SF2_GUI_Fight_PointsTable_o *x;
  
  if ((DAT_04568ef8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ef8 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).HLOILANGFLF;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


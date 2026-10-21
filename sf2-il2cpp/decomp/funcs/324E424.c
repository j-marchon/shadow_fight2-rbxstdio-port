// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ContinueCurrentSlot @ RVA 0x324E424

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ContinueCurrentSlot
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Il2CppObject *message;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  int32_t local_34;
  
  if ((DAT_0456710b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456710b = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  local_34 = NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO;
  message = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadGameAtSaveSlot
            (__this,NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO,in_x2);
  return;
}


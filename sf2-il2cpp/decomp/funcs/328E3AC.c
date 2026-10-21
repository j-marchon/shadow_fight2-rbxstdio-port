// Nekki.SF2.GUI.Dialogs.LotteryDialog.<>c$$FILHPJCAFHA @ RVA 0x328E3AC

void Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c__FILHPJCAFHA
               (Nekki_SF2_GUI_Dialogs_LotteryDialog___c_o *__this,Il2CppObject *value,
               MethodInfo *method)

{
  int *piVar1;
  
  if ((DAT_045672fe & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    __this = (Nekki_SF2_GUI_Dialogs_LotteryDialog___c_o *)
             FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_045672fe = 1;
  }
  if (value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if ((value->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(value);
  }
  piVar1 = (int *)thunk_FUN_01bda96c();
  if (*piVar1 == 2) {
    if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Map_MapScene__SwitchToMapSceneAndOpenRaidMap
              ((System_Action_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  return;
}


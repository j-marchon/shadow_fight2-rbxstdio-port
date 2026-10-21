// Nekki.SF2.GUI.DebugModules.ConsoleUI$$add_OnConsoleCreated @ RVA 0x353E07C

void Nekki_SF2_GUI_DebugModules_ConsoleUI__add_OnConsoleCreated
               (System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_x1;
  System_Action_o *a;
  
  if ((DAT_04568ad8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568ad8 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  a = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
  do {
    pSVar2 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    if (pSVar2 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar2->klass != System_Action_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar2);
      }
    }
                    /* try { // try from 0363e10c to 0373e113 has its CatchHandler @ 0363e1c0 */
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0363e128 to 0373e12f has its CatchHandler @ 0363e1bc */
                    /* try { // try from 0363e130 to 0373e1ab has its CatchHandler @ 0363dff4 */
    pSVar3 = (System_Action_o *)
             FUN_01c07368(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB
                          ,pSVar2,a);
    bVar1 = a != pSVar3;
    a = pSVar3;
  } while (bVar1);
  return;
}


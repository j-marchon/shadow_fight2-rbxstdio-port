// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$Refresh @ RVA 0x31205E8

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__Refresh
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  JCFJFJCKLKG_o *pJVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__StopAddingItems(__this,method);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__GetActiveBoard
                      (__this,method_00);
    pIVar1 = (__this->klass->vtable)._4_unknown.methodPtr;
    method_01 = (__this->klass->vtable)._4_unknown.method;
    if (iVar3 == 1) {
      pJVar4 = (JCFJFJCKLKG_o *)(*pIVar1)(__this,1);
      Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OLKKPOKMJHP
                (__this,pJVar4,method_01);
      return;
    }
    pJVar4 = (JCFJFJCKLKG_o *)(*pIVar1)(__this,2);
    Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OHJHOPAHPCM
              (__this,pJVar4,method_01);
    return;
  }
  return;
}


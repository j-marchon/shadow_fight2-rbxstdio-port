// Nekki.SF2.Core.Quests.QuestsManager$$IsScheduledQuestsEmpty @ RVA 0x3306D24

bool Nekki_SF2_Core_Quests_QuestsManager__IsScheduledQuestsEmpty
               (Nekki_SF2_Core_Quests_QuestsManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_0456775d & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    DAT_0456775d = 1;
  }
  pSVar1 = (__this->fields).GOAJEJNPDFA;
  if (pSVar1 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    return (pSVar1->fields)._size == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


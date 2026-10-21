// Nekki.SF2.Core.Quests.QuestsManager.FMJCOFMECGL$$LLCDPGPAFFP @ RVA 0x3307F90

bool Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL__LLCDPGPAFFP
               (Nekki_SF2_Core_Quests_QuestsManager_FMJCOFMECGL_o *__this,FPPKHNNABAD_o *quest,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  FPPKHNNABAD_o *pFVar2;
  
  pFVar2 = (__this->fields).questStage;
  if (((pFVar2 != (FPPKHNNABAD_o *)0x0) && (quest != (FPPKHNNABAD_o *)0x0)) &&
     (__this_00 = (pFVar2->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0
     )) {
    bVar1 = System_String__Equals
                      (__this_00,(quest->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


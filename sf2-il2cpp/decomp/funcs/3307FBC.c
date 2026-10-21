// Nekki.SF2.Core.Quests.QuestsManager.PPPHDEGLIIA$$NMCABINAHMK @ RVA 0x3307FBC

bool Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA__NMCABINAHMK
               (Nekki_SF2_Core_Quests_QuestsManager_PPPHDEGLIIA_o *__this,FPPKHNNABAD_o *quest,
               MethodInfo *method)

{
  bool bVar1;
  FPPKHNNABAD_o *pFVar2;
  
  if ((quest != (FPPKHNNABAD_o *)0x0) &&
     (pFVar2 = (__this->fields).questStage, pFVar2 != (FPPKHNNABAD_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((quest->fields)._COIPKAKHDFP_k__BackingField,
                       (pFVar2->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    pFVar2 = (__this->fields).questStage;
    if (pFVar2 != (FPPKHNNABAD_o *)0x0) {
      bVar1 = System_String__op_Equality
                        ((quest->fields)._GPEFIOMJHNN_k__BackingField,
                         (pFVar2->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


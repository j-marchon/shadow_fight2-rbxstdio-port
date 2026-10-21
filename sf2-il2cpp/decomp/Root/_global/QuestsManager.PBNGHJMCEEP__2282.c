// TypeDefIndex 2282
// Namespace: 
// [CompilerGenerated]
// private sealed class QuestsManager.PBNGHJMCEEP
// Fields:
//   public string questName; // 0x10

// ===== public void .ctor()  [RVA 0x3306294]
// Nekki.SF2.Core.Quests.QuestsManager.PBNGHJMCEEP$$.ctor @ RVA 0x3306294

void Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP___ctor
               (Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool JGKPIIALJJN(FPPKHNNABAD q)  [RVA 0x33081BC]
// Nekki.SF2.Core.Quests.QuestsManager.PBNGHJMCEEP$$JGKPIIALJJN @ RVA 0x33081BC

bool Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP__JGKPIIALJJN
               (Nekki_SF2_Core_Quests_QuestsManager_PBNGHJMCEEP_o *__this,FPPKHNNABAD_o *q,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((q != (FPPKHNNABAD_o *)0x0) &&
     (__this_00 = (q->fields)._COIPKAKHDFP_k__BackingField, __this_00 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(__this_00,(__this->fields).questName,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


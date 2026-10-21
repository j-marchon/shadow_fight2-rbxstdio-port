// TypeDefIndex 2938
// Namespace: 
// [CompilerGenerated]
// private sealed class ProbabilityContent.CLHDFEHBKGA
// Fields:
//   public DDMHMABAHHD i; // 0x10

// ===== public void .ctor()  [RVA 0x348EFE0]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.CLHDFEHBKGA$$.ctor @ RVA 0x348EFE0

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool PMOFDNANHOL(RaidConfig.HJLEKMDIDPO c)  [RVA 0x348F318]
// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent.CLHDFEHBKGA$$PMOFDNANHOL @ RVA 0x348F318

bool Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA__PMOFDNANHOL
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_CLHDFEHBKGA_o *__this,
               RaidConfig_HJLEKMDIDPO_o *c,MethodInfo *method)

{
  bool bVar1;
  DDMHMABAHHD_o *pDVar2;
  
  if ((c != (RaidConfig_HJLEKMDIDPO_o *)0x0) &&
     (pDVar2 = (__this->fields).i, pDVar2 != (DDMHMABAHHD_o *)0x0)) {
    bVar1 = System_String__op_Equality
                      ((c->fields).super.JIJLBFGKNJK,(pDVar2->fields)._COIPKAKHDFP_k__BackingField,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


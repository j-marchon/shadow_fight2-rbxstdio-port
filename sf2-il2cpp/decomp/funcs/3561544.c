// Nekki.SF2.Core.Fights.ModelContainer$$OBHHDEMEHNJ @ RVA 0x3561544

bool Nekki_SF2_Core_Fights_ModelContainer__OBHHDEMEHNJ
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,HOOAAGABMBL_o *EDLIOMNAEFI,
               HOOAAGABMBL_o *LAPOPEHNEEA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this_00;
  
  if ((EDLIOMNAEFI != (HOOAAGABMBL_o *)0x0) && (LAPOPEHNEEA != (HOOAAGABMBL_o *)0x0)) {
    __this_00 = (EDLIOMNAEFI->fields)._COIPKAKHDFP_k__BackingField;
    if (__this_00 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__Equals
                      (__this_00,(LAPOPEHNEEA->fields)._COIPKAKHDFP_k__BackingField,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}


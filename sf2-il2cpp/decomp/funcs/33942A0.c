// Nekki.SF2.GUI.Profile.ProfileScene$$CBGCMJCJJKP @ RVA 0x33942A0

void Nekki_SF2_GUI_Profile_ProfileScene__CBGCMJCJJKP
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  ECENNHNBAME_o *pEVar1;
  
  pEVar1 = (__this->fields).GCPBEAFOPOA;
  if (pEVar1 == (ECENNHNBAME_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._ModelContainer;
  if (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0) {
    Nekki_SF2_Core_Fights_ModelContainer__PlayAnimation
              (__this_00,(pEVar1->fields).JIJLBFGKNJK,1,(MethodInfo *)0x0);
    (__this->fields).GGIEDAGJFHO = true;
    (__this->fields).GCPBEAFOPOA = (ECENNHNBAME_o *)0x0;
    thunk_FUN_01c20e04(&(__this->fields).GCPBEAFOPOA,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


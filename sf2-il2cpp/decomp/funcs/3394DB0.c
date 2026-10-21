// Nekki.SF2.GUI.Profile.ProfileScene$$ScrollToItemByName @ RVA 0x3394DB0

void Nekki_SF2_GUI_Profile_ProfileScene__ScrollToItemByName
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,int32_t HIIGJGLEOFH,
               System_String_o *JEPIGCLHAMI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_ItemsController_o *pNVar2;
  
  Nekki_SF2_GUI_Profile_ProfileScene__set_CurrentSection
            (__this,HIIGJGLEOFH,(MethodInfo *)JEPIGCLHAMI);
  bVar1 = System_String__IsNullOrEmpty(JEPIGCLHAMI,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar2 = (__this->fields).FOGBEOLOAGF;
  if (pNVar2 != (Nekki_SF2_GUI_Profile_ItemsController_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03494e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pNVar2->klass[1]._1.image)(0,pNVar2,JEPIGCLHAMI,pNVar2->klass[1]._1.gc_desc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


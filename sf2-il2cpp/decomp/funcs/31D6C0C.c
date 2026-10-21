// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$OCFPDBGAFPE @ RVA 0x31D6C0C

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__OCFPDBGAFPE
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,
               Nekki_SF2_GUI_Fight_ActivePerkItem_o *KEFILECBPMF,MethodInfo *method)

{
  System_Collections_Generic_List_ActivePerkItem__o *__this_00;
  
  if ((DAT_04566ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Remove__);
    DAT_04566ceb = 1;
  }
  __this_00 = (__this->fields).DOKOOFIPJGJ;
  if (__this_00 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)KEFILECBPMF,
               Method_System_Collections_Generic_List<ActivePerkItem>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


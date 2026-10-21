// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$LBDDPJHLKPG @ RVA 0x329D26C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  FEKEAPCCOOB_o *__this_00;
  TabView_o *x;
  
  if ((DAT_045673ab & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673ab = 1;
  }
  __this_00 = (__this->fields).HIOOMAJPEJP;
  if (__this_00 != (FEKEAPCCOOB_o *)0x0) {
    x = FEKEAPCCOOB__CKNDOOPOOEF(__this_00,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x != (TabView_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0339d2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*x->klass[1]._1.image)(x,(__this->fields).FBILHKCKHEJ,x->klass[1]._1.gc_desc);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


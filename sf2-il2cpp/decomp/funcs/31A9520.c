// Nekki.SF2.GUI.Map.ShardsButtonView$$OLOBIPCHMCC @ RVA 0x31A9520

void Nekki_SF2_GUI_Map_ShardsButtonView__OLOBIPCHMCC
               (Nekki_SF2_GUI_Map_ShardsButtonView_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_04566b24 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NPKKNCCEIND>__);
    DAT_04566b24 = 1;
  }
  Nekki_SF2_GUI_Map_MapButtonViewBase__OLOBIPCHMCC
            ((Nekki_SF2_GUI_Map_MapButtonViewBase_o *)__this,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)
                     (__this->fields).super.super.ADHBPAAHOKK,
                     Method_DJNBJHPDKDP_OBECCOPBADO<NPKKNCCEIND>__);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,(bool)(~bVar1 & 1),(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


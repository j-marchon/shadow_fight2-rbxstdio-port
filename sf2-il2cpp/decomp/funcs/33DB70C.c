// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$PEMOCAODJBA @ RVA 0x33DB70C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__PEMOCAODJBA
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567e6d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e6d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Shop_Forge_ForgePanel__ILAJJAGPCHI(__this,method);
  __this_00 = (__this->fields)._OnStateChange;
  (__this->fields).NBAADNACNDJ = 2;
  if (__this_00 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


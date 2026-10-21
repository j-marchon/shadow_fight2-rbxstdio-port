// Nekki.SF2.GUI.Fight.ComboModel$$ELAEKEBBFCI @ RVA 0x332C76C

void Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *__this_00;
  
  if ((DAT_045678ce & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_CallEvent__);
    DAT_045678ce = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_TypeInfo);
  Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_LNFENBCODDP_o *)0x0) {
    (__this_00->fields).MDEJIIBDAIE = (__this->fields).ENMLIMOGANA;
    (__this_00->fields).BGHFADDGPAD = ACCIHBHMFPN;
    Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
              ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,(Il2CppObject *)__this_00,
               Method_Nekki_SF2_GUI_SFMonoBehaviour<ComboModel_LNFENBCODDP>_CallEvent__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


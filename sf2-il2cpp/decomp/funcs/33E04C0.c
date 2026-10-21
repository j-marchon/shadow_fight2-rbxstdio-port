// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Free @ RVA 0x33E04C0

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Free(Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  
  if ((DAT_04567e98 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseWeapon_JCDGMAEDFIF__);
    DAT_04567e98 = 1;
  }
  Nekki_SF2_GUI_Pvp_PhaseItem__Free((Nekki_SF2_GUI_Pvp_PhaseItem_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


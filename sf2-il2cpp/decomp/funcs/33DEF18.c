// Nekki.SF2.GUI.Pvp.PhaseWeapon$$Update @ RVA 0x33DEF18

void Nekki_SF2_GUI_Pvp_PhaseWeapon__Update
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  MethodInfo *method_00;
  
  if ((DAT_04567e8c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
    DAT_04567e8c = 1;
  }
  if ((__this->fields).FODBFCKBFDF == false) {
    return;
  }
  __this_00 = (__this->fields)._TableView;
  (__this->fields).FODBFCKBFDF = false;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    if ((__this->fields).ACNLMCEJHII != false) {
      return;
    }
    __this_01 = (__this->fields).LGHNHMJIDIB;
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__;
      DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                              ((System_Collections_Generic_List_object__o *)__this_01,
                               (Il2CppObject *)(__this->fields).DPPANFCEMLK,
                               (MethodInfo_26E5A4C *)
                               Method_System_Collections_Generic_List<HOOAAGABMBL>_IndexOf__);
      Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB(__this,DPJIDNBJIBG,0.0,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


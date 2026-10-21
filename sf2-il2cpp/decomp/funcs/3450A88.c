// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$BLOIEOMIJCF @ RVA 0x3450A88

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BLOIEOMIJCF
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t LHPGDPKKMPF;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_UI_InputField_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *in_x3;
  BKKENCMPLLF_o *__this_02;
  
  if ((DAT_045682a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045682a5 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    __this_01 = (UnityEngine_UI_InputField_o *)
                System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__
                          );
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
      pSVar2 = PCOEHCPGBBG__DNOEDGPCFDG((__this_01->fields).m_Text,(MethodInfo *)0x0);
      pSVar2 = PCOEHCPGBBG__AINGLMLOPMO(pSVar2,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FLLHHEODKPH;
      if (__this_02 != (BKKENCMPLLF_o *)0x0) {
        LHPGDPKKMPF = BKKENCMPLLF__BOENJKAFOEC(__this_02,pSVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                  (__this,1,LHPGDPKKMPF,in_x3);
        UnityEngine_UI_InputField__set_text(__this_01,pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$EMIKPPHJBHM @ RVA 0x344F1B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__EMIKPPHJBHM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t LHPGDPKKMPF;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_Object_o *x;
  BKKENCMPLLF_o *__this_01;
  MethodInfo *in_x3;
  
  if ((DAT_04568296 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568296 = 1;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    x = (UnityEngine_Object_o *)
        System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,
                   Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Item__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if ((x != (UnityEngine_Object_o *)0x0) &&
       (__this_01 = (__this->fields).FLLHHEODKPH, __this_01 != (BKKENCMPLLF_o *)0x0)) {
      LHPGDPKKMPF = BKKENCMPLLF__IHIACHJKIBA
                              (__this_01,(System_String_o *)x[0x10].klass,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError(__this,2,LHPGDPKKMPF,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


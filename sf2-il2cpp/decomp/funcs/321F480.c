// FPPKHNNABAD$$LOAEDHBBCFC @ RVA 0x321F480

bool FPPKHNNABAD__LOAEDHBBCFC(FPPKHNNABAD_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  ACHLOMELAJE_o *__this_02;
  MEMHEPBAJJA_o *__this_03;
  
  if ((DAT_04566f26 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566f26 = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageEndedToRun(__this_00,__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).KCIMMPDKPME;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
      __this_03 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
      (__this->fields)._GJKDJKAKJAP_k__BackingField = 2;
      if (__this_03 != (MEMHEPBAJJA_o *)0x0) {
        MEMHEPBAJJA__MAMEMHEFIKB(__this_03,(MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (__this_02 == (ACHLOMELAJE_o *)0x0) goto LAB_0331f57c;
        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_02,false,(MethodInfo *)0x0);
      }
      return __this_03 != (MEMHEPBAJJA_o *)0x0;
    }
  }
LAB_0331f57c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// FPPKHNNABAD$$IKDPMKOIDMP @ RVA 0x321ED5C

void FPPKHNNABAD__IKDPMKOIDMP
               (FPPKHNNABAD_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,bool PKAHIAJELCG,MethodInfo *method
               )

{
  int32_t iVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *message;
  MEMHEPBAJJA_o *__this_02;
  LCKCDEKNLOA_o *pLVar2;
  
  if ((DAT_04566f21 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
    FUN_01bab630(&StringLiteral_534);
    FUN_01bab630(&StringLiteral_10643);
                    /* try { // try from 0331edb8 to 0341eef3 has its CatchHandler @ 0331edb8
                       catch() { ... } // from try @ 0331edb8 with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f0ac with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f1a4 with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f1ac with catch @ 0331edb8
                       catch() { ... } // from try @ 0331f298 with catch @ 0331edb8 */
    DAT_04566f21 = 1;
  }
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__OnQuestStageStartedToRun
              (__this_00,__this,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).KCIMMPDKPME;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (__this_01,
                 Method_System_Collections_Generic_Dictionary<string,_MEMHEPBAJJA_HIAEDCDJJDJ>_Clear__
                );
      message = System_String__Concat
                          (StringLiteral_10643,(__this->fields)._COIPKAKHDFP_k__BackingField,
                           StringLiteral_534,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      pLVar2 = (__this->fields).LBCPFBBIBCL;
      (__this->fields)._GJKDJKAKJAP_k__BackingField = 1;
      if (PKAHIAJELCG) {
        __this_02 = (__this->fields)._FIEEJDGCLKH_k__BackingField;
        iVar1 = 0;
        if (__this_02 != (MEMHEPBAJJA_o *)0x0) {
          iVar1 = MEMHEPBAJJA__OJBDPLCMPFA(__this_02,(MethodInfo *)0x0);
        }
      }
      else {
        iVar1 = 0;
      }
      if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
        (pLVar2->fields).KMCAGKMDGBB = iVar1;
        pLVar2 = (__this->fields).LBCPFBBIBCL;
        if (pLVar2 != (LCKCDEKNLOA_o *)0x0) {
          LCKCDEKNLOA__MAHFCKJGBPP(pLVar2,AAJBIMFNMBB,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


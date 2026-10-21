// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$Init @ RVA 0x35AF2A8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,IFFFKKMMKFO_o *CIBAPJNKHGA,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this_02;
  EEOMEMBBGNA_o *__this_03;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_StaticFields *pNVar4;
  OJEHKJHEBID_o *local_38;
  
  if ((DAT_04568e74 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TryGetValue__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_KCDLGNNCNIC__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e74 = 1;
  }
  local_38 = (OJEHKJHEBID_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    iVar1 = EEGDOGKBLNG__DHLIBNAGDAD(__this_00,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    }
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields;
    if (pNVar4->PNKHCOIIPLL != iVar1) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields;
      }
      pNVar4->PNKHCOIIPLL = iVar1;
      if (pNVar4->JLLAGIOFBAI == (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0)
      goto LAB_036af4e8;
      System_Collections_Generic_Dictionary<long,_object>__Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pNVar4->JLLAGIOFBAI,
                 Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_Clear__);
    }
    (__this->fields).PDHMLFAMNCO = MGFBPKIBNJI;
    thunk_FUN_01c20e04(&(__this->fields).PDHMLFAMNCO,MGFBPKIBNJI);
    (__this->fields)._LAIJDPOGGKB_k__BackingField = CIBAPJNKHGA;
    thunk_FUN_01c20e04(&(__this->fields)._LAIJDPOGGKB_k__BackingField,CIBAPJNKHGA);
    Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__FBBEKIIDDNM(__this,method_00);
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__HBBGAJGBIJG(__this,method_01);
      pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
      if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
         (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
        iVar1 = (pGVar3->fields).ADEIKPGDIPM.fields.value;
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
        if (__this_02 != (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0) {
          method_02 = (MethodInfo *)&stack0xffffffffffffffc8;
          System_Collections_Generic_Dictionary<long,_object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,iVar1,
                     (Il2CppObject **)method_02,
                     Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_TryGetValue__);
          if (local_38 == (OJEHKJHEBID_o *)0x0) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_03 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
            CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                          thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
            System_Action<object>___ctor();
            if (__this_03 == (EEOMEMBBGNA_o *)0x0) goto LAB_036af4e8;
            EEOMEMBBGNA__ADNALKOMLMF(__this_03,iVar1,CPECAEHDDDB,(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF(__this,local_38,method_02);
          }
          return;
        }
      }
    }
  }
LAB_036af4e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


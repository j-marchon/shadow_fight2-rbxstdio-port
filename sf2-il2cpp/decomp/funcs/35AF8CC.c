// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$KCDLGNNCNIC @ RVA 0x35AF8CC

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__KCDLGNNCNIC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *PBNPKBJKFHE;
  System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *__this_00;
  IFFFKKMMKFO_o *pIVar2;
  GKLPDMLELJF_o *pGVar3;
  int64_t key;
  
  if ((DAT_04568e7e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_set_Item__);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568e7e = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    PBNPKBJKFHE = (MethodInfo *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OJEHKJHEBID>__);
    if (PBNPKBJKFHE == (MethodInfo *)0x0) {
      return;
    }
    pIVar2 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if ((pIVar2 != (IFFFKKMMKFO_o *)0x0) &&
       (pGVar3 = (pIVar2->fields)._IPNPNPOLCFO_k__BackingField, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
      key = (pGVar3->fields).ADEIKPGDIPM.fields.value;
      if (0 < key) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->static_fields->JLLAGIOFBAI;
        if (__this_00 == (System_Collections_Generic_Dictionary_long__OJEHKJHEBID__o *)0x0)
        goto LAB_036af9d8;
        method = PBNPKBJKFHE;
        System_Collections_Generic_Dictionary<long,_object>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,key,
                   (Il2CppObject *)PBNPKBJKFHE,
                   Method_System_Collections_Generic_Dictionary<long,_OJEHKJHEBID>_set_Item__);
      }
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF
                (__this,(OJEHKJHEBID_o *)PBNPKBJKFHE,method);
      return;
    }
  }
LAB_036af9d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


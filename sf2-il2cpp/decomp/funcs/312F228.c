// Nekki.SF2.GUI.Shop.Forge.RecipeUI$$OLHPMPLENEF @ RVA 0x312F228

/* WARNING: Removing unreachable block (ram,0x0322f510) */

bool Nekki_SF2_GUI_Shop_Forge_RecipeUI__OLHPMPLENEF
               (Nekki_SF2_GUI_Shop_Forge_RecipeUI_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  HOOAAGABMBL_o *pHVar5;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  HEFOANCOHDC_o *pHVar6;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_02;
  GGLKHCAIGDI_o *__this_03;
  uint uVar7;
  IGFGDDANEPE_o *pIVar8;
  byte bVar9;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045666ba & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045666ba = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  __this_03 = (__this->fields).PHAGOJCOMPN;
  if ((__this_03 == (GGLKHCAIGDI_o *)0x0) ||
     (pIVar8 = (__this->fields).AIGNPODKOAH, pIVar8 == (IGFGDDANEPE_o *)0x0)) {
    return false;
  }
  pHVar5 = IGFGDDANEPE__JPNNODJPOCL(pIVar8,false,(MethodInfo *)0x0);
  if (pHVar5 != (HOOAAGABMBL_o *)0x0) {
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM
                          (__this_03,pIVar8,(pHVar5->fields)._JDEHPJEIOCI_k__BackingField,true,
                           (MethodInfo *)0x0);
    pIVar8 = (__this->fields).AIGNPODKOAH;
    if ((pIVar8 != (IGFGDDANEPE_o *)0x0) &&
       (__this_00 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
      __this_02 = (pIVar8->fields).PAPANCDPPIF;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      bVar9 = 0;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          pIVar1 = local_80.fields._current;
          if (!bVar2) {
            uVar7 = 9;
            goto LAB_0322f4a8;
          }
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
          if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar6 = FOKJBDHLIMG__JMMDGEOBMOC
                             (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
        } while (pHVar6 == (HEFOANCOHDC_o *)0x0);
        if (__this_02 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_a0,
                             Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                            );
          if (!bVar2) {
            uVar7 = 4;
            goto LAB_0322f440;
          }
          if (local_a0.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                              ((long)&local_a0.fields._current[7].monitor + 4),(MethodInfo *)0x0);
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pHVar6->fields)._MDAJFAPLLOH_k__BackingField.fields,(MethodInfo *)0x0)
          ;
        } while (iVar3 != iVar4);
        bVar9 = 1;
        uVar7 = 8;
LAB_0322f440:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      } while ((uVar7 | 4) == 4);
LAB_0322f4a8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      return (bool)(bVar9 & uVar7 == 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


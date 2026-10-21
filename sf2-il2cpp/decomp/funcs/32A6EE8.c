// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$HCKMKFBGPIM @ RVA 0x32A6EE8

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *pNVar3;
  Il2CppObject *pIVar4;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  BNAIBAODKAK_o *__this_01;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_o *__this_02;
  BNAIBAODKAK_array *pBVar6;
  uint uVar7;
  
  if ((DAT_045673fc & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<SelectCell>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673fc = 1;
  }
  if ((__this->fields).super.NKIKDJEPECM != false) {
    return;
  }
  pNVar3 = (__this->fields)._playerOne;
  if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
    Nekki_SF2_GUI_Pvp_PhaseBox__Init(pNVar3,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._playerTwo;
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) {
      Nekki_SF2_GUI_Pvp_PhaseBox__Init(pNVar3,(MethodInfo *)0x0);
      pBVar6 = (__this->fields).DLCCJFCKAJL;
      if (pBVar6 != (BNAIBAODKAK_array *)0x0) {
        uVar1 = (uint)pBVar6->max_length;
        method_00 = extraout_x1;
        if (0 < (int)uVar1) {
          uVar7 = 0;
          do {
            if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            __this_01 = pBVar6->m_Items[(int)uVar7];
            if (__this_01 == (BNAIBAODKAK_o *)0x0) goto LAB_033a70c8;
            bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_01,(MethodInfo *)0x0);
            if (bVar2) {
              pUVar5 = (__this->fields).super.selectCellPrefab;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pUVar5 = (UnityEngine_GameObject_o *)
                       UnityEngine_Object__Instantiate<object>
                                 ((Il2CppObject *)pUVar5,
                                  Method_UnityEngine_Object_Instantiate<GameObject>__);
              if (((pUVar5 == (UnityEngine_GameObject_o *)0x0) ||
                  (pIVar4 = UnityEngine_GameObject__GetComponent<object>
                                      (pUVar5,
                                       Method_UnityEngine_GameObject_GetComponent<SelectCell>__),
                  pIVar4 == (Il2CppObject *)0x0)) || (pIVar4[2].klass == (Il2CppClass *)0x0))
              goto LAB_033a70c8;
              Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                        ((Nekki_SF2_GUI_ResolutionImage_o *)pIVar4[2].klass,
                         (__this_01->fields).DGGHNFBCNGI,(MethodInfo *)0x0);
              __this_02 = pIVar4[2].monitor;
              bVar2 = BNAIBAODKAK__PLGBAOHOBLE(__this_01,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_033a70c8;
              UnityEngine_GameObject__SetActive(__this_02,bVar2,(MethodInfo *)0x0);
            }
            else {
              pUVar5 = (__this->fields).super.lockedCellPrefab;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pUVar5 = (UnityEngine_GameObject_o *)
                       UnityEngine_Object__Instantiate<object>
                                 ((Il2CppObject *)pUVar5,
                                  Method_UnityEngine_Object_Instantiate<GameObject>__);
            }
            __this_00 = (__this->fields).super._selectTable;
            if (__this_00 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_033a70c8;
            Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem(__this_00,pUVar5,(MethodInfo *)0x0);
            uVar1 = (uint)pBVar6->max_length;
            uVar7 = uVar7 + 1;
            method_00 = extraout_x1_00;
          } while ((int)uVar7 < (int)uVar1);
        }
        if ((__this->fields).PNCOPANDAGE == false) {
          routine = Nekki_SF2_GUI_Pvp_CharacterSelectModule__LoadWeaponImages(__this,method_00);
          UnityEngine_MonoBehaviour__StartCoroutine
                    ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        }
        Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
                  ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_033a70c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


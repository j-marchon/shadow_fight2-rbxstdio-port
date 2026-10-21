// Nekki.SF2.GUI.Map.ZoneScrollItem$$FPODMPDLBLL @ RVA 0x3348904

void Nekki_SF2_GUI_Map_ZoneScrollItem__FPODMPDLBLL
               (Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this,OOMHDDBCBJP_o *ODPBAKKAAMP,
               int32_t FAOACNMBIME,bool MJDICHGKPGE,bool DKEIBNDDFOM,bool NLBIOFGMMOO,
               MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  System_Collections_Generic_List_BattleButton__o *__this_00;
  Nekki_SF2_GUI_Map_BattleButton_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  int32_t local_44;
  
  local_44 = FAOACNMBIME;
  if ((DAT_045679d8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BattleButton>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_5418);
    DAT_045679d8 = 1;
  }
  if (ODPBAKKAAMP != (OOMHDDBCBJP_o *)0x0) {
    __this_00 = (__this->fields).PGCBEJGMIMA;
    if (__this_00 == (System_Collections_Generic_List_BattleButton__o *)0x0) {
LAB_03448b88:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (FAOACNMBIME < (__this_00->fields)._size) {
      pMVar5 = Method_System_Collections_Generic_List<BattleButton>_get_Item__;
      __this_01 = (Nekki_SF2_GUI_Map_BattleButton_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,FAOACNMBIME,
                             (MethodInfo_26E4ADC *)
                             Method_System_Collections_Generic_List<BattleButton>_get_Item__);
      if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_03448b88;
      bVar1 = (__this_01->fields).KAKCIFAKCBG;
      bVar2 = OOMHDDBCBJP__KFMAFEPOEIB(ODPBAKKAAMP,(MethodInfo *)0x0);
      if ((bVar1 != false) != bVar2) {
        __this_01 = Nekki_SF2_GUI_Map_ZoneScrollItem__MHGPPDDCAPI(__this,ODPBAKKAAMP,pMVar5);
      }
      (ODPBAKKAAMP->fields).HHDBIGKBMEC = MJDICHGKPGE;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (MJDICHGKPGE) {
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) goto LAB_03448b88;
          if (NLBIOFGMMOO) {
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            bVar2 = OOMHDDBCBJP__EFLKILFFJKH(ODPBAKKAAMP,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03448b88;
            UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
          }
          else {
            Nekki_SF2_GUI_Map_BattleButton__SetAlpha(__this_01,0.0,0.0,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03448b88;
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_BattleButton__SetAlpha(__this_01,1.0,0.5,(MethodInfo *)0x0);
          }
        }
        (__this->fields).KOGBPIPIKFA = ODPBAKKAAMP;
        thunk_FUN_01c20e04(&(__this->fields).KOGBPIPIKFA,ODPBAKKAAMP);
        pMVar5 = extraout_x1_02;
      }
      else {
        bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0)
        ;
        pMVar5 = extraout_x1;
        if (bVar2) {
          if ((__this_01 == (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) ||
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
             pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03448b88;
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          pMVar5 = extraout_x1_00;
        }
        if (ODPBAKKAAMP == (__this->fields).KOGBPIPIKFA) {
          Nekki_SF2_GUI_Map_ZoneScrollItem__SelectFirstBattle(__this,pMVar5);
          pMVar5 = extraout_x1_01;
        }
      }
      if (DKEIBNDDFOM) {
        Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this,pMVar5);
        return;
      }
    }
    else {
      pSVar4 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_5418,pSVar4,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    }
  }
  return;
}


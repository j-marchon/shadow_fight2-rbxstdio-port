// Nekki.SF2.GUI.Map.MapScene$$ChangeRaid @ RVA 0x35843F8

void Nekki_SF2_GUI_Map_MapScene__ChangeRaid
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t BFGHCDJJJOO,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_RaidMapContainer_o **GBCPJHKADAD;
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Map_MapContainer_o *pNVar3;
  CHDGOFBHAFI_o *pCVar4;
  Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *pNVar5;
  OOMHDDBCBJP_o *pOVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_RaidMapUIModule_o *pNVar7;
  Nekki_SF2_GUI_Map_RaidQuestsButton_o *pNVar8;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **PGEOELLFHCH;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar9;
  
  if ((DAT_04568cec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Util_JGJFNOOGAEP<RaidMapContainer>__);
    FUN_01bab630(&StringLiteral_9131);
    DAT_04568cec = 1;
  }
  PGEOELLFHCH = &(__this->fields).CLKPHCHEEJA;
  pNVar9 = *PGEOELLFHCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*PGEOELLFHCH == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) goto LAB_036846ec;
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*PGEOELLFHCH,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar9 = Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF(__this,BFGHCDJJJOO,true,in_x3);
  (__this->fields).CLKPHCHEEJA = pNVar9;
  thunk_FUN_01c20e04(PGEOELLFHCH,pNVar9);
  pNVar9 = (__this->fields).CLKPHCHEEJA;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar9,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_9131,(MethodInfo *)0x0);
    return;
  }
  pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
  if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
    if ((__this->fields).KFKABLNIFDP < BFGHCDJJJOO) {
      Nekki_SF2_GUI_Map_MapContainer__OpenRightNow(pNVar3,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
      if (pNVar3 == (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_036846ec;
      Nekki_SF2_GUI_Map_MapContainer__Close(pNVar3,(MethodInfo *)0x0);
    }
    else {
      Nekki_SF2_GUI_Map_MapContainer__CloseRightNow(pNVar3,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_Map_MapContainer_o *)*PGEOELLFHCH ==
          (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) goto LAB_036846ec;
      Nekki_SF2_GUI_Map_MapContainer__Open
                ((Nekki_SF2_GUI_Map_MapContainer_o *)*PGEOELLFHCH,(MethodInfo *)0x0);
    }
    (__this->fields).KFKABLNIFDP = BFGHCDJJJOO;
    GBCPJHKADAD = &(__this->fields).OPPIFBJOLBI;
    Util__JGJFNOOGAEP<object>
              ((Il2CppObject **)GBCPJHKADAD,(Il2CppObject **)PGEOELLFHCH,
               Method_Util_JGJFNOOGAEP<RaidMapContainer>__);
    pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).CLKPHCHEEJA;
    if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
      Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,false,(MethodInfo *)0x0);
      pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)*GBCPJHKADAD;
      if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
        Nekki_SF2_GUI_Map_MapContainer__SetLampsAndNameEnabled(pNVar3,true,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
        if (pCVar4 != (CHDGOFBHAFI_o *)0x0) {
          (pCVar4->fields).ANDOENDCBPM = (__this->fields).KFKABLNIFDP;
          Nekki_SF2_GUI_Map_MapScene__IIFBNHGGKBH(__this,method_00);
          pNVar5 = (__this->fields).FLAMCGAKENN;
          if (pNVar5 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) {
            pNVar3 = (Nekki_SF2_GUI_Map_MapContainer_o *)(__this->fields).OPPIFBJOLBI;
            pOVar6 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF(pNVar5,(MethodInfo *)0x0);
            if (pNVar3 != (Nekki_SF2_GUI_Map_MapContainer_o *)0x0) {
              method_03 = (MethodInfo *)0x0;
              Nekki_SF2_GUI_Map_MapContainer__SelectBattle(pNVar3,pOVar6,0.0,(MethodInfo *)0x0);
              pNVar5 = (__this->fields).FLAMCGAKENN;
              if (pNVar5 != (Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ_o *)0x0) {
                pOVar6 = Nekki_SF2_GUI_Map_MapScene_HODBNGIFLEJ__FLCKLDFJPGF
                                   (pNVar5,(MethodInfo *)0x0);
                Nekki_SF2_GUI_Map_MapScene__PIMIMOACBNG(__this,pOVar6,method_03);
                Nekki_SF2_GUI_Map_MapScene__UpdateCurrentZone(__this,method_01);
                Nekki_SF2_GUI_Map_MapScene__FFFFAHJOOJP(__this,method_02);
                if ((__this->fields)._raidDailyButtonHideLogic == 1) {
                  pNVar7 = (__this->fields).FMIFNIIJJNK;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar1) {
                    pNVar7 = (__this->fields).FMIFNIIJJNK;
                    if (pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) {
                      pNVar8 = (pNVar7->fields)._RaidDailyQuestsButton_k__BackingField;
                      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      bVar1 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)pNVar8,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if (!bVar1) {
                        return;
                      }
                      pNVar7 = (__this->fields).FMIFNIIJJNK;
                      if (((pNVar7 != (Nekki_SF2_GUI_RaidMapUIModule_o *)0x0) &&
                          (pNVar8 = (pNVar7->fields)._RaidDailyQuestsButton_k__BackingField,
                          pNVar8 != (Nekki_SF2_GUI_Map_RaidQuestsButton_o *)0x0)) &&
                         (pUVar2 = UnityEngine_Component__get_gameObject
                                             ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
                         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    goto LAB_036846ec;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_036846ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


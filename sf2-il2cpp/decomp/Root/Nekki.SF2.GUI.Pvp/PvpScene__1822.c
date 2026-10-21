// TypeDefIndex 1822
// Namespace: Nekki.SF2.GUI.Pvp
// public class PvpScene : Scene<PvpScene>
// Fields:
//   public static bool forceOpenCharacters; // 0x0
//   private const string EIMGAMOELIN = "PvpBattle|pvp|1";
//   private PlayerMenu NNLCCJDPNBD; // 0x90
//   private CharacterSelectModule MPPLJPIAGDK; // 0x98
//   private LocationSelectModule IIBLCIFHCCF; // 0xA0
//   private RandomSelectionModule FLABENKGFDF; // 0xA8
//   private string JANJPDGLLNE; // 0xB0
//   private string IDPEJMKPFNA; // 0xB8
//   private string GOGMCKIMHDH; // 0xC0
//   private PvPHintController HJBFNKLPBFL; // 0xC8
//   private static NLIDHEAMLMC DHDNCFLOPNH; // 0x8
//   private static NLIDHEAMLMC IHDCFNPHCHM; // 0x10

// ===== public static void SwitchPlayerOneInput()  [RVA 0x321BBF0]
// Nekki.SF2.GUI.Pvp.PvpScene$$SwitchPlayerOneInput @ RVA 0x321BBF0

void Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerOneInput(MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_00;
  MethodInfo *in_x2;
  
  if ((DAT_04566f08 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    DAT_04566f08 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      return;
    }
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Pvp_PvpScene__DDNKEKIOAMP
              (Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,
               Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,in_x2);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_00 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void SwitchPlayerTwoInput()  [RVA 0x321BD40]
// Nekki.SF2.GUI.Pvp.PvpScene$$SwitchPlayerTwoInput @ RVA 0x321BD40

void Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerTwoInput(MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_00;
  MethodInfo *in_x2;
  
  if ((DAT_04566f09 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    DAT_04566f09 = 1;
  }
  __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      return;
    }
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_Pvp_PvpScene__DDNKEKIOAMP
              (Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,
               Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,in_x2);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (__this_00 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_00 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_PvPHintController__RefreshHintsTrackingDevices(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PJKHAJKEHEL JHKGOBPPALJ(string HIGMGOGMAMK, AMJPDLOCCNP HEHMPFLAEGE)  [RVA 0x321BE18]
// Nekki.SF2.GUI.Pvp.PvpScene$$JHKGOBPPALJ @ RVA 0x321BE18

PJKHAJKEHEL_o *
Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
          (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *HIGMGOGMAMK,int32_t HEHMPFLAEGE,
          MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  NLPJLHOEAOE_o *pNVar3;
  NLPJLHOEAOE_NNODIMKLNFM_o *pNVar4;
  System_String_o *message;
  NLPJLHOEAOE_o *pNVar5;
  System_Xml_XmlNode_o *pSVar6;
  PJKHAJKEHEL_o *pPVar7;
  HOOAAGABMBL_o *pHVar8;
  IFKFDFGNMMN_o *pIVar9;
  PJKHAJKEHEL_o *pPVar10;
  
  if ((DAT_04566f0a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_14859/*"Warrior"*/);
    FUN_01bab630(&StringLiteral_20433/*"random"*/);
    FUN_01bab630(&StringLiteral_7154/*"I can't find template named "*/);
    DAT_04566f0a = 1;
  }
  if (HIGMGOGMAMK != (System_String_o *)0x0) {
    bVar1 = System_String__Equals(HIGMGOGMAMK,StringLiteral_20433/*"random"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields).MPPLJPIAGDK;
      if (pNVar2 == (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) goto LAB_0331c020;
      HIGMGOGMAMK = Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetRandomItem(pNVar2,(MethodInfo *)0x0)
      ;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
      pNVar4 = NLPJLHOEAOE__ADKMBOALAKN(pNVar3,HIGMGOGMAMK,(MethodInfo *)0x0);
      if (pNVar4 == (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) {
        message = System_String__Concat(StringLiteral_7154/*"I can't find template named "*/,HIGMGOGMAMK,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if (((pNVar5 != (NLPJLHOEAOE_o *)0x0) &&
          (pIVar9 = (pNVar5->fields).OMDCNDHOACL, pIVar9 != (IFKFDFGNMMN_o *)0x0)) &&
         (pSVar6 = (pIVar9->fields)._OLIGHNIEIGK_k__BackingField,
         pSVar6 != (System_Xml_XmlNode_o *)0x0)) {
        pSVar6 = (System_Xml_XmlNode_o *)
                 (*(pSVar6->klass->vtable)._51_get_Item.methodPtr)
                           (pSVar6,StringLiteral_14859/*"Warrior"*/,(pSVar6->klass->vtable)._51_get_Item.method);
        if ((pNVar4 != (NLPJLHOEAOE_NNODIMKLNFM_o *)0x0) && (pNVar3 != (NLPJLHOEAOE_o *)0x0)) {
          pPVar7 = NLPJLHOEAOE__MDEGKNMDKPN
                             (pNVar3,pSVar6,(pNVar4->fields).BAKIMFMMFMP,false,(MethodInfo *)0x0);
          pPVar10 = (pNVar4->fields).BAKIMFMMFMP;
          if ((pPVar10 != (PJKHAJKEHEL_o *)0x0) && (pPVar7 != (PJKHAJKEHEL_o *)0x0)) {
            (pPVar7->fields).NILOEHGNJNL = (pPVar10->fields).NILOEHGNJNL;
            thunk_FUN_01c20e04(&(pPVar7->fields).NILOEHGNJNL);
            pPVar10 = (pNVar4->fields).BAKIMFMMFMP;
            if (pPVar10 != (PJKHAJKEHEL_o *)0x0) {
              (pPVar7->fields).NBPNHMKOJKB = (pPVar10->fields).NBPNHMKOJKB;
              thunk_FUN_01c20e04(&(pPVar7->fields).NBPNHMKOJKB);
              pNVar2 = (__this->fields).MPPLJPIAGDK;
              if (pNVar2 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
                pHVar8 = Nekki_SF2_GUI_Pvp_CharacterSelectModule__GetPlayerWeapon
                                   (pNVar2,HIGMGOGMAMK,HEHMPFLAEGE,(MethodInfo *)0x0);
                (pPVar7->fields).PNAAPNFPCPI = pHVar8;
                thunk_FUN_01c20e04();
                return pPVar7;
              }
            }
          }
        }
      }
    }
  }
LAB_0331c020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLODGLDFFGL()  [RVA 0x321C024]
// Nekki.SF2.GUI.Pvp.PvpScene$$FLODGLDFFGL @ RVA 0x321C024

void Nekki_SF2_GUI_Pvp_PvpScene__FLODGLDFFGL
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  System_Action_string__string__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this_00;
  
  if ((DAT_04566f0b & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f0b = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MPPLJPIAGDK;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo,method);
  System_Action<object,_object>___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void EEGOPNGLBMJ()  [RVA 0x321C0B4]
// Nekki.SF2.GUI.Pvp.PvpScene$$EEGOPNGLBMJ @ RVA 0x321C0B4

void Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *__this_00;
  AFFHKININGD_o *__this_01;
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  PJKHAJKEHEL_o *pPVar5;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar6;
  Il2CppObject *pIVar7;
  ACHLOMELAJE_o *pAVar8;
  PAMEPBLOLPB_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566f0c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_2279/*"<color=green>FirstPlayer:</color> "*/);
    FUN_01bab630(&StringLiteral_260/*" <color=green>with weapon:</color> "*/);
    FUN_01bab630(&StringLiteral_3428/*"Battle not found : PvpBattle|pvp|1"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8525/*"Load Location "*/);
    FUN_01bab630(&StringLiteral_2280/*"<color=green>SecondPlayer:</color> "*/);
    FUN_01bab630(&StringLiteral_9259/*"Music"*/);
    FUN_01bab630(&StringLiteral_10600/*"PvpBattle|pvp|1"*/);
    DAT_04566f0c = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NLPJLHOEAOE_o *)0x0) {
    __this_01 = NLPJLHOEAOE__POGAPHAJGBC(__this_00,StringLiteral_10600/*"PvpBattle|pvp|1"*/,(MethodInfo *)0x0);
    if (__this_01 == (AFFHKININGD_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_3428/*"Battle not found : PvpBattle|pvp|1"*/,(MethodInfo *)0x0);
      return;
    }
    (__this_01->fields).JDNKKGPNHPB = 0x11;
    pSVar1 = Nekki_SF2_GUI_Pvp_PvpScene__MCFIGAFCFIO(__this,method_00);
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
         (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0),
         pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
        pSVar4 = (System_String_o *)
                 (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        (__this_01->fields).LAFKEHDGGND = pSVar4;
        thunk_FUN_01c20e04();
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
        if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
           (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_9259/*"Music"*/,(MethodInfo *)0x0),
           pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
          pSVar4 = (System_String_o *)
                   (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
          (__this_01->fields).GLDHKALMIBD = pSVar4;
          thunk_FUN_01c20e04(&(__this_01->fields).GLDHKALMIBD);
          pSVar4 = System_String__Concat
                             (StringLiteral_8525/*"Load Location "*/,(__this_01->fields).LAFKEHDGGND,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
          UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
          AFFHKININGD__GMPJALMLLCG(__this_01,(MethodInfo *)0x0);
          AFFHKININGD__GFGALPDANIJ(__this_01,(MethodInfo *)0x0);
          pPVar5 = Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
                             (__this,(__this->fields).IDPEJMKPFNA,1,in_x3);
          AFFHKININGD__CFFIDFOGCFK(__this_01,pPVar5,(MethodInfo *)0x0);
          pPVar5 = Nekki_SF2_GUI_Pvp_PvpScene__JHKGOBPPALJ
                             (__this,(__this->fields).JANJPDGLLNE,0,in_x3);
          AFFHKININGD__GIMGMADOEMF(__this_01,pPVar5,(MethodInfo *)0x0);
          pSVar6 = (__this_01->fields).NNHINPLPDHJ;
          if (pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) {
            pIVar7 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (pSVar6 = (__this_01->fields).NNHINPLPDHJ,
               pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
              pSVar4 = pIVar7[0x18].monitor;
              pIVar7 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                  Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__);
              if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[0xc].klass != (Il2CppClass *)0x0)) {
                pSVar4 = System_String__Concat
                                   (StringLiteral_2279/*"<color=green>FirstPlayer:</color> "*/,pSVar4,StringLiteral_260/*" <color=green>with weapon:</color> "*/,
                                    (System_String_o *)((pIVar7[0xc].klass)->_1).namespaze,
                                    (MethodInfo *)0x0);
                UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                pSVar6 = (__this_01->fields).MECHOBPGHFJ;
                if (((pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) &&
                    (pIVar7 = System_Collections_Generic_List<object>__get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                         Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__
                                        ), pIVar7 != (Il2CppObject *)0x0)) &&
                   (pSVar6 = (__this_01->fields).MECHOBPGHFJ,
                   pSVar6 != (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0)) {
                  pSVar4 = pIVar7[0x18].monitor;
                  pIVar7 = System_Collections_Generic_List<object>__get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                      Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Item__
                                     );
                  if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[0xc].klass != (Il2CppClass *)0x0))
                  {
                    pSVar4 = System_String__Concat
                                       (StringLiteral_2280/*"<color=green>SecondPlayer:</color> "*/,pSVar4,StringLiteral_260/*" <color=green>with weapon:</color> "*/,
                                        (System_String_o *)((pIVar7[0xc].klass)->_1).namespaze,
                                        (MethodInfo *)0x0);
                    UnityEngine_Debug__Log((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
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
                    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                      CJNHFNHJHPE = ACHLOMELAJE__LHFJEODGOJL
                                              (pAVar8,(__this_01->fields).KOILJHHCIEE,
                                               (MethodInfo *)0x0);
                      AFFHKININGD__HKBKHKMMBFG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
                      if (DAT_04565b7d == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04565b7d = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                      if (pAVar8 != (ACHLOMELAJE_o *)0x0) {
                        CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar8,false,(MethodInfo *)0x0);
                        __this_02 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                        if (__this_02 != (NDPMLPGANCI_o *)0x0) {
                          NDPMLPGANCI__EKPAFDJIAGI
                                    (__this_02,6,(Il2CppObject *)__this_01,
                                     (System_Action_object__o *)0x0,true,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PlayerMenu get_PlayerMenu()  [RVA 0x321C9A4]
// Nekki.SF2.GUI.Pvp.PvpScene$$get_PlayerMenu @ RVA 0x321C9A4

Nekki_SF2_GUI_Pvp_PlayerMenu_o *
Nekki_SF2_GUI_Pvp_PvpScene__get_PlayerMenu(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  return (__this->fields).NNLCCJDPNBD;
}


// ===== private void HONKIIHKLOB(InputDevice HBHPFKJMGCK)  [RVA 0x321C9AC]
// Nekki.SF2.GUI.Pvp.PvpScene$$HONKIIHKLOB @ RVA 0x321C9AC

void Nekki_SF2_GUI_Pvp_PvpScene__HONKIIHKLOB
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,InControl_InputDevice_o *HBHPFKJMGCK,
               MethodInfo *method)

{
  bool CJNHFNHJHPE;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar1;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_00;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  
  CJNHFNHJHPE = Nekki_SF2_GUI_Pvp_PvpScene__ABEMBBBAFPP(__this,(MethodInfo *)HBHPFKJMGCK);
  pNVar2 = (__this->fields).MPPLJPIAGDK;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    (*(pNVar2->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
              (pNVar2,(ulong)CJNHFNHJHPE,(pNVar2->klass->vtable)._8_SetSecondPlayerAvailable.method)
    ;
    pNVar1 = (__this->fields).IIBLCIFHCCF;
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      (*(pNVar1->klass->vtable)._8_SetSecondPlayerAvailable.methodPtr)
                (pNVar1,(ulong)CJNHFNHJHPE,
                 (pNVar1->klass->vtable)._8_SetSecondPlayerAvailable.method);
      __this_00 = (__this->fields).NNLCCJDPNBD;
      if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0) {
        Nekki_SF2_GUI_Pvp_PlayerMenu__SetSecondPlayerAvailable
                  (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PNPIHIBJKLO(string NEBFODGJBJM, string IJIHFOFKBAI)  [RVA 0x321CA44]
// Nekki.SF2.GUI.Pvp.PvpScene$$PNPIHIBJKLO @ RVA 0x321CA44

void Nekki_SF2_GUI_Pvp_PvpScene__PNPIHIBJKLO
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *NEBFODGJBJM,
               System_String_o *IJIHFOFKBAI,MethodInfo *method)

{
  System_Action_string__string__o *pSVar1;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar2;
  System_Action_o *CJNHFNHJHPE;
  System_String_o **ppSVar3;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar4;
  
  if ((DAT_04566f0d & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f0d = 1;
  }
  pNVar4 = (__this->fields).MPPLJPIAGDK;
  pSVar1 = (System_Action_string__string__o *)
           thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
  System_Action<object,_object>___ctor();
  if (pNVar4 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,pSVar1,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).MPPLJPIAGDK;
    if (pNVar4 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar4,(MethodInfo *)0x0);
      pNVar2 = (__this->fields).IIBLCIFHCCF;
      if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar2,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).IIBLCIFHCCF;
        pSVar1 = (System_Action_string__string__o *)
                 thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
        System_Action<object,_object>___ctor();
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
          Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar2,pSVar1,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).IIBLCIFHCCF;
          CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          if (pNVar2 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
            Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersBack
                      ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
            ppSVar3 = &(__this->fields).JANJPDGLLNE;
            *ppSVar3 = NEBFODGJBJM;
            thunk_FUN_01c20e04(ppSVar3,NEBFODGJBJM);
            ppSVar3 = &(__this->fields).IDPEJMKPFNA;
            *ppSVar3 = IJIHFOFKBAI;
            thunk_FUN_01c20e04(ppSVar3,IJIHFOFKBAI);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x321CBC8]
// Nekki.SF2.GUI.Pvp.PvpScene$$GIENGNEGHPJ @ RVA 0x321CBC8

void Nekki_SF2_GUI_Pvp_PvpScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar2;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar3;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *pNVar5;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar6;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar7;
  COOJKPHHMCD_o *pCVar8;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar9;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  MethodInfo *method_00;
  PBAKFOBIHEG_o *pPVar10;
  System_Collections_IEnumerator_o *pSVar11;
  VirtualInvokeData *pVVar12;
  MethodInfo *method_01;
  InControl_InputDevice_o *HBHPFKJMGCK;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar13;
  ulong uVar14;
  int32_t *piVar15;
  JPGJLKENNCC_o *__this_00;
  undefined4 local_54;
  
  if ((DAT_04566f0e & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<CharacterSelectModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<LocationSelectModule>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PlayerMenu>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PvPHintController>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RandomSelectionModule>__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_GIENGNEGHPJ__);
    DAT_04566f0e = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<PvpScene>_GIENGNEGHPJ__);
  pNVar2 = (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<CharacterSelectModule>__);
  (__this->fields).MPPLJPIAGDK = pNVar2;
  thunk_FUN_01c20e04();
  pNVar3 = (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<LocationSelectModule>__);
  (__this->fields).IIBLCIFHCCF = pNVar3;
  thunk_FUN_01c20e04();
  pNVar4 = (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<RandomSelectionModule>__);
  (__this->fields).FLABENKGFDF = pNVar4;
  thunk_FUN_01c20e04();
  pNVar5 = (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PlayerMenu>__);
  (__this->fields).NNLCCJDPNBD = pNVar5;
  thunk_FUN_01c20e04();
  pNVar6 = (Nekki_SF2_GUI_Pvp_PvPHintController_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<PvPHintController>__);
  (__this->fields).HJBFNKLPBFL = pNVar6;
  thunk_FUN_01c20e04();
  Nekki_SF2_GUI_Pvp_PvpScene__HGFEFHNKEAB(__this,method_01);
  pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode(pNVar7,true,(MethodInfo *)0x0)
    ;
    pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    pCVar8 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
    COOJKPHHMCD___ctor(pCVar8,(Il2CppObject *)__this,Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__
                       ,(MethodInfo *)0x0);
    if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
      Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceConnected
                (pNVar7,pCVar8,(MethodInfo *)0x0);
      pNVar7 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
      pCVar8 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
      COOJKPHHMCD___ctor(pCVar8,(Il2CppObject *)__this,
                         Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
        Nekki_SF2_Core_InputControllers_GamePadController__add_OnDeviceDisconnected
                  (pNVar7,pCVar8,(MethodInfo *)0x0);
        pNVar9 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar9 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_00 = (pNVar9->fields).GMLEPHMBMPD;
          PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                        thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_54 = 0;
          method_00 = (MethodInfo *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_54);
          if (__this_00 != (JPGJLKENNCC_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,PKKMGBOIDJD,(System_Enum_o *)method_00
                       ,Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
            Nekki_SF2_GUI_Pvp_PvpScene__HONKIIHKLOB(__this,HBHPFKJMGCK,method_00);
            if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DKEOKAONIIB_TypeInfo->static_fields->LDBHFHDLBND != false) {
              pPVar10 = CoroutineManager__get_Current((MethodInfo *)0x0);
              pSVar11 = Nekki_SF2_GUI_Pvp_PvpScene__KFDOLNHODBI(__this,method_02);
              if (pPVar10 == (PBAKFOBIHEG_o *)0x0) goto LAB_0331cf64;
              pPVar13 = pPVar10->klass;
              uVar1._0_1_ = (pPVar13->_2).rank;
              uVar1._1_1_ = (pPVar13->_2).minimumAlignment;
              uVar14 = (ulong)uVar1;
              if (uVar14 != 0) {
                piVar15 = &((pPVar13->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    pVVar12 = pPVar13->vtable + *piVar15;
                    goto LAB_0331cf34;
                  }
                  uVar14 = uVar14 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar14 != 0);
              }
              pVVar12 = (VirtualInvokeData *)FUN_01b81914(pPVar10,PBAKFOBIHEG_TypeInfo,0);
LAB_0331cf34:
              (*pVVar12->methodPtr)(pPVar10,pSVar11,1,pVVar12->method);
            }
            return;
          }
        }
      }
    }
  }
LAB_0331cf64:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKHAKLDEIJI(ADINBPPGIOA NAIJBCMHBFK, int EADCEBLKJEA, FBBNEILNOKK AAJGEHHPMGH)  [RVA 0x321CFD8]
// Nekki.SF2.GUI.Pvp.PvpScene$$GKHAKLDEIJI @ RVA 0x321CFD8

void Nekki_SF2_GUI_Pvp_PvpScene__GKHAKLDEIJI
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,int32_t NAIJBCMHBFK,int32_t EADCEBLKJEA,
               int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  ACHLOMELAJE_o *__this_00;
  NDPMLPGANCI_o *__this_01;
  NLIDHEAMLMC_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *pNVar4;
  
  if ((DAT_04566f0f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo,NAIJBCMHBFK);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f0f = 1;
  }
  if ((AAJGEHHPMGH & 0xfffffffeU) != 0x16) {
    return;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  if (pNVar3 == (NLIDHEAMLMC_o *)0x0) goto LAB_0331d178;
  if ((pNVar3->fields).OFFPEKODFPE == EADCEBLKJEA) {
    pNVar4 = (__this->fields).HJBFNKLPBFL;
    if ((pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) ||
       (pNVar2 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)&(pNVar4->fields).IJAPOOKEGNE,
       pNVar2 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) goto LAB_0331d178;
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive(pNVar2,0,(MethodInfo *)0x0);
    if (bVar1) goto LAB_0331d080;
  }
  else {
LAB_0331d080:
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
    if (pNVar3 == (NLIDHEAMLMC_o *)0x0) goto LAB_0331d178;
    if ((pNVar3->fields).OFFPEKODFPE != EADCEBLKJEA) {
      return;
    }
    pNVar4 = (__this->fields).HJBFNKLPBFL;
    if ((pNVar4 == (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0) ||
       (pNVar2 = (pNVar4->fields).LAPCPDGHEIH,
       pNVar2 == (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) goto LAB_0331d178;
    bVar1 = Nekki_SF2_GUI_Common_Hints_HintList__IsTutorialBlockActive(pNVar2,0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
    __this_01 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_01 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__EKPAFDJIAGI
                (__this_01,8,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
LAB_0331d178:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKLHECKHOPC(string DDFHMFFIGFG, string LLMFIICAEAJ)  [RVA 0x321D17C]
// Nekki.SF2.GUI.Pvp.PvpScene$$GKLHECKHOPC @ RVA 0x321D17C

void Nekki_SF2_GUI_Pvp_PvpScene__GKLHECKHOPC
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *DDFHMFFIGFG,
               System_String_o *LLMFIICAEAJ,MethodInfo *method)

{
  bool bVar1;
  System_Action_string__string__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  System_String_o *pSVar2;
  System_Action_string__o *CJNHFNHJHPE_01;
  System_String_o *JPENNNFFCBM;
  System_String_o **ppSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar4;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *pNVar5;
  
  if ((DAT_04566f10 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HEJEELBDKKD__);
    FUN_01bab630(&StringLiteral_8594/*"LocationConfirm: "*/);
    FUN_01bab630(&StringLiteral_555/*" vs "*/);
    DAT_04566f10 = 1;
  }
  pNVar4 = (__this->fields).IIBLCIFHCCF;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
  System_Action<object,_object>___ctor();
  if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar4 = (__this->fields).IIBLCIFHCCF;
    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (StringLiteral_8594/*"LocationConfirm: "*/,DDFHMFFIGFG,StringLiteral_555/*" vs "*/,LLMFIICAEAJ,
                          (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      if (DDFHMFFIGFG != (System_String_o *)0x0) {
        bVar1 = System_String__Equals(DDFHMFFIGFG,LLMFIICAEAJ,(MethodInfo *)0x0);
        if ((bVar1) ||
           (bVar1 = Nekki_SF2_GUI_Pvp_PvpScene__ABEMBBBAFPP
                              ((Nekki_SF2_GUI_Pvp_PvpScene_o *)0x0,method_00), !bVar1)) {
          ppSVar3 = &(__this->fields).GOGMCKIMHDH;
          *ppSVar3 = DDFHMFFIGFG;
          thunk_FUN_01c20e04(ppSVar3,DDFHMFFIGFG);
          Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ(__this,method_01);
          return;
        }
        pNVar4 = (__this->fields).IIBLCIFHCCF;
        if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
          Nekki_SF2_GUI_Pvp_SelectModule__RemoveControlListener
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar4,(MethodInfo *)0x0);
          pNVar5 = (__this->fields).FLABENKGFDF;
          CJNHFNHJHPE_01 =
               (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
            Nekki_SF2_GUI_Pvp_RandomSelectionModule__add_OnAnimationEnd
                      (pNVar5,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            pNVar5 = (__this->fields).FLABENKGFDF;
            if (pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
              Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar5,(MethodInfo *)0x0)
              ;
              pNVar4 = (__this->fields).IIBLCIFHCCF;
              if (pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
                pNVar5 = (__this->fields).FLABENKGFDF;
                pSVar2 = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
                                   (pNVar4,DDFHMFFIGFG,(MethodInfo *)0x0);
                pNVar4 = (__this->fields).IIBLCIFHCCF;
                if ((pNVar4 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) &&
                   (JPENNNFFCBM = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
                                            (pNVar4,LLMFIICAEAJ,(MethodInfo *)0x0),
                   pNVar5 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0)) {
                  Nekki_SF2_GUI_Pvp_RandomSelectionModule__InitContents
                            (pNVar5,DDFHMFFIGFG,pSVar2,LLMFIICAEAJ,JPENNNFFCBM,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static NLIDHEAMLMC get_PlayerTwoInput()  [RVA 0x321D414]
// Nekki.SF2.GUI.Pvp.PvpScene$$get_PlayerTwoInput @ RVA 0x321D414

NLIDHEAMLMC_o * Nekki_SF2_GUI_Pvp_PvpScene__get_PlayerTwoInput(MethodInfo *method)

{
  if ((DAT_04566f11 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f11 = 1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
}


// ===== private void HGFEFHNKEAB()  [RVA 0x321D46C]
// Nekki.SF2.GUI.Pvp.PvpScene$$HGFEFHNKEAB @ RVA 0x321D46C

void Nekki_SF2_GUI_Pvp_PvpScene__HGFEFHNKEAB
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar1;
  System_Action_string__string__o *CJNHFNHJHPE;
  
  if ((DAT_04566f12 & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f12 = 1;
  }
  pNVar1 = (__this->fields).MPPLJPIAGDK;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MPPLJPIAGDK;
    CJNHFNHJHPE = (System_Action_string__string__o *)
                  thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
    System_Action<object,_object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x321D50C]
// Nekki.SF2.GUI.Pvp.PvpScene$$.cctor @ RVA 0x321D50C

void Nekki_SF2_GUI_Pvp_PvpScene___cctor(MethodInfo *method)

{
  NLIDHEAMLMC_o *pNVar1;
  NLIDHEAMLMC_o **ppNVar2;
  
  if ((DAT_04566f13 & 1) == 0) {
    FUN_01bab630(&NLIDHEAMLMC_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f13 = 1;
  }
  Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->forceOpenCharacters = false;
  pNVar1 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar1,0,2,0,(MethodInfo *)0x0);
  ppNVar2 = &Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pNVar1 = (NLIDHEAMLMC_o *)thunk_FUN_01bda818(NLIDHEAMLMC_TypeInfo);
  NLIDHEAMLMC___ctor(pNVar1,1,2,1,(MethodInfo *)0x0);
  ppNVar2 = &Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
  *ppNVar2 = pNVar1;
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  return;
}


// ===== private bool ABEMBBBAFPP()  [RVA 0x321CA18]
// Nekki.SF2.GUI.Pvp.PvpScene$$ABEMBBBAFPP @ RVA 0x321CA18

bool Nekki_SF2_GUI_Pvp_PvpScene__ABEMBBBAFPP
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this_00,(MethodInfo *)0x0);
    return 1 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HEJEELBDKKD(string HBHPFKJMGCK)  [RVA 0x321D5CC]
// Nekki.SF2.GUI.Pvp.PvpScene$$HEJEELBDKKD @ RVA 0x321D5CC

void Nekki_SF2_GUI_Pvp_PvpScene__HEJEELBDKKD
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,System_String_o *HBHPFKJMGCK,MethodInfo *method
               )

{
  System_Action_string__o *CJNHFNHJHPE;
  System_String_o **ppSVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this_00;
  
  if ((DAT_04566f14 & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HEJEELBDKKD__);
    DAT_04566f14 = 1;
  }
  __this_00 = (__this->fields).FLABENKGFDF;
  CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_00 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_RandomSelectionModule__remove_OnAnimationEnd
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    ppSVar1 = &(__this->fields).GOGMCKIMHDH;
    *ppSVar1 = HBHPFKJMGCK;
    thunk_FUN_01c20e04(ppSVar1,HBHPFKJMGCK);
    Nekki_SF2_GUI_Pvp_PvpScene__EEGOPNGLBMJ(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static NLIDHEAMLMC get_PlayerOneInput()  [RVA 0x321D678]
// Nekki.SF2.GUI.Pvp.PvpScene$$get_PlayerOneInput @ RVA 0x321D678

NLIDHEAMLMC_o * Nekki_SF2_GUI_Pvp_PvpScene__get_PlayerOneInput(MethodInfo *method)

{
  if ((DAT_04566f15 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f15 = 1;
  }
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x321D6D0]
// Nekki.SF2.GUI.Pvp.PvpScene$$get_SceneId @ RVA 0x321D6D0

int32_t Nekki_SF2_GUI_Pvp_PvpScene__get_SceneId
                  (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  return 9;
}


// ===== private static void BMLHIMIGOLP(NLIDHEAMLMC OCMMDIHLKMH)  [RVA 0x321D6D8]
// Nekki.SF2.GUI.Pvp.PvpScene$$BMLHIMIGOLP @ RVA 0x321D6D8

void Nekki_SF2_GUI_Pvp_PvpScene__BMLHIMIGOLP(NLIDHEAMLMC_o *OCMMDIHLKMH,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this;
  int iVar2;
  undefined8 uVar3;
  
  if (OCMMDIHLKMH == (NLIDHEAMLMC_o *)0x0) {
LAB_0331d76c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = (OCMMDIHLKMH->fields).ELHIGHABJBJ;
  if (iVar2 == 2) {
    iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    __this = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
    if (__this == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) goto LAB_0331d76c;
    iVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                      (__this,(MethodInfo *)0x0);
    if (iVar2 < iVar1 + -1) {
      iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE + 1;
LAB_0331d740:
      (OCMMDIHLKMH->fields).OFFPEKODFPE = iVar2;
      return;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = (OCMMDIHLKMH->fields).OFFPEKODFPE;
    if (iVar2 == 1) {
      uVar3 = 2;
      goto LAB_0331d750;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
      goto LAB_0331d740;
    }
  }
  uVar3 = 1;
LAB_0331d750:
  (OCMMDIHLKMH->fields).ELHIGHABJBJ = (int)uVar3;
  (OCMMDIHLKMH->fields).OFFPEKODFPE = (int)((ulong)uVar3 >> 0x20);
  return;
}


// ===== private IEnumerator KFDOLNHODBI()  [RVA 0x321CF6C]
// Nekki.SF2.GUI.Pvp.PvpScene$$KFDOLNHODBI @ RVA 0x321CF6C

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PvpScene__KFDOLNHODBI(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f16 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_NLCMLINJAMC_TypeInfo);
    DAT_04566f16 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PvpScene_NLCMLINJAMC_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void .ctor()  [RVA 0x321D798]
// Nekki.SF2.GUI.Pvp.PvpScene$$.ctor @ RVA 0x321D798

void Nekki_SF2_GUI_Pvp_PvpScene___ctor(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  if ((DAT_04566f17 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>__ctor__);
    DAT_04566f17 = 1;
  }
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<PvpScene>__ctor__);
  return;
}


// ===== private static void DDNKEKIOAMP(NLIDHEAMLMC OCMMDIHLKMH, NLIDHEAMLMC KGLKIBKGEKC)  [RVA 0x321BCC8]
// Nekki.SF2.GUI.Pvp.PvpScene$$DDNKEKIOAMP @ RVA 0x321BCC8

void Nekki_SF2_GUI_Pvp_PvpScene__DDNKEKIOAMP
               (NLIDHEAMLMC_o *OCMMDIHLKMH,NLIDHEAMLMC_o *KGLKIBKGEKC,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  method_00 = (MethodInfo *)KGLKIBKGEKC;
  if ((DAT_04566f18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04566f18 = 1;
    method_00 = extraout_x1;
  }
  while( true ) {
    if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Pvp_PvpScene__BMLHIMIGOLP(OCMMDIHLKMH,method_00);
    if (OCMMDIHLKMH == (NLIDHEAMLMC_o *)0x0) break;
    bVar1 = NLIDHEAMLMC__LJEPFPBMNFM(OCMMDIHLKMH,KGLKIBKGEKC,(MethodInfo *)0x0);
    method_00 = extraout_x1_01;
    if (!bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x321D7E0]
// Nekki.SF2.GUI.Pvp.PvpScene$$CLNAOMIIBLH @ RVA 0x321D7E0

void Nekki_SF2_GUI_Pvp_PvpScene__CLNAOMIIBLH
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this_00;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this_01;
  Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *__this_02;
  Nekki_SF2_Core_InputControllers_GamePadController_o *pNVar1;
  COOJKPHHMCD_o *pCVar2;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  MethodInfo *method_00;
  JPGJLKENNCC_o *__this_03;
  
  if ((DAT_04566f19 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&COOJKPHHMCD_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKHAKLDEIJI__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_CLNAOMIIBLH__);
    DAT_04566f19 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__CLNAOMIIBLH
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<PvpScene>_CLNAOMIIBLH__);
  Nekki_SF2_GUI_Pvp_PvpScene__FLODGLDFFGL(__this,method_00);
  __this_00 = (__this->fields).MPPLJPIAGDK;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).IIBLCIFHCCF;
    if (__this_01 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FLABENKGFDF;
      if (__this_02 != (Nekki_SF2_GUI_Pvp_RandomSelectionModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this_02,(MethodInfo *)0x0);
        pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
        if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
          Nekki_SF2_Core_InputControllers_GamePadController__set_IsDualMode
                    (pNVar1,false,(MethodInfo *)0x0);
          pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0)
          ;
          pCVar2 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
          COOJKPHHMCD___ctor(pCVar2,(Il2CppObject *)__this,
                             Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
          if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
            Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceConnected
                      (pNVar1,pCVar2,(MethodInfo *)0x0);
            pNVar1 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current
                               ((MethodInfo *)0x0);
            pCVar2 = (COOJKPHHMCD_o *)thunk_FUN_01bda818(COOJKPHHMCD_TypeInfo);
            COOJKPHHMCD___ctor(pCVar2,(Il2CppObject *)__this,
                               Method_Nekki_SF2_GUI_Pvp_PvpScene_HONKIIHKLOB__,(MethodInfo *)0x0);
            if (pNVar1 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
              Nekki_SF2_Core_InputControllers_GamePadController__remove_OnDeviceDisconnected
                        (pNVar1,pCVar2,(MethodInfo *)0x0);
              pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
              if (pNVar3 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                __this_03 = (pNVar3->fields).GMLEPHMBMPD;
                PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                              thunk_FUN_01bda818(
                                                System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo
                                                );
                System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                if (__this_03 != (JPGJLKENNCC_o *)0x0) {
                  FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                            ((FMKGOOONJKB_T0__T1__T2__o *)__this_03,PKKMGBOIDJD,
                             Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NHBHCPKGGCJ()  [RVA 0x321CF68]
// Nekki.SF2.GUI.Pvp.PvpScene$$NHBHCPKGGCJ @ RVA 0x321CF68

void Nekki_SF2_GUI_Pvp_PvpScene__NHBHCPKGGCJ
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *pNVar1;
  System_Action_string__string__o *CJNHFNHJHPE;
  
  if ((DAT_04566f12 & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_PNPIHIBJKLO__);
    DAT_04566f12 = 1;
  }
  pNVar1 = (__this->fields).MPPLJPIAGDK;
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
    Nekki_SF2_GUI_UIModule__Activate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).MPPLJPIAGDK;
    CJNHFNHJHPE = (System_Action_string__string__o *)
                  thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo);
    System_Action<object,_object>___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__add_OnPlayersConfirm
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BNIMKENJJNE()  [RVA 0x321D9A8]
// Nekki.SF2.GUI.Pvp.PvpScene$$BNIMKENJJNE @ RVA 0x321D9A8

void Nekki_SF2_GUI_Pvp_PvpScene__BNIMKENJJNE
               (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  System_Action_string__string__o *CJNHFNHJHPE;
  System_Action_o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *pNVar1;
  
  if ((DAT_04566f1a & 1) == 0) {
    FUN_01bab630(&System_Action<string,_string>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_BNIMKENJJNE__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PvpScene_GKLHECKHOPC__);
    DAT_04566f1a = 1;
    method = extraout_x1;
  }
  pNVar1 = (__this->fields).IIBLCIFHCCF;
  CJNHFNHJHPE = (System_Action_string__string__o *)
                thunk_FUN_01bda818(System_Action<string,_string>_TypeInfo,method);
  System_Action<object,_object>___ctor();
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
    Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersConfirm
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).IIBLCIFHCCF;
    CJNHFNHJHPE_00 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
      Nekki_SF2_GUI_Pvp_SelectModule__remove_OnPlayersBack
                ((Nekki_SF2_GUI_Pvp_SelectModule_o *)pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).IIBLCIFHCCF;
      if (pNVar1 != (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) {
        Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)pNVar1,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Pvp_PvpScene__HGFEFHNKEAB(__this,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PvPHintController get_HintController()  [RVA 0x321DAAC]
// Nekki.SF2.GUI.Pvp.PvpScene$$get_HintController @ RVA 0x321DAAC

Nekki_SF2_GUI_Pvp_PvPHintController_o *
Nekki_SF2_GUI_Pvp_PvpScene__get_HintController
          (Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  return (__this->fields).HJBFNKLPBFL;
}


// ===== private XmlNode MCFIGAFCFIO()  [RVA 0x321C4DC]
// Nekki.SF2.GUI.Pvp.PvpScene$$MCFIGAFCFIO @ RVA 0x321C4DC

/* WARNING: Removing unreachable block (ram,0x0331c8b8) */

System_Xml_XmlNode_o *
Nekki_SF2_GUI_Pvp_PvpScene__MCFIGAFCFIO(Nekki_SF2_GUI_Pvp_PvpScene_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this_00;
  NLPJLHOEAOE_o *pNVar3;
  System_Xml_XmlNode_o *pSVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlAttributeCollection_o *__this_01;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *__this_02;
  IFKFDFGNMMN_o *pIVar9;
  long lVar10;
  System_Xml_XmlNode_c *pSVar11;
  ulong uVar12;
  int *piVar13;
  System_String_o *pSVar14;
  int iVar15;
  
  if ((DAT_04566f1b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8596/*"Locations"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_20433/*"random"*/);
    FUN_01bab630(&StringLiteral_3830/*"Can't find Location named {0}"*/);
    DAT_04566f1b = 1;
  }
  pSVar14 = (__this->fields).GOGMCKIMHDH;
  if (pSVar14 != (System_String_o *)0x0) {
    bVar2 = System_String__Equals(pSVar14,StringLiteral_20433/*"random"*/,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields).IIBLCIFHCCF;
      if (__this_00 == (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *)0x0) goto LAB_0331c8b0;
      pSVar14 = Nekki_SF2_GUI_Pvp_LocationSelectModule__GetRandomItem(__this_00,(MethodInfo *)0x0);
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if ((((pNVar3 != (NLPJLHOEAOE_o *)0x0) &&
         (pIVar9 = (pNVar3->fields).OMDCNDHOACL, pIVar9 != (IFKFDFGNMMN_o *)0x0)) &&
        (pSVar4 = (pIVar9->fields)._OLIGHNIEIGK_k__BackingField,
        pSVar4 != (System_Xml_XmlNode_o *)0x0)) &&
       ((plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                    (pSVar4,StringLiteral_8596/*"Locations"*/,
                                     (pSVar4->klass->vtable)._51_get_Item.method),
        plVar5 != (long *)0x0 &&
        (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
        plVar5 != (long *)0x0)))) {
      plVar6 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0331c698;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0331c698:
        uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar12 & 1) == 0) {
          pSVar4 = (System_Xml_XmlNode_o *)0x0;
          iVar15 = 6;
          goto LAB_0331c794;
        }
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0331c6f8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_0331c6f8:
        pSVar4 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (pSVar4 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar11 = pSVar4->klass;
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->_2).naturalAligment < bVar1) ||
           ((pSVar11->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4);
        }
        __this_01 = (System_Xml_XmlAttributeCollection_o *)
                    (*(pSVar11->vtable)._16_get_Attributes.methodPtr)
                              (pSVar4,(pSVar11->vtable)._16_get_Attributes.method);
        if (__this_01 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (__this_01,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = (System_String_o *)
                    (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        if (__this_02 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(__this_02,pSVar14,(MethodInfo *)0x0);
      } while (!bVar2);
      iVar15 = 5;
LAB_0331c794:
      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
      if (plVar6 != (long *)0x0) {
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0331c7f4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0331c7f4:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
      if ((iVar15 != 6) && (iVar15 != 0)) {
        return pSVar4;
      }
      pSVar14 = System_String__Format(StringLiteral_3830/*"Can't find Location named {0}"*/,(Il2CppObject *)pSVar14,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0331c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar5 + 0x1c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x1d0));
      return pSVar4;
    }
  }
LAB_0331c8b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


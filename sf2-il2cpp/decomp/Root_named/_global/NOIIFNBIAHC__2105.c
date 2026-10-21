// TypeDefIndex 2105
// Namespace: 
// public class NOIIFNBIAHC : QuestAction
// Fields:
//   private SFButton JPGIHNHOFGK; // 0x68
//   private Vector2 JDIMEBGEJFE; // 0x70
//   private float GBJHFDKDAIB; // 0x78

// ===== private void EBBLKEADCJC()  [RVA 0x32CC5AC]
// NOIIFNBIAHC$$EBBLKEADCJC @ RVA 0x32CC5AC

void NOIIFNBIAHC__EBBLKEADCJC(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Transform_o *INPDGILCEBL;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  SFButton_o *pSVar3;
  UnityEngine_Object_o *exists;
  SFButton_o **ppSVar4;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_0456751d & 1) == 0) {
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456751d = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
    exists = *(UnityEngine_Object_o **)&(pNVar2->fields)._MaterialsMoveDuration;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Implicit(exists,(MethodInfo *)0x0);
    if (!bVar1) {
LAB_033cc704:
      pSVar3 = (__this->fields).JPGIHNHOFGK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      NOIIFNBIAHC__NKGIJKODGAN(__this,method_00);
      return;
    }
    if (exists != (UnityEngine_Object_o *)0x0) {
      ppSVar4 = &(__this->fields).JPGIHNHOFGK;
      *ppSVar4 = exists[4].monitor;
      thunk_FUN_01c20e04(ppSVar4);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if ((*ppSVar4 != (SFButton_o *)0x0) &&
         (INPDGILCEBL = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)*ppSVar4,(MethodInfo *)0x0),
         __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                  (__this_00,INPDGILCEBL,(UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                   (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).JPGIHNHOFGK;
        if (pSVar3 != (SFButton_o *)0x0) {
          __this_01 = (UnityEngine_Events_UnityEvent_o *)(pSVar3->fields).super.m_OnClick;
          call = (UnityEngine_Events_UnityAction_o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
            TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)*ppSVar4,(MethodInfo *)0x0);
            goto LAB_033cc704;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32CC96C]
// NOIIFNBIAHC$$MAHFCKJGBPP @ RVA 0x32CC96C

void NOIIFNBIAHC__MAHFCKJGBPP(NOIIFNBIAHC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  RaidManager_o *pCVar3;
  System_Action_o *pSVar4;
  SFRequestSender_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_o *__this_01;
  
  if ((DAT_0456751e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_0456751e = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,method);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_x1;
  if (bVar1) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar3 != (RaidManager_o *)0x0) {
      method_01 = extraout_x1_00;
      if ((pCVar3->fields).BLELLCNDBHN == false) goto LAB_033ccb34;
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      __this_01 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
        Nekki_SF2_GUI_Map_MapScene__add_OnStoryMapOpenedAction(__this_01,pSVar4,(MethodInfo *)0x0);
        __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (__this_00 != (SFRequestSender_o *)0x0) {
          SFRequestSender__HKAALOKPBPG(__this_00,pSVar4,(MethodInfo *)0x0);
          NOIIFNBIAHC__EBBLKEADCJC(__this,method_00);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033ccb34:
  NOIIFNBIAHC__NKGIJKODGAN(__this,method_01);
  return;
}


// ===== private void NKGIJKODGAN()  [RVA 0x32CC750]
// NOIIFNBIAHC$$NKGIJKODGAN @ RVA 0x32CC750

void NOIIFNBIAHC__NKGIJKODGAN(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  long lVar2;
  System_Action_o *pSVar3;
  SFRequestSender_o *__this_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_02;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_o *__this_03;
  
  if ((DAT_0456751f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456751f = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).JPGIHNHOFGK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    TutorialExtension__HJDDBKPCAFJ
              ((UnityEngine_UI_Selectable_o *)(__this->fields).JPGIHNHOFGK,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).JPGIHNHOFGK;
    if (pSVar4 == (SFButton_o *)0x0) goto LAB_033cc968;
    __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033cc968;
    UnityEngine_Events_UnityEvent__RemoveListener(__this_02,call,(MethodInfo *)0x0);
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    __this_03 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_03 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_033cc968;
    Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapOpenedAction(__this_03,pSVar3,(MethodInfo *)0x0);
  }
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (SFRequestSender_o *)0x0) {
    SFRequestSender__JGNHEIICALL(__this_00,pSVar3,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_01,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
      return;
    }
  }
LAB_033cc968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32CCB4C]
// NOIIFNBIAHC$$.ctor @ RVA 0x32CCB4C

void NOIIFNBIAHC___ctor(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  System_Action_MEMHEPBAJJA__o **ppSVar1;
  System_Action_PKHMIGFEJCL__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_MEMHEPBAJJA__o *pSVar3;
  System_Action_PKHMIGFEJCL__o *pSVar4;
  
  if ((DAT_04567527 & 1) == 0) {
    FUN_01bab630(&System_Action<PKHMIGFEJCL>_TypeInfo);
    FUN_01bab630(&System_Action<MEMHEPBAJJA>_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_EKBJCNLEMME__);
    FUN_01bab630(&Method_BOFEMGGNODC_<>c_NAKGFOAHNPG__);
    FUN_01bab630(&QuestAction_<>c_TypeInfo);
    DAT_04567527 = 1;
    method = extraout_x1;
  }
  if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar3 = QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
  if (pSVar3 == (System_Action_MEMHEPBAJJA__o *)0x0) {
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(QuestAction_<>c_TypeInfo,method);
    }
    pSVar3 = (System_Action_MEMHEPBAJJA__o *)thunk_FUN_01bda818(System_Action<MEMHEPBAJJA>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_0;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
  }
  if (__this != (NOIIFNBIAHC_o *)0x0) {
    ppSVar1 = &(__this->fields).super.EKJDIBEOCDF;
    *ppSVar1 = pSVar3;
    thunk_FUN_01c20e04(ppSVar1,pSVar3);
    if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
    if (pSVar4 == (System_Action_PKHMIGFEJCL__o *)0x0) {
      if ((QuestAction_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Action_PKHMIGFEJCL__o *)
               thunk_FUN_01bda818(System_Action<PKHMIGFEJCL>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &QuestAction_<>c_TypeInfo->static_fields->__9__34_1;
      *ppSVar2 = pSVar4;
      thunk_FUN_01c20e04(ppSVar2,pSVar4);
    }
    ppSVar2 = &(__this->fields).super.BHHLJDLBINB;
    *ppSVar2 = pSVar4;
    thunk_FUN_01c20e04(ppSVar2,pSVar4);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KMNFICHPGKD()  [RVA 0x32CCB50]
// NOIIFNBIAHC$$KMNFICHPGKD @ RVA 0x32CCB50

void NOIIFNBIAHC__KMNFICHPGKD(NOIIFNBIAHC_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Events_UnityAction_o *call;
  long lVar2;
  System_Action_o *pSVar3;
  SFRequestSender_o *__this_00;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  SFButton_o *pSVar4;
  UnityEngine_Events_UnityEvent_o *__this_02;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_Map_MapScene_o *__this_03;
  
  if ((DAT_0456751f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_NOIIFNBIAHC_KMNFICHPGKD__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_0456751f = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).JPGIHNHOFGK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    TutorialExtension__HJDDBKPCAFJ
              ((UnityEngine_UI_Selectable_o *)(__this->fields).JPGIHNHOFGK,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).JPGIHNHOFGK;
    if (pSVar4 == (SFButton_o *)0x0) goto LAB_033cc968;
    __this_02 = (UnityEngine_Events_UnityEvent_o *)(pSVar4->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_02 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_033cc968;
    UnityEngine_Events_UnityEvent__RemoveListener(__this_02,call,(MethodInfo *)0x0);
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    __this_03 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (__this_03 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) goto LAB_033cc968;
    Nekki_SF2_GUI_Map_MapScene__remove_OnStoryMapOpenedAction(__this_03,pSVar3,(MethodInfo *)0x0);
  }
  __this_00 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
  pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (SFRequestSender_o *)0x0) {
    SFRequestSender__JGNHEIICALL(__this_00,pSVar3,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_01 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
      Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_01,(MethodInfo *)0x0);
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,method_00);
      return;
    }
  }
LAB_033cc968:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32CCB54]
// NOIIFNBIAHC$$HNIHOIAMDPC @ RVA 0x32CCB54

void NOIIFNBIAHC__HNIHOIAMDPC
               (NOIIFNBIAHC_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04567520 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3105/*"ArrowRotation"*/);
    FUN_01bab630(&StringLiteral_3103/*"ArrowOffsetX"*/);
    FUN_01bab630(&StringLiteral_3104/*"ArrowOffsetY"*/);
    DAT_04567520 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,AHDGNOJPPIB,method);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3103/*"ArrowOffsetX"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,-50.0,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_3104/*"ArrowOffsetY"*/,(MethodInfo *)0x0);
        fVar4 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
        (__this->fields).JDIMEBGEJFE.fields.x = fVar3;
        (__this->fields).JDIMEBGEJFE.fields.y = fVar4;
        pSVar1 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar1,StringLiteral_3105/*"ArrowRotation"*/,(MethodInfo *)0x0);
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,0.0,(MethodInfo *)0x0);
          (__this->fields).GBJHFDKDAIB = fVar3;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


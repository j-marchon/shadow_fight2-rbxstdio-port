// TypeDefIndex 835
// Namespace: 
// public class CDBANCEFAAK : QuestAction
// Fields:
//   private RaidInfoSprite EFAPPLILPJP; // 0x68
//   private Vector2 JDIMEBGEJFE; // 0x70
//   private float GBJHFDKDAIB; // 0x78

// ===== public void .ctor()  [RVA 0x30818E0]
// CDBANCEFAAK$$.ctor @ RVA 0x30818E0

void CDBANCEFAAK___ctor(CDBANCEFAAK_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30818E8]
// CDBANCEFAAK$$HNIHOIAMDPC @ RVA 0x30818E8

void CDBANCEFAAK__HNIHOIAMDPC
               (CDBANCEFAAK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565ffa & 1) == 0) {
    FUN_01bab630(&StringLiteral_3105/*"ArrowRotation"*/);
    FUN_01bab630(&StringLiteral_3103/*"ArrowOffsetX"*/);
    FUN_01bab630(&StringLiteral_3104/*"ArrowOffsetY"*/);
    DAT_04565ffa = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_3103/*"ArrowOffsetX"*/,(MethodInfo *)0x0);
      fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,245.0,(MethodInfo *)0x0);
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
          fVar3 = EIABCPKDEBD__GICIEKCGOHA(pSVar2,90.0,(MethodInfo *)0x0);
          (__this->fields).GBJHFDKDAIB = fVar3;
                    /* try { // try from 03181a10 to 03281d9b has its CatchHandler @ 03181a10
                       catch() { ... } // from try @ 03181a10 with catch @ 03181a10
                       catch() { ... } // from try @ 03181e24 with catch @ 03181a10
                       catch() { ... } // from try @ 03181e70 with catch @ 03181a10
                       catch() { ... } // from try @ 03181f18 with catch @ 03181a10 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FCHKBFCNOJL(RaidInfoSprite IMMNELPBGIF)  [RVA 0x3081A18]
// CDBANCEFAAK$$FCHKBFCNOJL @ RVA 0x3081A18

void CDBANCEFAAK__FCHKBFCNOJL
               (CDBANCEFAAK_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ProgressLabelButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  
  if ((DAT_04565ffb & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    DAT_04565ffb = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields).EFAPPLILPJP;
  pSVar1 = (System_Action_RaidInfoSprite__o *)
           thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo,IMMNELPBGIF);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
              (pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).EFAPPLILPJP;
    pSVar1 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnExitBtnClick
                (pNVar2,pSVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).EFAPPLILPJP;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
          TutorialExtension__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._btnFight,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).EFAPPLILPJP;
          if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
             (__this_01 = (pNVar2->fields)._btnFight, __this_01 != (ProgressLabelButton_o *)0x0)) {
            SFButton__set_IsFlashing((SFButton_o *)__this_01,false,(MethodInfo *)0x0);
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HNHLJHHKELD(RaidInfoSprite IMMNELPBGIF)  [RVA 0x3081B44]
// CDBANCEFAAK$$HNHLJHHKELD @ RVA 0x3081B44

void CDBANCEFAAK__HNHLJHHKELD
               (CDBANCEFAAK_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ProgressLabelButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  
  if ((DAT_04565ffb & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    DAT_04565ffb = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar2 = (__this->fields).EFAPPLILPJP;
  pSVar1 = (System_Action_RaidInfoSprite__o *)
           thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo,IMMNELPBGIF);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
              (pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).EFAPPLILPJP;
    pSVar1 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnExitBtnClick
                (pNVar2,pSVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).EFAPPLILPJP;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
          TutorialExtension__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._btnFight,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).EFAPPLILPJP;
          if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
             (__this_01 = (pNVar2->fields)._btnFight, __this_01 != (ProgressLabelButton_o *)0x0)) {
            SFButton__set_IsFlashing((SFButton_o *)__this_01,false,(MethodInfo *)0x0);
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LMNCJMFOBEH()  [RVA 0x3081A1C]
// CDBANCEFAAK$$LMNCJMFOBEH @ RVA 0x3081A1C

void CDBANCEFAAK__LMNCJMFOBEH(CDBANCEFAAK_o *__this,MethodInfo *method)

{
  System_Action_RaidInfoSprite__o *pSVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  ProgressLabelButton_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar2;
  
  if ((DAT_04565ffb & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    DAT_04565ffb = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).EFAPPLILPJP;
  pSVar1 = (System_Action_RaidInfoSprite__o *)
           thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnFightBtnClick
              (pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).EFAPPLILPJP;
    pSVar1 = (System_Action_RaidInfoSprite__o *)
             thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__remove_OnExitBtnClick
                (pNVar2,pSVar1,(MethodInfo *)0x0);
      __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).EFAPPLILPJP;
        if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
          TutorialExtension__HJDDBKPCAFJ
                    ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._btnFight,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).EFAPPLILPJP;
          if ((pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) &&
             (__this_01 = (pNVar2->fields)._btnFight, __this_01 != (ProgressLabelButton_o *)0x0)) {
            SFButton__set_IsFlashing((SFButton_o *)__this_01,false,(MethodInfo *)0x0);
            QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3081B48]
// CDBANCEFAAK$$MAHFCKJGBPP @ RVA 0x3081B48

void CDBANCEFAAK__MAHFCKJGBPP(CDBANCEFAAK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Transform_o *INPDGILCEBL;
  System_Action_RaidInfoSprite__o *pSVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *exists;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o **ppNVar3;
  ProgressLabelButton_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *pNVar4;
  
  if ((DAT_04565ffc & 1) == 0) {
    FUN_01bab630(&System_Action<RaidInfoSprite>_TypeInfo);
    FUN_01bab630(&Method_CDBANCEFAAK_FCHKBFCNOJL__);
    FUN_01bab630(&Method_CDBANCEFAAK_HNHLJHHKELD__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10842/*"RaidFightActionShowFightBtn::RaidFightActionShowFightBtn: no RVC!"*/);
    DAT_04565ffc = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo);
    DAT_045660f3 = '\x01';
  }
  exists = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar1) {
    if (exists != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      ppNVar3 = &(__this->fields).EFAPPLILPJP;
      *ppNVar3 = (exists->fields)._raidInfoSprite;
      thunk_FUN_01c20e04(ppNVar3);
      if (*ppNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
        __this_01 = ((*ppNVar3)->fields)._btnFight;
        __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
        if ((__this_01 != (ProgressLabelButton_o *)0x0) &&
           (INPDGILCEBL = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0)) {
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__ShowArrow
                    (__this_00,INPDGILCEBL,
                     (UnityEngine_Vector2_o)(__this->fields).JDIMEBGEJFE.fields,
                     (__this->fields).GBJHFDKDAIB,(MethodInfo *)0x0);
          pNVar4 = (__this->fields).EFAPPLILPJP;
          pSVar2 = (System_Action_RaidInfoSprite__o *)
                   thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnFightBtnClick
                      (pNVar4,pSVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields).EFAPPLILPJP;
            pSVar2 = (System_Action_RaidInfoSprite__o *)
                     thunk_FUN_01bda818(System_Action<RaidInfoSprite>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__add_OnExitBtnClick
                        (pNVar4,pSVar2,(MethodInfo *)0x0);
              TutorialExtension__GOCEMJOCNEE((UnityEngine_UI_Selectable_o *)__this_01,(MethodInfo *)0x0);
              SFButton__set_IsFlashing((SFButton_o *)__this_01,true,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_10842/*"RaidFightActionShowFightBtn::RaidFightActionShowFightBtn: no RVC!"*/,(MethodInfo *)0x0);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


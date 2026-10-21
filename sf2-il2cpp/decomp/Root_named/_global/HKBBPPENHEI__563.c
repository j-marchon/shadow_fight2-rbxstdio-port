// TypeDefIndex 563
// Namespace: 
// public class HKBBPPENHEI : QuestAction
// Fields:
//   private string EJNOBBDDBDO; // 0x68
//   private string GPHBPMLJJPI; // 0x70
//   private int FJJPFEGPEFA; // 0x78
//   private int BDPOJDOAJJF; // 0x7C
//   private bool OPAFMFMILDG; // 0x80

// ===== public override void PKIFMKGDJJN()  [RVA 0x35AC780]
// HKBBPPENHEI$$PKIFMKGDJJN @ RVA 0x35AC780

void HKBBPPENHEI__PKIFMKGDJJN(HKBBPPENHEI_o *__this,MethodInfo *method)

{
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  (__this->fields).FJJPFEGPEFA = 0;
  return;
}


// ===== private void BDKJDKPLOIP()  [RVA 0x35AC79C]
// HKBBPPENHEI$$BDKJDKPLOIP @ RVA 0x35AC79C

void HKBBPPENHEI__BDKJDKPLOIP(HKBBPPENHEI_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).FJJPFEGPEFA + 1;
  (__this->fields).FJJPFEGPEFA = iVar1;
  if (iVar1 < (__this->fields).BDPOJDOAJJF) {
    return;
  }
  HKBBPPENHEI__EABJNHKPJOM(__this,method);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x35AC90C]
// HKBBPPENHEI$$MAHFCKJGBPP @ RVA 0x35AC90C

void HKBBPPENHEI__MAHFCKJGBPP(HKBBPPENHEI_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  System_String_o *OOGPLJBADCD;
  
  if ((DAT_04568e5a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HKBBPPENHEI_BDKJDKPLOIP__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e5a = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).EJNOBBDDBDO;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = MFBNFJGBPBB__JBAMHPFEPLG(MNBMHEAHIIA,OOGPLJBADCD,(MethodInfo *)0x0);
  (__this->fields).BDPOJDOAJJF = iVar2;
  bVar1 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,(__this->fields).GPHBPMLJJPI,(MethodInfo *)0x0);
  (__this->fields).OPAFMFMILDG = bVar1;
  if (bVar1) {
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
LAB_036acac4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_036acac4;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,false,(MethodInfo *)0x0);
    }
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x35ACAC8]
// HKBBPPENHEI$$HNIHOIAMDPC @ RVA 0x35ACAC8

void HKBBPPENHEI__HNIHOIAMDPC
               (HKBBPPENHEI_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568e5b & 1) == 0) {
    FUN_01bab630(&StringLiteral_4700/*"ControlsLock"*/);
    FUN_01bab630(&StringLiteral_6584/*"Frames"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568e5b = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_6584/*"Frames"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
      (__this->fields).EJNOBBDDBDO = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_4700/*"ControlsLock"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields).GPHBPMLJJPI;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35ACBC8]
// HKBBPPENHEI$$.ctor @ RVA 0x35ACBC8

void HKBBPPENHEI___ctor(HKBBPPENHEI_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void EABJNHKPJOM()  [RVA 0x35AC7B8]
// HKBBPPENHEI$$EABJNHKPJOM @ RVA 0x35AC7B8

void HKBBPPENHEI__EABJNHKPJOM(HKBBPPENHEI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar2;
  
  if ((DAT_04568e5c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HKBBPPENHEI_BDKJDKPLOIP__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e5c = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((__this->fields).OPAFMFMILDG != false) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar2 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar2 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar2 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_036ac908;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar2,true,(MethodInfo *)0x0);
    }
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
LAB_036ac908:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


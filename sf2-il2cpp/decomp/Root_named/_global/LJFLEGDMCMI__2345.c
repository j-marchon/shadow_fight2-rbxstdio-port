// TypeDefIndex 2345
// Namespace: 
// public class LJFLEGDMCMI : QuestAction
// Fields:
//   private string BOKLALEEJBB; // 0x68
//   private bool NAIPDDOMBPA; // 0x70

// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3322E48]
// LJFLEGDMCMI$$HNIHOIAMDPC @ RVA 0x3322E48

void LJFLEGDMCMI__HNIHOIAMDPC
               (LJFLEGDMCMI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456785d & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456785d = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).BOKLALEEJBB;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      (__this->fields).NAIPDDOMBPA = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3322EFC]
// LJFLEGDMCMI$$MAHFCKJGBPP @ RVA 0x3322EFC

void LJFLEGDMCMI__MAHFCKJGBPP(LJFLEGDMCMI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  UnityEngine_Object_o *x;
  System_Action_o *EBIHGBKNHMF;
  VideoPlayerController_o *pVVar4;
  
  if ((DAT_0456785e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_LJFLEGDMCMI_JLDEKOIIPDE__);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_22364/*"{0}/{1}"*/);
    DAT_0456785e = 1;
  }
  (__this->fields).NAIPDDOMBPA = false;
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (DAT_04566bb5 == '\0') {
    FUN_01bab630(&VideoPlayerController_TypeInfo);
    DAT_04566bb5 = '\x01';
  }
  pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pVVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03422fd4:
    if ((__this->fields).NAIPDDOMBPA == false) {
      QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    }
    (__this->fields).NAIPDDOMBPA = true;
    return;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = SF2Paths__JKLFLNNFEMP((MethodInfo *)0x0);
  pSVar2 = System_String__Format
                     (StringLiteral_22364/*"{0}/{1}"*/,(Il2CppObject *)pSVar2,
                      (Il2CppObject *)(__this->fields).BOKLALEEJBB,(MethodInfo *)0x0);
  bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    VideoPlayerController__Create((MethodInfo *)0x0);
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pVVar4 != (VideoPlayerController_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x034230d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pVVar4->klass->vtable)._7_Play.methodPtr)
                (pVVar4,pSVar2,uVar3,(pVVar4->klass->vtable)._7_Play.method);
      return;
    }
  }
  else {
    x = (UnityEngine_Object_o *)
        CMEBCBKGFFL__OCMBGOIHFOD((__this->fields).BOKLALEEJBB,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) goto LAB_03422fd4;
    VideoPlayerController__Create((MethodInfo *)0x0);
    if (DAT_04566bb5 == '\0') {
      FUN_01bab630(&VideoPlayerController_TypeInfo);
      DAT_04566bb5 = '\x01';
    }
    pSVar2 = (__this->fields).BOKLALEEJBB;
    pVVar4 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
    EBIHGBKNHMF = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pVVar4 != (VideoPlayerController_o *)0x0) {
      VideoPlayerController__Play
                (pVVar4,pSVar2,(UnityEngine_Video_VideoClip_o *)x,EBIHGBKNHMF,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JLDEKOIIPDE()  [RVA 0x33231C4]
// LJFLEGDMCMI$$JLDEKOIIPDE @ RVA 0x33231C4

void LJFLEGDMCMI__JLDEKOIIPDE(LJFLEGDMCMI_o *__this,MethodInfo *method)

{
  if ((__this->fields).NAIPDDOMBPA == false) {
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  }
  (__this->fields).NAIPDDOMBPA = true;
  VideoPlayerController__Destroy((MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x33231F4]
// LJFLEGDMCMI$$.ctor @ RVA 0x33231F4

void LJFLEGDMCMI___ctor(LJFLEGDMCMI_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x33231FC]
// LJFLEGDMCMI$$OFPHPMGMCAL @ RVA 0x33231FC

System_String_o * LJFLEGDMCMI__OFPHPMGMCAL(LJFLEGDMCMI_o *__this,MethodInfo *method)

{
  return (__this->fields).BOKLALEEJBB;
}


// ===== private void KNGHCLOBFJM()  [RVA 0x3323198]
// LJFLEGDMCMI$$KNGHCLOBFJM @ RVA 0x3323198

void LJFLEGDMCMI__KNGHCLOBFJM(LJFLEGDMCMI_o *__this,MethodInfo *method)

{
  if ((__this->fields).NAIPDDOMBPA == false) {
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  }
  (__this->fields).NAIPDDOMBPA = true;
  return;
}


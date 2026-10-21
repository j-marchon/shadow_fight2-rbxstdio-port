// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$Awake @ RVA 0x3093BDC

void Nekki_SF2_GUI_GeneralMenu_StoryItemText__Awake
               (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,MethodInfo *method)

{
  System_String_o *EIJDDKJONFO;
  System_Xml_XmlDocument_o *pSVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  MethodInfo *extraout_x1;
  System_Xml_XmlNode_o **ppSVar4;
  
  if ((DAT_045660ba & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_21892);
    FUN_01bab630(&StringLiteral_11416);
    DAT_045660ba = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  EIJDDKJONFO = MGENAMAJALB__CPIACIDINLI((MethodInfo *)0x0);
  pSVar1 = GIAMPEGMNHE__GMNIIJJFIJK(EIJDDKJONFO,StringLiteral_21892,0,true,(MethodInfo *)0x0);
  ppSVar4 = &(__this->fields).BFIOMKAMGGI;
  *ppSVar4 = (System_Xml_XmlNode_o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar4,pSVar1);
  pSVar2 = *ppSVar4;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_11416,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    if (plVar3 != (long *)0x0) {
      pSVar2 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar3 + 0x468))
                         (plVar3,StringLiteral_14862,*(undefined8 *)(*plVar3 + 0x470));
      *ppSVar4 = pSVar2;
      thunk_FUN_01c20e04(ppSVar4,pSVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// NCNJEIBHGBH$$FLCMDHADNCN @ RVA 0x32F3DC4

void NCNJEIBHGBH__FLCMDHADNCN
               (NCNJEIBHGBH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlElement_o *pSVar2;
  System_Xml_XmlNode_o **ppSVar3;
  
  if ((DAT_04567680 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8825);
    DAT_04567680 = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                       (JHMENEKPIBO,StringLiteral_8825,
                        (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
    ppSVar3 = &(__this->fields).DMLGJFCNNJF;
    *ppSVar3 = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    if (*ppSVar3 == (System_Xml_XmlNode_o *)0x0) {
      pSVar2 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,StringLiteral_8825,(MethodInfo *)0x0);
      *ppSVar3 = (System_Xml_XmlNode_o *)pSVar2;
      thunk_FUN_01c20e04(ppSVar3,pSVar2);
      return;
    }
  }
  return;
}


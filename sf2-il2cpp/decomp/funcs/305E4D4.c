// ACHLOMELAJE$$NLNGAENLEAA @ RVA 0x305E4D4

bool ACHLOMELAJE__NLNGAENLEAA(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Xml_XmlNode_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565eaa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Remove__);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_8598);
    FUN_01bab630(&StringLiteral_12000);
    DAT_04565eaa = 1;
  }
  bVar1 = ACHLOMELAJE__OKLLAOCGDCP(__this,KGLJICLJHEL,method);
  if (!bVar1) {
    return bVar1;
  }
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlNode_o *)
             (*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                       (pSVar2,StringLiteral_12000,(pSVar2->klass->vtable)._51_get_Item.method);
    pSVar3 = EIABCPKDEBD__MHJPHEMBOLK
                       (pSVar2,StringLiteral_8598,StringLiteral_9327,KGLJICLJHEL,(MethodInfo *)0x0);
    if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
      if (pSVar2 == (System_Xml_XmlNode_o *)0x0) goto LAB_0315e5dc;
      (*(pSVar2->klass->vtable)._25_RemoveChild.methodPtr)
                (pSVar2,pSVar3,(pSVar2->klass->vtable)._25_RemoveChild.method);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).CNOABMOGJGB;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Remove
                (__this_00,(Il2CppObject *)KGLJICLJHEL,
                 Method_System_Collections_Generic_HashSet<string>_Remove__);
      return bVar1;
    }
  }
LAB_0315e5dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ACHLOMELAJE$$JGGHLGELFDJ @ RVA 0x305B7C0

bool ACHLOMELAJE__JGGHLGELFDJ(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlNode_o *pSVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_04565e85 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11874);
    DAT_04565e85 = 1;
  }
  pSVar2 = (__this->fields).super.HJKLIDCAEOE;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar2,StringLiteral_11874,
                                (pSVar2->klass->vtable)._51_get_Item.method);
    bVar1 = false;
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x468))(plVar3,KGLJICLJHEL,*(undefined8 *)(*plVar3 + 0x470));
      bVar1 = lVar4 != 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


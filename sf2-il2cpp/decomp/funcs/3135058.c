// EIABCPKDEBD$$NGKIMHJCLBJ @ RVA 0x3135058

System_Xml_XmlNode_o *
EIABCPKDEBD__NGKIMHJCLBJ(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
    if (lVar1 != 0) {
      auVar3 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
      method = auVar3._8_8_;
      plVar2 = auVar3._0_8_;
      if (plVar2 == (long *)0x0) goto LAB_032350a8;
      (**(code **)(*plVar2 + 0x2c8))(plVar2,AHDGNOJPPIB,*(undefined8 *)(*plVar2 + 0x2d0));
    }
    return AHDGNOJPPIB;
  }
LAB_032350a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// HFLNADKHFLG$$EFBDLCFADNH @ RVA 0x33C22A0

void HFLNADKHFLG__EFBDLCFADNH
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  long lVar1;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  
  if (NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0) {
    lVar1 = (*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                      (NMONNKBNOCM,KGLJICLJHEL,(NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (lVar1 == 0) {
      if (AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) goto LAB_034c2314;
      JOHFLOEABJL = (System_Xml_XmlNode_o *)
                    (*(AELAFOPLMOP->klass->vtable)._51_get_Item.methodPtr)
                              (AELAFOPLMOP,KGLJICLJHEL,
                               (AELAFOPLMOP->klass->vtable)._51_get_Item.method);
      if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
        EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,JOHFLOEABJL,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_034c2314:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


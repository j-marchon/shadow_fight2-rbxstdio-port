// POLAJNLKPAK$$HNIHOIAMDPC @ RVA 0x313C76C

bool POLAJNLKPAK__HNIHOIAMDPC(POLAJNLKPAK_o *__this,System_String_o *FELBILGDDDN,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlDocument_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566733 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04566733 = 1;
  }
  __this_00 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Xml_XmlDocument_o *)0x0) {
    method_00 = (__this_00->klass->vtable)._86_Load.method;
    (*(__this_00->klass->vtable)._86_Load.methodPtr)(__this_00,FELBILGDDDN);
    bVar1 = POLAJNLKPAK__HNIHOIAMDPC(__this,__this_00,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


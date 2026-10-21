// EIABCPKDEBD$$OBECCOPBADO @ RVA 0x313456C

bool EIABCPKDEBD__OBECCOPBADO(System_Xml_XmlAttribute_o *LBJNDMNEJJB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *__this;
  
  if ((DAT_045666f0 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045666f0 = 1;
  }
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    __this = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if (__this != (System_String_o *)0x0) {
      bVar1 = System_String__Equals(__this,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return true;
}


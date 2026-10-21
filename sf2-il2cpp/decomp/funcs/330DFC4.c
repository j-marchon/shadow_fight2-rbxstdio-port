// GIAMPEGMNHE$$KGEKFIHAHLJ @ RVA 0x330DFC4

System_Xml_XmlDocument_o *
GIAMPEGMNHE__KGEKFIHAHLJ
          (System_String_o *JLNPKGGFFDD,bool ADDHOAPEIJI,bool JOIPGMAIEJD,MethodInfo *method)

{
  System_Xml_XmlReaderSettings_o *__this;
  System_Xml_XmlDocument_o *pSVar1;
  System_String_o *message;
  
  if ((DAT_0456779e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Xml_XmlReaderSettings_TypeInfo);
    FUN_01bab630(&StringLiteral_5886);
    DAT_0456779e = 1;
  }
  __this = (System_Xml_XmlReaderSettings_o *)
           thunk_FUN_01bda818(System_Xml_XmlReaderSettings_TypeInfo);
  System_Xml_XmlReaderSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Xml_XmlReaderSettings_o *)0x0) {
    System_Xml_XmlReaderSettings__set_IgnoreComments(__this,ADDHOAPEIJI,(MethodInfo *)0x0);
    pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC(JLNPKGGFFDD,__this,JOIPGMAIEJD,method);
    if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
      message = System_String__Concat(StringLiteral_5886,JLNPKGGFFDD,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlDocument_o *)0x0;
    }
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


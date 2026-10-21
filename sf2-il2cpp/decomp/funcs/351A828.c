// FCGINHCODAI$$.ctor @ RVA 0x351A828

void FCGINHCODAI___ctor(FCGINHCODAI_o *__this,System_Xml_XmlNode_o *IDAKJHIMAHA,MethodInfo *method)

{
  uint32_t uVar1;
  MGNDHCBAPEN_uint__uint__o *pMVar2;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  int64_t iVar3;
  
  if ((DAT_04568974 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694);
    DAT_04568974 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pMVar2 = GIAMPEGMNHE__BHMEMFPFMJC(IDAKJHIMAHA,0,0xffffffff,(MethodInfo *)0x0);
  if (pMVar2 != (MGNDHCBAPEN_uint__uint__o *)0x0) {
    uVar1 = (pMVar2->fields).DOKHHBGJICA;
    (__this->fields).PEOMJHJICCM = (pMVar2->fields).PHPELPFMOII;
    (__this->fields).GKBCJOEFFCP = uVar1;
    if (IDAKJHIMAHA != (System_Xml_XmlNode_o *)0x0) {
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(IDAKJHIMAHA->klass->vtable)._16_get_Attributes.methodPtr)
                            (IDAKJHIMAHA,(IDAKJHIMAHA->klass->vtable)._16_get_Attributes.method);
      if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_14694,(MethodInfo *)0x0);
        iVar3 = EIABCPKDEBD__HNIGPBMJJOL(LBJNDMNEJJB,0,(MethodInfo *)0x0);
        (__this->fields).CJNHFNHJHPE = iVar3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// HIJGJNFACPG$$HNIHOIAMDPC @ RVA 0x3291880

void HIJGJNFACPG__HNIHOIAMDPC
               (HIJGJNFACPG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *IIBFFEPEHPF;
  System_Xml_XmlElement_o *DBIEMFPJADD;
  MethodInfo *method_00;
  
  if ((DAT_04567329 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577);
    FUN_01bab630(&StringLiteral_11457);
    DAT_04567329 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    IIBFFEPEHPF = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_4577,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    FPPKHNNABAD__MLJDPILPJDE(IIBFFEPEHPF,(__this->fields).KDIMDBHMBEM,(MethodInfo *)0x0);
    method_00 = (AHDGNOJPPIB->klass->vtable)._51_get_Item.method;
    DBIEMFPJADD = (System_Xml_XmlElement_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11457);
    HIJGJNFACPG__FAEKHJHILGP(__this,DBIEMFPJADD,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


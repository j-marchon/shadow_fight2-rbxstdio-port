// GIAMPEGMNHE$$IBJOMPOLPCC @ RVA 0x330C9D4

System_Xml_XmlDocument_o *
GIAMPEGMNHE__IBJOMPOLPCC(System_Xml_XmlReader_o *NHDLBMBHNOL,bool JOIPGMAIEJD,MethodInfo *method)

{
  System_Xml_XmlDocument_o *__this;
  System_Xml_XmlDocument_c *pSVar1;
  
                    /* try { // try from 0340c9f0 to 0350cc93 has its CatchHandler @ 0340c9f0
                       catch() { ... } // from try @ 0340c9f0 with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340cd58 with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d0f0 with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d144 with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d23c with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d28c with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d2b4 with catch @ 0340c9f0
                       catch() { ... } // from try @ 0340d2f8 with catch @ 0340c9f0 */
  if ((DAT_04567790 & 1) == 0) {
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    DAT_04567790 = 1;
  }
  __this = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
  System_Xml_XmlDocument___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Xml_XmlDocument_o *)0x0) {
    pSVar1 = __this->klass;
    (__this->fields).preserveWhitespace = JOIPGMAIEJD;
    (*(pSVar1->vtable)._87_Load.methodPtr)(__this,NHDLBMBHNOL,(pSVar1->vtable)._87_Load.method);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// GIAMPEGMNHE$$IBJOMPOLPCC @ RVA 0x330C7E0

/* WARNING: Removing unreachable block (ram,0x0340c91c) */

System_Xml_XmlDocument_o *
GIAMPEGMNHE__IBJOMPOLPCC
          (System_String_o *OCMMDIHLKMH,System_Xml_XmlReaderSettings_o *JJFHIMKCHKC,bool JOIPGMAIEJD
          ,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_IO_StringReader_o *__this;
  System_Xml_XmlReader_o *NHDLBMBHNOL;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  System_Xml_XmlReader_c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Xml_XmlDocument_o *pSVar7;
  
  if ((DAT_0456778d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_StringReader_TypeInfo);
    FUN_01bab630(&System_Xml_XmlReader_TypeInfo);
    DAT_0456778d = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(OCMMDIHLKMH,(MethodInfo *)0x0);
  pSVar7 = (System_Xml_XmlDocument_o *)0x0;
  if (!bVar2) {
    __this = (System_IO_StringReader_o *)thunk_FUN_01bda818(System_IO_StringReader_TypeInfo);
    System_IO_StringReader___ctor(__this,OCMMDIHLKMH,(MethodInfo *)0x0);
    if ((System_Xml_XmlReader_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo *)0x0;
    NHDLBMBHNOL = System_Xml_XmlReader__Create
                            ((System_IO_TextReader_o *)__this,JJFHIMKCHKC,(MethodInfo *)0x0);
    pSVar7 = GIAMPEGMNHE__IBJOMPOLPCC(NHDLBMBHNOL,JOIPGMAIEJD,method_00);
    if (NHDLBMBHNOL != (System_Xml_XmlReader_o *)0x0) {
      pSVar4 = NHDLBMBHNOL->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar3 = &(pSVar4->vtable)._0_Equals + *piVar6;
            goto LAB_0340c8f8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(NHDLBMBHNOL,System_IDisposable_TypeInfo,0);
LAB_0340c8f8:
      (*pVVar3->methodPtr)(NHDLBMBHNOL,pVVar3->method);
    }
  }
  return pSVar7;
}


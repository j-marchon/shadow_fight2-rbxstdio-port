// GIAMPEGMNHE$$FDGAAELNMNO @ RVA 0x330CC64

/* WARNING: Removing unreachable block (ram,0x0340cdc4) */
/* WARNING: Removing unreachable block (ram,0x0340cde4) */
/* WARNING: Removing unreachable block (ram,0x0340cde8) */
/* WARNING: Removing unreachable block (ram,0x0340ce14) */

System_Xml_XmlDocument_o *
GIAMPEGMNHE__FDGAAELNMNO
          (System_Byte_array *GGJDFLFMCAH,bool ADDHOAPEIJI,bool JOIPGMAIEJD,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlReaderSettings_o *__this;
  System_IO_MemoryStream_o *__this_00;
  System_Xml_XmlReader_o *NHDLBMBHNOL;
  System_Xml_XmlDocument_o *pSVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *method_00;
  System_Xml_XmlReader_c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04567791 & 1) == 0) {
                    /* try { // try from 0340cc94 to 0350cc9b has its CatchHandler @ 0340d200 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0340cca8 to 0350ccb3 has its CatchHandler @ 0340d1ec */
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    FUN_01bab630(&System_Xml_XmlReaderSettings_TypeInfo);
                    /* try { // try from 0340ccc0 to 0350cccb has its CatchHandler @ 0340d1f8 */
    FUN_01bab630(&System_Xml_XmlReader_TypeInfo);
    DAT_04567791 = 1;
  }
                    /* try { // try from 0340ccd4 to 0350ccdf has its CatchHandler @ 0340d154 */
  __this = (System_Xml_XmlReaderSettings_o *)
           thunk_FUN_01bda818(System_Xml_XmlReaderSettings_TypeInfo);
  System_Xml_XmlReaderSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this == (System_Xml_XmlReaderSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0340ce10 to 0350ce17 has its CatchHandler @ 0340d1b8 */
    FUN_01bab8c8();
  }
  System_Xml_XmlReaderSettings__set_IgnoreComments(__this,ADDHOAPEIJI,(MethodInfo *)0x0);
  __this_00 = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
                    /* try { // try from 0340cd0c to 0350cd1b has its CatchHandler @ 0340d1e8 */
  System_IO_MemoryStream___ctor(__this_00,GGJDFLFMCAH,(MethodInfo *)0x0);
                    /* try { // try from 0340cd28 to 0350cd2f has its CatchHandler @ 0340d150 */
  if ((System_Xml_XmlReader_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_00 = (MethodInfo *)0x0;
  NHDLBMBHNOL = System_Xml_XmlReader__Create
                          ((System_IO_Stream_o *)__this_00,__this,(MethodInfo *)0x0);
                    /* try { // try from 0340cd48 to 0350cd57 has its CatchHandler @ 0340d158 */
  pSVar2 = GIAMPEGMNHE__IBJOMPOLPCC(NHDLBMBHNOL,JOIPGMAIEJD,method_00);
                    /* try { // try from 0340cd58 to 0350cdcb has its CatchHandler @ 0340c9f0 */
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
          goto LAB_0340cdb0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(NHDLBMBHNOL,System_IDisposable_TypeInfo,0);
LAB_0340cdb0:
    (*pVVar3->methodPtr)(NHDLBMBHNOL,pVVar3->method);
  }
                    /* try { // try from 0340ce04 to 0350ce0b has its CatchHandler @ 0340d1c4 */
  return pSVar2;
}


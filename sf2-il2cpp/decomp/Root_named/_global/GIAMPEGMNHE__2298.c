// TypeDefIndex 2298
// Namespace: 
// [Extension]
// public static class GIAMPEGMNHE
// Fields:

// ===== public static float FOKFAIPDIMB(XmlAttribute LBJNDMNEJJB, float HBFDLMOKDGA = 0)  [RVA 0x330C73C]
// GIAMPEGMNHE$$FOKFAIPDIMB @ RVA 0x330C73C

float GIAMPEGMNHE__FOKFAIPDIMB
                (System_Xml_XmlAttribute_o *LBJNDMNEJJB,float HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *ODAMFBHJKIH;
  float fVar2;
  float local_24;
  
  if ((DAT_0456778c & 1) == 0) {
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    DAT_0456778c = 1;
  }
  local_24 = 0.0;
  fVar2 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    ODAMFBHJKIH = (System_String_o *)
                  (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                            (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PNPPAHHCBOM_TypeInfo);
    }
    bVar1 = PNPPAHHCBOM__MEEKIFOGCCL(ODAMFBHJKIH,&local_24,(MethodInfo *)0x0);
    fVar2 = local_24;
    if (!bVar1) {
      fVar2 = HBFDLMOKDGA;
    }
  }
  return fVar2;
}


// ===== private static XmlDocument IBJOMPOLPCC(string OCMMDIHLKMH, XmlReaderSettings JJFHIMKCHKC, bool JOIPGMAIEJD)  [RVA 0x330C7E0]
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


// ===== public static void DGLLHFNFGNO(XmlDocument EKEMDOEAFHP, string CCKJFMILHLC)  [RVA 0x330CB04]
// GIAMPEGMNHE$$DGLLHFNFGNO @ RVA 0x330CB04

void GIAMPEGMNHE__DGLLHFNFGNO
               (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *CCKJFMILHLC,
               MethodInfo *method)

{
  if ((DAT_0456778e & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    DAT_0456778e = 1;
  }
  NEHNBJKKABI__AIJFIAOKNPK(EKEMDOEAFHP,CCKJFMILHLC,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GPKEHBNBBON(EKEMDOEAFHP,CCKJFMILHLC,false,(MethodInfo *)0x0);
  return;
}


// ===== public static Vector2 OKCALGFAMFA(XmlNode JHMENEKPIBO, float KJBOKJNJBEK = 0, float IKNINMHPJEI = 0)  [RVA 0x330CB88]
// GIAMPEGMNHE$$OKCALGFAMFA @ RVA 0x330CB88

UnityEngine_Vector2_o
GIAMPEGMNHE__OKCALGFAMFA
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KJBOKJNJBEK,float IKNINMHPJEI,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  UnityEngine_Vector2_o UVar3;
  
  if ((DAT_0456778f & 1) == 0) {
    FUN_01bab630(&StringLiteral_7359/*"In"*/);
    FUN_01bab630(&StringLiteral_9996/*"Out"*/);
    DAT_0456778f = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7359/*"In"*/,(MethodInfo *)0x0);
      KJBOKJNJBEK = EIABCPKDEBD__GICIEKCGOHA(pSVar2,KJBOKJNJBEK,(MethodInfo *)0x0);
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9996/*"Out"*/,(MethodInfo *)0x0);
        IKNINMHPJEI = EIABCPKDEBD__GICIEKCGOHA(pSVar2,IKNINMHPJEI,(MethodInfo *)0x0);
        goto LAB_0340cc48;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0340cc48:
  UVar3.fields.y = IKNINMHPJEI;
  UVar3.fields.x = KJBOKJNJBEK;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// ===== private static XmlDocument IBJOMPOLPCC(XmlReader NHDLBMBHNOL, bool JOIPGMAIEJD)  [RVA 0x330C9D4]
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


// ===== public static XmlDocument FDGAAELNMNO(byte[] GGJDFLFMCAH, bool ADDHOAPEIJI = True, bool JOIPGMAIEJD = False)  [RVA 0x330CC64]
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


// ===== public static MGNDHCBAPEN<uint, uint> BHMEMFPFMJC(XmlNode JHMENEKPIBO, uint KMKCEANBDGG = 0, uint IEJIPPALEFB = 0)  [RVA 0x330CF5C]
// GIAMPEGMNHE$$BHMEMFPFMJC @ RVA 0x330CF5C

MGNDHCBAPEN_uint__uint__o *
GIAMPEGMNHE__BHMEMFPFMJC
          (System_Xml_XmlNode_o *JHMENEKPIBO,uint32_t KMKCEANBDGG,uint32_t IEJIPPALEFB,
          MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_uint__uint__o *__this;
  
                    /* try { // try from 0340cf5c to 0350cf7b has its CatchHandler @ 0340d290 */
  if ((DAT_04567792 & 1) == 0) {
                    /* try { // try from 0340cf80 to 0350cf87 has its CatchHandler @ 0340d160 */
    FUN_01bab630(&Method_MGNDHCBAPEN<uint,_uint>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<uint,_uint>_TypeInfo);
                    /* try { // try from 0340cf98 to 0350cf9f has its CatchHandler @ 0340d1b4 */
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
                    /* try { // try from 0340cfa4 to 0350cfab has its CatchHandler @ 0340d170 */
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    DAT_04567792 = 1;
  }
                    /* try { // try from 0340cfbc to 0350cfc3 has its CatchHandler @ 0340d174 */
                    /* try { // try from 0340cfc4 to 0350cfd3 has its CatchHandler @ 0340d16c */
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340d054:
    __this = (MGNDHCBAPEN_uint__uint__o *)thunk_FUN_01bda818(MGNDHCBAPEN<uint,_uint>_TypeInfo);
                    /* try { // try from 0340d05c to 0350d07b has its CatchHandler @ 0340d294 */
    MGNDHCBAPEN<uint,_uint>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<uint,_uint>__ctor__);
    return __this;
  }
                    /* try { // try from 0340cfdc to 0350cffb has its CatchHandler @ 0340d28c */
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340d000 to 0350d007 has its CatchHandler @ 0340d168 */
    KMKCEANBDGG = EIABCPKDEBD__FECKAJHFDJM(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
                    /* try { // try from 0340d018 to 0350d01f has its CatchHandler @ 0340d17c */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d024 to 0350d02b has its CatchHandler @ 0340d1a8 */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340d03c to 0350d043 has its CatchHandler @ 0340d178 */
      IEJIPPALEFB = EIABCPKDEBD__FECKAJHFDJM(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
                    /* try { // try from 0340d044 to 0350d053 has its CatchHandler @ 0340d18c */
      goto LAB_0340d054;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0340d080 to 0350d087 has its CatchHandler @ 0340d1a0 */
  FUN_01bab8c8();
}


// ===== public static long KCCCDOBCCNN(XmlAttribute LBJNDMNEJJB, long HBFDLMOKDGA = 0)  [RVA 0x330D084]
// GIAMPEGMNHE$$KCCCDOBCCNN @ RVA 0x330D084

int64_t GIAMPEGMNHE__KCCCDOBCCNN
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int64_t HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int64_t iVar3;
  int64_t local_18;
  
  local_18 = 0;
  iVar3 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 0340d098 to 0350d09f has its CatchHandler @ 0340d198 */
    pSVar2 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
                    /* try { // try from 0340d0a4 to 0350d0ab has its CatchHandler @ 0340d190 */
    pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
    bVar1 = System_Int64__TryParse(pSVar2,&local_18,(MethodInfo *)0x0);
    iVar3 = local_18;
                    /* try { // try from 0340d0bc to 0350d0c3 has its CatchHandler @ 0340d194 */
    if (!bVar1) {
      iVar3 = HBFDLMOKDGA;
    }
  }
                    /* try { // try from 0340d0c4 to 0350d0d7 has its CatchHandler @ 0340d180 */
  return iVar3;
}


// ===== public static string HPIOBPFLFLL(string EIJDDKJONFO, string ILENGCADNIH = "", bool ANKDLALOKMH = True)  [RVA 0x330D0D4]
// GIAMPEGMNHE$$HPIOBPFLFLL @ RVA 0x330D0D4

System_String_o *
GIAMPEGMNHE__HPIOBPFLFLL
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,bool ANKDLALOKMH,
          MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  
  if ((DAT_04567793 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/,ILENGCADNIH,ANKDLALOKMH);
    DAT_04567793 = 1;
  }
  if (EIJDDKJONFO != (System_String_o *)0x0) {
    pSVar3 = System_String__Replace(EIJDDKJONFO,0x5c,0x2f,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(ILENGCADNIH,(MethodInfo *)0x0);
    if (bVar1) {
      return pSVar3;
    }
    if (ILENGCADNIH != (System_String_o *)0x0) {
      uVar2 = System_String__get_Chars(ILENGCADNIH,0,(MethodInfo *)0x0);
      if ((uVar2 != 0x2f) &&
         (uVar2 = PCOEHCPGBBG__KIKGKKGDCKK(pSVar3,(MethodInfo *)0x0), uVar2 != 0x2f)) {
        pSVar3 = System_String__Concat(pSVar3,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
      }
      pSVar3 = System_String__Concat(pSVar3,ILENGCADNIH,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string JIGCIBMKDAL(string AAIHDEKMIJG, string LFGKEPCBPKF)  [RVA 0x330D0D8]
// GIAMPEGMNHE$$JIGCIBMKDAL @ RVA 0x330D0D8

System_String_o *
GIAMPEGMNHE__JIGCIBMKDAL
          (System_String_o *AAIHDEKMIJG,System_String_o *LFGKEPCBPKF,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  System_String_o *pSVar3;
  
                    /* try { // try from 0340d0e4 to 0350d0ef has its CatchHandler @ 0340d1a4 */
                    /* try { // try from 0340d0f0 to 0350d127 has its CatchHandler @ 0340c9f0 */
  if ((DAT_04567793 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    DAT_04567793 = 1;
  }
  if (AAIHDEKMIJG != (System_String_o *)0x0) {
    pSVar3 = System_String__Replace(AAIHDEKMIJG,0x5c,0x2f,(MethodInfo *)0x0);
                    /* try { // try from 0340d128 to 0350d12b has its CatchHandler @ 0340d1f4 */
                    /* try { // try from 0340d12c to 0350d12f has its CatchHandler @ 0340d1f0 */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(LFGKEPCBPKF,(MethodInfo *)0x0);
                    /* try { // try from 0340d130 to 0350d133 has its CatchHandler @ 0340d1d0 */
    if (bVar1) {
                    /* try { // try from 0340d134 to 0350d137 has its CatchHandler @ 0340d1cc */
                    /* try { // try from 0340d138 to 0350d13b has its CatchHandler @ 0340d184 */
                    /* try { // try from 0340d13c to 0350d13f has its CatchHandler @ 0340d15c */
                    /* try { // try from 0340d140 to 0350d143 has its CatchHandler @ 0340d14c */
      return pSVar3;
    }
                    /* try { // try from 0340d144 to 0350d237 has its CatchHandler @ 0340c9f0 */
    if (LFGKEPCBPKF != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 0340ce50 with catch @ 0340d148 */
                    /* catch() { ... } // from try @ 0340d140 with catch @ 0340d14c */
                    /* catch() { ... } // from try @ 0340cd28 with catch @ 0340d150 */
                    /* catch() { ... } // from try @ 0340ccd4 with catch @ 0340d154 */
      uVar2 = System_String__get_Chars(LFGKEPCBPKF,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340cd48 with catch @ 0340d158 */
                    /* catch() { ... } // from try @ 0340d13c with catch @ 0340d15c */
                    /* catch() { ... } // from try @ 0340cf80 with catch @ 0340d160 */
                    /* catch() { ... } // from try @ 0340cf18 with catch @ 0340d164 */
                    /* catch() { ... } // from try @ 0340d000 with catch @ 0340d168 */
                    /* catch() { ... } // from try @ 0340cfc4 with catch @ 0340d16c */
                    /* catch() { ... } // from try @ 0340cfa4 with catch @ 0340d170 */
                    /* catch() { ... } // from try @ 0340cfbc with catch @ 0340d174 */
                    /* catch() { ... } // from try @ 0340d03c with catch @ 0340d178 */
      if ((uVar2 != 0x2f) &&
         (uVar2 = PCOEHCPGBBG__KIKGKKGDCKK(pSVar3,(MethodInfo *)0x0), uVar2 != 0x2f)) {
                    /* catch() { ... } // from try @ 0340d018 with catch @ 0340d17c */
                    /* catch() { ... } // from try @ 0340d0c4 with catch @ 0340d180 */
                    /* catch() { ... } // from try @ 0340d138 with catch @ 0340d184 */
                    /* catch() { ... } // from try @ 0340cf24 with catch @ 0340d188 */
                    /* catch() { ... } // from try @ 0340d044 with catch @ 0340d18c */
                    /* catch() { ... } // from try @ 0340d0a4 with catch @ 0340d190 */
        pSVar3 = System_String__Concat(pSVar3,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d0bc with catch @ 0340d194 */
      }
                    /* catch() { ... } // from try @ 0340d098 with catch @ 0340d198 */
                    /* catch() { ... } // from try @ 0340cf00 with catch @ 0340d19c */
                    /* catch() { ... } // from try @ 0340d080 with catch @ 0340d1a0 */
                    /* catch() { ... } // from try @ 0340d0e4 with catch @ 0340d1a4 */
                    /* catch() { ... } // from try @ 0340d024 with catch @ 0340d1a8 */
                    /* catch() { ... } // from try @ 0340cf3c with catch @ 0340d1ac */
      pSVar3 = System_String__Concat(pSVar3,LFGKEPCBPKF,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0340cf44 with catch @ 0340d1b0 */
  FUN_01bab8c8();
}


// ===== public static Nullable<DateTime> BNNEHBHNIKG(XmlAttribute LBJNDMNEJJB, string HBCGFJEOADH)  [RVA 0x330D1B4]
// GIAMPEGMNHE$$BNNEHBHNIKG @ RVA 0x330D1B4

System_Nullable_DateTime__o
GIAMPEGMNHE__BNNEHBHNIKG
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBCGFJEOADH,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_DateTime_Fields SVar4;
  System_Globalization_CultureInfo_o *provider;
  MethodInfo_27F61A0 *in_x3;
  System_Nullable_DateTime__o __this;
  System_Nullable_DateTime__o SVar5;
  undefined8 local_40;
  System_DateTime_Fields SStack_38;
  
                    /* catch() { ... } // from try @ 0340cf98 with catch @ 0340d1b4 */
                    /* catch() { ... } // from try @ 0340ce10 with catch @ 0340d1b8 */
                    /* catch() { ... } // from try @ 0340cdf4 with catch @ 0340d1bc */
                    /* catch() { ... } // from try @ 0340ce98 with catch @ 0340d1c0 */
                    /* catch() { ... } // from try @ 0340ce04 with catch @ 0340d1c4 */
                    /* catch() { ... } // from try @ 0340cea4 with catch @ 0340d1c8 */
                    /* catch() { ... } // from try @ 0340d134 with catch @ 0340d1cc */
                    /* catch() { ... } // from try @ 0340d130 with catch @ 0340d1d0 */
                    /* catch() { ... } // from try @ 0340cebc with catch @ 0340d1d4 */
  if ((DAT_04567794 & 1) == 0) {
                    /* catch() { ... } // from try @ 0340ce80 with catch @ 0340d1d8 */
                    /* catch() { ... } // from try @ 0340cec4 with catch @ 0340d1dc */
                    /* catch() { ... } // from try @ 0340ce20 with catch @ 0340d1e0 */
    FUN_01bab630(&System_Globalization_CultureInfo_TypeInfo);
                    /* catch() { ... } // from try @ 0340ce28 with catch @ 0340d1e4 */
                    /* catch() { ... } // from try @ 0340cd0c with catch @ 0340d1e8 */
                    /* catch() { ... } // from try @ 0340cca8 with catch @ 0340d1ec */
    FUN_01bab630(&System_DateTime_TypeInfo);
                    /* catch() { ... } // from try @ 0340d12c with catch @ 0340d1f0 */
                    /* catch() { ... } // from try @ 0340d128 with catch @ 0340d1f4 */
                    /* catch() { ... } // from try @ 0340ccc0 with catch @ 0340d1f8 */
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
                    /* catch() { ... } // from try @ 0340cdcc with catch @ 0340d1fc */
                    /* catch() { ... } // from try @ 0340cc94 with catch @ 0340d200 */
    DAT_04567794 = 1;
  }
  if (LBJNDMNEJJB == (System_Xml_XmlAttribute_o *)0x0) {
    local_40 = 0;
    SStack_38._dateData = 0;
  }
  else {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar3,(MethodInfo *)0x0);
    local_40 = 0;
    SStack_38._dateData = 0;
    if (!bVar2) {
                    /* try { // try from 0340d238 to 0350d23b has its CatchHandler @ 0340d268 */
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(HBCGFJEOADH,(MethodInfo *)0x0);
                    /* try { // try from 0340d23c to 0350d277 has its CatchHandler @ 0340c9f0 */
      pIVar1 = (LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr;
      if (bVar2) {
        pSVar3 = (System_String_o *)(*pIVar1)(LBJNDMNEJJB);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340d238 with catch @ 0340d268 */
          thunk_FUN_01ba7564();
        }
        SVar4._dateData = (uint64_t)System_DateTime__Parse(pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0340d278 to 0350d28b has its CatchHandler @ 0340d30c */
      }
      else {
        pSVar3 = (System_String_o *)
                 (*pIVar1)(LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
                    /* catch() { ... } // from try @ 0340cfdc with catch @ 0340d28c
                       try { // try from 0340d28c to 0350d2af has its CatchHandler @ 0340c9f0 */
                    /* catch() { ... } // from try @ 0340cf5c with catch @ 0340d290 */
                    /* catch() { ... } // from try @ 0340d05c with catch @ 0340d294 */
                    /* catch() { ... } // from try @ 0340cedc with catch @ 0340d298 */
                    /* catch() { ... } // from try @ 0340ce54 with catch @ 0340d29c */
        if ((System_Globalization_CultureInfo_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340cde0 with catch @ 0340d2a0 */
          thunk_FUN_01ba7564();
        }
        provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
                    /* try { // try from 0340d2b0 to 0350d2b3 has its CatchHandler @ 0340d2e0 */
                    /* try { // try from 0340d2b4 to 0350d2ef has its CatchHandler @ 0340c9f0 */
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        in_x3 = (MethodInfo_27F61A0 *)0x40;
        SVar4._dateData =
             (uint64_t)
             System_DateTime__ParseExact
                       (pSVar3,HBCGFJEOADH,(System_IFormatProvider_o *)provider,0x40,
                        (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d2b0 with catch @ 0340d2e0 */
      }
      local_40 = 0;
      SStack_38._dateData = 0;
      __this.fields.value.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)SVar4._dateData;
      __this.fields._0_8_ = &local_40;
                    /* try { // try from 0340d2f0 to 0350d2f7 has its CatchHandler @ 0340d30c */
                    /* try { // try from 0340d2f8 to 0350d303 has its CatchHandler @ 0340c9f0 */
      System_Nullable<DateTime>___ctor
                (__this,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,in_x3)
      ;
    }
  }
  SVar5.fields.value.fields._dateData =
       (System_DateTime_Fields)(System_DateTime_Fields)SStack_38._dateData;
  SVar5.fields._0_8_ = local_40;
  return (System_Nullable_DateTime__o)SVar5.fields;
}


// ===== public static MGNDHCBAPEN<int, int> GGPIBJJKMPK(XmlNode JHMENEKPIBO, int KMKCEANBDGG = 0, int IEJIPPALEFB = 0)  [RVA 0x330D3FC]
// GIAMPEGMNHE$$GGPIBJJKMPK @ RVA 0x330D3FC

MGNDHCBAPEN_int__int__o *
GIAMPEGMNHE__GGPIBJJKMPK
          (System_Xml_XmlNode_o *JHMENEKPIBO,int32_t KMKCEANBDGG,int32_t IEJIPPALEFB,
          MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_int__int__o *__this;
  
  if ((DAT_04567795 & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<int,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<int,_int>_TypeInfo);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    DAT_04567795 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340d4f4:
    __this = (MGNDHCBAPEN_int__int__o *)thunk_FUN_01bda818(MGNDHCBAPEN<int,_int>_TypeInfo);
                    /* try { // try from 0340d500 to 0350d507 has its CatchHandler @ 0340d728 */
                    /* try { // try from 0340d508 to 0350d517 has its CatchHandler @ 0340d724 */
    MGNDHCBAPEN<int,_int>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<int,_int>__ctor__);
    return __this;
  }
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d494 to 0350d49b has its CatchHandler @ 0340d73c */
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
    KMKCEANBDGG = EIABCPKDEBD__EHJNCGCICMP(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
                    /* try { // try from 0340d4b0 to 0350d4bf has its CatchHandler @ 0340d748 */
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0340d4c4 to 0350d4cb has its CatchHandler @ 0340d72c */
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
                    /* try { // try from 0340d4dc to 0350d4e3 has its CatchHandler @ 0340d70c */
      IEJIPPALEFB = EIABCPKDEBD__EHJNCGCICMP(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
                    /* try { // try from 0340d4e8 to 0350d4ef has its CatchHandler @ 0340d718 */
      goto LAB_0340d4f4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static XmlDocument IBJOMPOLPCC(string EIJDDKJONFO, MPNLOEAPLNP CFHHLCMKGCH, bool ADDHOAPEIJI = True, bool ANKDLALOKMH = True, bool JOIPGMAIEJD = False)  [RVA 0x330D524]
// GIAMPEGMNHE$$IBJOMPOLPCC @ RVA 0x330D524

System_Xml_XmlDocument_o *
GIAMPEGMNHE__IBJOMPOLPCC
          (System_String_o *EIJDDKJONFO,int32_t CFHHLCMKGCH,bool ADDHOAPEIJI,bool ANKDLALOKMH,
          bool JOIPGMAIEJD,MethodInfo *method)

{
  System_Xml_XmlDocument_o *pSVar1;
  MethodInfo *in_x6;
  
                    /* try { // try from 0340d538 to 0350d53b has its CatchHandler @ 0340d6e8 */
                    /* try { // try from 0340d53c to 0350d563 has its CatchHandler @ 0340d744 */
  if ((DAT_04567796 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 0340d568 to 0350d56f has its CatchHandler @ 0340d714 */
    DAT_04567796 = 1;
  }
                    /* try { // try from 0340d580 to 0350d587 has its CatchHandler @ 0340d710 */
                    /* try { // try from 0340d58c to 0350d593 has its CatchHandler @ 0340d738 */
                    /* try { // try from 0340d59c to 0350d5a3 has its CatchHandler @ 0340d734 */
  pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC
                     (EIJDDKJONFO,string_TypeInfo->static_fields->Empty,CFHHLCMKGCH,ADDHOAPEIJI,
                      ANKDLALOKMH,JOIPGMAIEJD,in_x6);
  return pSVar1;
}


// ===== public static void IIPBDIEGKDI(string CIBIKDNNBAM, string IGCGOHHCMHD)  [RVA 0x330D840]
// GIAMPEGMNHE$$IIPBDIEGKDI @ RVA 0x330D840

void GIAMPEGMNHE__IIPBDIEGKDI
               (System_String_o *CIBIKDNNBAM,System_String_o *IGCGOHHCMHD,MethodInfo *method)

{
  System_Xml_XmlDocument_o *MNENAKFHDNA;
  MethodInfo *in_x6;
  
  if ((DAT_04567797 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567797 = 1;
  }
  MNENAKFHDNA = GIAMPEGMNHE__IBJOMPOLPCC(CIBIKDNNBAM,StringLiteral_1/*""*/,0,true,true,false,in_x6);
  NEHNBJKKABI__AIJFIAOKNPK(MNENAKFHDNA,IGCGOHHCMHD,(MethodInfo *)0x0);
  if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  CFJANHACGMG__GPKEHBNBBON(MNENAKFHDNA,IGCGOHHCMHD,false,(MethodInfo *)0x0);
  return;
}


// ===== public static XmlDocument GMNIIJJFIJK(string EIJDDKJONFO, string ILENGCADNIH = "", MPNLOEAPLNP CFHHLCMKGCH = 0, bool ADDHOAPEIJI = True)  [RVA 0x330D8EC]
// GIAMPEGMNHE$$GMNIIJJFIJK @ RVA 0x330D8EC

System_Xml_XmlDocument_o *
GIAMPEGMNHE__GMNIIJJFIJK
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          bool ADDHOAPEIJI,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlDocument_o *ILENGCADNIH_00;
  System_String_o *pSVar2;
  MethodInfo *in_x6;
  
  if ((DAT_04567798 & 1) == 0) {
    FUN_01bab630(&CFJANHACGMG_TypeInfo);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567798 = 1;
  }
  ILENGCADNIH_00 =
       GIAMPEGMNHE__IBJOMPOLPCC(EIJDDKJONFO,ILENGCADNIH,CFHHLCMKGCH,ADDHOAPEIJI,true,false,in_x6);
  if ((ILENGCADNIH_00 != (System_Xml_XmlDocument_o *)0x0) && ((CFHHLCMKGCH | 2U) == 2)) {
    bVar1 = System_String__op_Inequality(ILENGCADNIH,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_1/*""*/;
    if (bVar1) {
      pSVar2 = System_String__Concat(StringLiteral_1492/*"/"*/,ILENGCADNIH,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat(EIJDDKJONFO,pSVar2,(MethodInfo *)0x0);
    if ((CFJANHACGMG_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFJANHACGMG_TypeInfo);
    }
    CFJANHACGMG__AMELFFLEPNF(ILENGCADNIH_00,pSVar2,true,(MethodInfo *)0x0);
  }
  return ILENGCADNIH_00;
}


// ===== public static Nullable<Vector2> JHLNBAHDGPI(XmlAttribute LBJNDMNEJJB)  [RVA 0x330DA04]
// GIAMPEGMNHE$$JHLNBAHDGPI @ RVA 0x330DA04

System_Nullable_Vector2__o
GIAMPEGMNHE__JHLNBAHDGPI(System_Xml_XmlAttribute_o *LBJNDMNEJJB,MethodInfo *method)

{
  uint uVar1;
  System_Nullable_Vector2__Fields SVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Char_array *separator;
  System_String_array *pSVar5;
  long lVar6;
  undefined8 *puVar7;
  MethodInfo_27FC874 *method_00;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  System_Nullable_Vector2__o __this;
  UnityEngine_Vector2_Fields local_58;
  undefined8 local_50;
  float local_48;
  
  if ((DAT_04567799 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Vector2>__ctor__);
    FUN_01bab630(&PNPPAHHCBOM_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_8BC5AA4321387997B5D86EDA80E56B6BE2547A9E5797DF383BF1107BA47DF6A4
                );
    DAT_04567799 = 1;
  }
  local_58.x = 0.0;
  local_58.y = 0.0;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar4 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,4);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)separator,
               Field_<PrivateImplementationDetails>_8BC5AA4321387997B5D86EDA80E56B6BE2547A9E5797DF383BF1107BA47DF6A4
               ,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_o *)0x0) {
LAB_0340dc68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar5 = System_String__Split(pSVar4,separator,(MethodInfo *)0x0);
                    /* try { // try from 0340dad8 to 0350dadf has its CatchHandler @ 0340db58 */
    lVar6 = FUN_01bab718(string___TypeInfo,2);
    if (pSVar5 == (System_String_array *)0x0) goto LAB_0340dc68;
    if (0 < (int)pSVar5->max_length) {
                    /* try { // try from 0340dafc to 0350daff has its CatchHandler @ 0340db4c */
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = pSVar5->max_length & 0xffffffff;
      do {
                    /* try { // try from 0340db0c to 0350db17 has its CatchHandler @ 0340db48 */
        if (uVar8 <= uVar9) goto LAB_0340dc64;
        pSVar4 = pSVar5->m_Items[uVar9];
                    /* try { // try from 0340db18 to 0350db3b has its CatchHandler @ 0340d7c0 */
        bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          if (1 < (int)uVar10) goto LAB_0340dc3c;
          if (lVar6 == 0) goto LAB_0340dc68;
                    /* try { // try from 0340db3c to 0350db3f has its CatchHandler @ 0340db54 */
          if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_0340dc64;
                    /* try { // try from 0340db40 to 0350db43 has its CatchHandler @ 0340db50 */
                    /* try { // try from 0340db44 to 0350db6f has its CatchHandler @ 0340d7c0 */
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar10 * 8 + 0x20);
          *puVar7 = pSVar4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db0c with catch @ 0340db48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340dafc with catch @ 0340db4c
                        */
          uVar10 = uVar10 + 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db40 with catch @ 0340db50
                        */
          thunk_FUN_01c20e04(puVar7,pSVar4);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340db3c with catch @ 0340db54
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0340dad8 with catch @ 0340db58
                        */
        uVar1 = (uint)pSVar5->max_length;
        uVar8 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)uVar1);
    }
                    /* try { // try from 0340db70 to 0350db73 has its CatchHandler @ 0340db94 */
    if (DAT_0455fa75 == '\0') {
                    /* try { // try from 0340db74 to 0350db9b has its CatchHandler @ 0340d7c0 */
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_0455fa75 = '\x01';
    }
                    /* catch() { ... } // from try @ 0340db70 with catch @ 0340db94 */
    local_58 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
                    /* try { // try from 0340db9c to 0350dba3 has its CatchHandler @ 0340dbb8 */
    if (lVar6 == 0) goto LAB_0340dc68;
                    /* try { // try from 0340dba4 to 0350dbaf has its CatchHandler @ 0340d7c0 */
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0340dc64:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
                    /* try { // try from 0340dbb0 to 0350dbb7 has its CatchHandler @ 0340dbb8 */
    pSVar4 = *(System_String_o **)(lVar6 + 0x20);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0340db9c with catch @ 0340dbb8
                       catch(type#2 @ 00000000) { ... } // from try @ 0340dbb0 with catch @ 0340dbb8
                        */
    if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,&local_58.x,(MethodInfo *)0x0);
    if (bVar3) {
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_0340dc64;
      pSVar4 = *(System_String_o **)(lVar6 + 0x28);
      if ((PNPPAHHCBOM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      method_00 = (MethodInfo_27FC874 *)0x0;
      bVar3 = PNPPAHHCBOM__MEEKIFOGCCL(pSVar4,(float *)((ulong)&local_58 | 4),(MethodInfo *)0x0);
      if (bVar3) {
        local_50 = 0;
        local_48 = 0.0;
        __this.fields.value.fields.y = (float)Method_System_Nullable<Vector2>__ctor__;
        __this.fields._0_8_ = &local_50;
        System_Nullable<Vector2>___ctor(__this,(UnityEngine_Vector2_o)local_58,method_00);
        goto LAB_0340dc44;
      }
    }
  }
LAB_0340dc3c:
  local_48 = 0.0;
  local_50 = 0;
LAB_0340dc44:
  SVar2.value.fields.y = local_48;
  SVar2.hasValue = (bool_conflict)(undefined1)local_50;
  SVar2._1_3_ = local_50._1_3_;
  SVar2.value.fields.x = (float)local_50._4_4_;
  return (System_Nullable_Vector2__o)SVar2;
}


// ===== public static bool FAEBPLENEGK(XmlAttribute LBJNDMNEJJB, bool HBFDLMOKDGA = False)  [RVA 0x330DC6C]
// GIAMPEGMNHE$$FAEBPLENEGK @ RVA 0x330DC6C

bool GIAMPEGMNHE__FAEBPLENEGK
               (System_Xml_XmlAttribute_o *LBJNDMNEJJB,bool HBFDLMOKDGA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t local_28;
  bool local_24 [4];
  
  if ((DAT_0456779a & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_0456779a = 1;
  }
  local_24[0] = false;
  local_28 = 0;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo);
    }
    bVar1 = System_Boolean__TryParse(pSVar2,local_24,(MethodInfo *)0x0);
    if (bVar1) {
      HBFDLMOKDGA = local_24[0] != false;
    }
    else {
      pSVar2 = (System_String_o *)
               (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                         (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
      pSVar2 = PCOEHCPGBBG__JLLDNFPOKND(pSVar2,(MethodInfo *)0x0);
      bVar1 = System_Int32__TryParse(pSVar2,&local_28,(MethodInfo *)0x0);
      if (bVar1) {
        HBFDLMOKDGA = 0 < local_28;
      }
    }
  }
  return HBFDLMOKDGA;
}


// ===== public static uint JIONICBNBJE(XmlAttribute LBJNDMNEJJB, uint HBFDLMOKDGA = 0)  [RVA 0x330DD48]
// GIAMPEGMNHE$$JIONICBNBJE @ RVA 0x330DD48

uint32_t GIAMPEGMNHE__JIONICBNBJE
                   (System_Xml_XmlAttribute_o *LBJNDMNEJJB,uint32_t HBFDLMOKDGA,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  uint32_t local_14;
  
  local_14 = 0;
  uVar1 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    pSVar3 = PCOEHCPGBBG__JLLDNFPOKND(pSVar3,(MethodInfo *)0x0);
    bVar2 = System_UInt32__TryParse(pSVar3,&local_14,(MethodInfo *)0x0);
    uVar1 = local_14;
    if (!bVar2) {
      uVar1 = HBFDLMOKDGA;
    }
  }
  return uVar1;
}


// ===== public static MGNDHCBAPEN<float, float> DOLFIEDIDHN(XmlNode JHMENEKPIBO, float KMKCEANBDGG = 0, float IEJIPPALEFB = 0)  [RVA 0x330DD98]
// GIAMPEGMNHE$$DOLFIEDIDHN @ RVA 0x330DD98

MGNDHCBAPEN_float__float__o *
GIAMPEGMNHE__DOLFIEDIDHN
          (System_Xml_XmlNode_o *JHMENEKPIBO,float KMKCEANBDGG,float IEJIPPALEFB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  MGNDHCBAPEN_float__float__o *__this;
  
  if ((DAT_0456779b & 1) == 0) {
    FUN_01bab630(&Method_MGNDHCBAPEN<float,_float>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<float,_float>_TypeInfo);
    FUN_01bab630(&StringLiteral_8868/*"Max"*/);
    FUN_01bab630(&StringLiteral_9058/*"Min"*/);
    DAT_0456779b = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
LAB_0340de8c:
    __this = (MGNDHCBAPEN_float__float__o *)thunk_FUN_01bda818(MGNDHCBAPEN<float,_float>_TypeInfo);
    MGNDHCBAPEN<float,_float>___ctor
              (__this,KMKCEANBDGG,IEJIPPALEFB,Method_MGNDHCBAPEN<float,_float>__ctor__);
    return __this;
  }
  pSVar1 = (System_Xml_XmlAttributeCollection_o *)
           (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                     (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
  if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
    pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar1,StringLiteral_9058/*"Min"*/,(MethodInfo *)0x0);
    KMKCEANBDGG = EIABCPKDEBD__GICIEKCGOHA(pSVar2,KMKCEANBDGG,(MethodInfo *)0x0);
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_8868/*"Max"*/,(MethodInfo *)0x0);
      IEJIPPALEFB = EIABCPKDEBD__GICIEKCGOHA(pSVar2,IEJIPPALEFB,(MethodInfo *)0x0);
      goto LAB_0340de8c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static int NANCFCIGNEE(XmlAttribute LBJNDMNEJJB, int HBFDLMOKDGA = 0)  [RVA 0x330DEBC]
// GIAMPEGMNHE$$NANCFCIGNEE @ RVA 0x330DEBC

int32_t GIAMPEGMNHE__NANCFCIGNEE
                  (System_Xml_XmlAttribute_o *LBJNDMNEJJB,int32_t HBFDLMOKDGA,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int32_t local_14;
  
  local_14 = 0;
  iVar1 = HBFDLMOKDGA;
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    pSVar3 = PCOEHCPGBBG__JLLDNFPOKND(pSVar3,(MethodInfo *)0x0);
    bVar2 = System_Int32__TryParse(pSVar3,&local_14,(MethodInfo *)0x0);
    iVar1 = local_14;
    if (!bVar2) {
      iVar1 = HBFDLMOKDGA;
    }
  }
  return iVar1;
}


// ===== public static XmlDocument IBJOMPOLPCC(string EIJDDKJONFO, string ILENGCADNIH = "", MPNLOEAPLNP CFHHLCMKGCH = 0, bool ADDHOAPEIJI = True, bool ANKDLALOKMH = True, bool JOIPGMAIEJD = False)  [RVA 0x330D5A4]
// GIAMPEGMNHE$$IBJOMPOLPCC @ RVA 0x330D5A4

System_Xml_XmlDocument_o *
GIAMPEGMNHE__IBJOMPOLPCC
          (System_String_o *EIJDDKJONFO,System_String_o *ILENGCADNIH,int32_t CFHHLCMKGCH,
          bool ADDHOAPEIJI,bool ANKDLALOKMH,bool JOIPGMAIEJD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  System_Xml_XmlReaderSettings_o *__this;
  System_String_o *CJNHFNHJHPE;
  System_String_o *value;
  System_Xml_XmlDocument_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)(ulong)ADDHOAPEIJI;
                    /* try { // try from 0340d5a4 to 0350d5b3 has its CatchHandler @ 0340d730 */
  method_00 = (MethodInfo *)(ulong)(uint)CFHHLCMKGCH;
                    /* try { // try from 0340d5bc to 0350d5c3 has its CatchHandler @ 0340d6ec */
                    /* try { // try from 0340d5cc to 0350d5d3 has its CatchHandler @ 0340d704 */
  if ((DAT_0456779c & 1) == 0) {
                    /* try { // try from 0340d5d8 to 0350d5df has its CatchHandler @ 0340d6f4 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0340d5e8 to 0350d5ef has its CatchHandler @ 0340d708 */
    FUN_01bab630(&IKMOIKFPPBF_TypeInfo);
                    /* try { // try from 0340d5f0 to 0350d603 has its CatchHandler @ 0340d6fc */
    FUN_01bab630(&System_Xml_XmlReaderSettings_TypeInfo);
    FUN_01bab630(&StringLiteral_5887/*"Error open xml: "*/);
                    /* try { // try from 0340d604 to 0350d60f has its CatchHandler @ 0340d6f0 */
    DAT_0456779c = 1;
  }
                    /* try { // try from 0340d610 to 0350d62f has its CatchHandler @ 0340d740 */
  pSVar3 = GIAMPEGMNHE__JIGCIBMKDAL(EIJDDKJONFO,ILENGCADNIH,method_00);
  iVar2 = GIAMPEGMNHE__ABNFMFGPMMN(pSVar3,CFHHLCMKGCH,method_00);
  __this = (System_Xml_XmlReaderSettings_o *)
           thunk_FUN_01bda818(System_Xml_XmlReaderSettings_TypeInfo);
                    /* try { // try from 0340d640 to 0350d64b has its CatchHandler @ 0340d700 */
  System_Xml_XmlReaderSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this == (System_Xml_XmlReaderSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0340d64c to 0350d6d7 has its CatchHandler @ 0340d318 */
  System_Xml_XmlReaderSettings__set_IgnoreComments(__this,ADDHOAPEIJI,(MethodInfo *)0x0);
  if (iVar2 == 1) {
    CJNHFNHJHPE = CMEBCBKGFFL__LMCHNOGAEHE(pSVar3,(MethodInfo *)0x0);
  }
  else if (iVar2 == 2) {
    CJNHFNHJHPE = CMEBCBKGFFL__IKCJLINAPOA(pSVar3,(MethodInfo *)0x0);
  }
  else {
    CJNHFNHJHPE = (System_String_o *)0x0;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (!bVar1) {
    if (iVar2 == 1) {
      if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = IKMOIKFPPBF__JCDHIOHIFEL(pSVar3,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 0340d6d8 to 0350d6db has its CatchHandler @ 0340d720 */
        if ((IKMOIKFPPBF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0340d6dc to 0350d6df has its CatchHandler @ 0340d71c */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0340d6e0 to 0350d6e3 has its CatchHandler @ 0340d6f8 */
                    /* try { // try from 0340d6e4 to 0350d763 has its CatchHandler @ 0340d318 */
                    /* catch() { ... } // from try @ 0340d538 with catch @ 0340d6e8 */
        value = IKMOIKFPPBF__PCPAFLBHBMF(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d5bc with catch @ 0340d6ec */
                    /* catch() { ... } // from try @ 0340d604 with catch @ 0340d6f0 */
                    /* catch() { ... } // from try @ 0340d5d8 with catch @ 0340d6f4 */
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d6e0 with catch @ 0340d6f8 */
                    /* catch() { ... } // from try @ 0340d5f0 with catch @ 0340d6fc */
        if (!bVar1) {
          CJNHFNHJHPE = value;
        }
      }
    }
                    /* catch() { ... } // from try @ 0340d640 with catch @ 0340d700 */
                    /* catch() { ... } // from try @ 0340d5cc with catch @ 0340d704 */
                    /* catch() { ... } // from try @ 0340d5e8 with catch @ 0340d708 */
                    /* catch() { ... } // from try @ 0340d4dc with catch @ 0340d70c */
    pSVar4 = GIAMPEGMNHE__IBJOMPOLPCC(CJNHFNHJHPE,__this,JOIPGMAIEJD,method_01);
                    /* catch() { ... } // from try @ 0340d580 with catch @ 0340d710 */
    if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
      return pSVar4;
    }
  }
                    /* catch() { ... } // from try @ 0340d568 with catch @ 0340d714 */
                    /* catch() { ... } // from try @ 0340d4e8 with catch @ 0340d718 */
                    /* catch() { ... } // from try @ 0340d6dc with catch @ 0340d71c */
                    /* catch() { ... } // from try @ 0340d6d8 with catch @ 0340d720 */
                    /* catch() { ... } // from try @ 0340d508 with catch @ 0340d724 */
                    /* catch() { ... } // from try @ 0340d500 with catch @ 0340d728 */
  pSVar3 = System_String__Concat(StringLiteral_5887/*"Error open xml: "*/,pSVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0340d4c4 with catch @ 0340d72c */
                    /* catch() { ... } // from try @ 0340d5a4 with catch @ 0340d730 */
                    /* catch() { ... } // from try @ 0340d59c with catch @ 0340d734 */
                    /* catch() { ... } // from try @ 0340d58c with catch @ 0340d738 */
                    /* catch() { ... } // from try @ 0340d494 with catch @ 0340d73c */
                    /* catch() { ... } // from try @ 0340d610 with catch @ 0340d740 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0340d53c with catch @ 0340d744 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 0340d4b0 with catch @ 0340d748 */
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0340d764 to 0350d767 has its CatchHandler @ 0340d790 */
                    /* try { // try from 0340d768 to 0350d79f has its CatchHandler @ 0340d318 */
  return (System_Xml_XmlDocument_o *)0x0;
}


// ===== private static MPNLOEAPLNP ABNFMFGPMMN(string CCKJFMILHLC, MPNLOEAPLNP FPIDIMDDGOI)  [RVA 0x330DF0C]
// GIAMPEGMNHE$$ABNFMFGPMMN @ RVA 0x330DF0C

int32_t GIAMPEGMNHE__ABNFMFGPMMN
                  (System_String_o *CCKJFMILHLC,int32_t FPIDIMDDGOI,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456779d & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    DAT_0456779d = 1;
  }
  if (FPIDIMDDGOI == 0) {
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (CCKJFMILHLC == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__StartsWith
                      (CCKJFMILHLC,SF2Paths_TypeInfo->static_fields->HDAMIJBIMGF,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = System_String__StartsWith
                        (CCKJFMILHLC,SF2Paths_TypeInfo->static_fields->NENINNJGODF,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return 1;
      }
    }
    FPIDIMDDGOI = 2;
  }
  return FPIDIMDDGOI;
}


// ===== public static XmlDocument KGEKFIHAHLJ(string JLNPKGGFFDD, bool ADDHOAPEIJI = True, bool JOIPGMAIEJD = False)  [RVA 0x330DFC4]
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
    FUN_01bab630(&StringLiteral_5886/*"Error open xml from string:\n"*/);
    DAT_0456779e = 1;
  }
  __this = (System_Xml_XmlReaderSettings_o *)
           thunk_FUN_01bda818(System_Xml_XmlReaderSettings_TypeInfo);
  System_Xml_XmlReaderSettings___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Xml_XmlReaderSettings_o *)0x0) {
    System_Xml_XmlReaderSettings__set_IgnoreComments(__this,ADDHOAPEIJI,(MethodInfo *)0x0);
    pSVar1 = GIAMPEGMNHE__IBJOMPOLPCC(JLNPKGGFFDD,__this,JOIPGMAIEJD,method);
    if (pSVar1 == (System_Xml_XmlDocument_o *)0x0) {
      message = System_String__Concat(StringLiteral_5886/*"Error open xml from string:\n"*/,JLNPKGGFFDD,(MethodInfo *)0x0);
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


// ===== public static void LFKDDMKHGEA(XmlDocument EKEMDOEAFHP, string CCKJFMILHLC)  [RVA 0x330CB80]
// GIAMPEGMNHE$$LFKDDMKHGEA @ RVA 0x330CB80

void GIAMPEGMNHE__LFKDDMKHGEA
               (System_Xml_XmlDocument_o *EKEMDOEAFHP,System_String_o *CCKJFMILHLC,
               MethodInfo *method)

{
  NEHNBJKKABI__AIJFIAOKNPK(EKEMDOEAFHP,CCKJFMILHLC,(MethodInfo *)0x0);
  return;
}


// ===== public static string LFCNNAGLPHO(XmlAttribute LBJNDMNEJJB, string HBFDLMOKDGA)  [RVA 0x330E150]
// GIAMPEGMNHE$$LFCNNAGLPHO @ RVA 0x330E150

System_String_o *
GIAMPEGMNHE__LFCNNAGLPHO
          (System_Xml_XmlAttribute_o *LBJNDMNEJJB,System_String_o *HBFDLMOKDGA,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (LBJNDMNEJJB != (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0340e15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pSVar1 = (System_String_o *)
             (*(LBJNDMNEJJB->klass->vtable)._9_get_Value.methodPtr)
                       (LBJNDMNEJJB,(LBJNDMNEJJB->klass->vtable)._9_get_Value.method);
    return pSVar1;
  }
  return HBFDLMOKDGA;
}


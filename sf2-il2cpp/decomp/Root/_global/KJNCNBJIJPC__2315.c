// TypeDefIndex 2315
// Namespace: 
// public sealed class KJNCNBJIJPC : IMessage<KJNCNBJIJPC>, IMessage, IEquatable<KJNCNBJIJPC>, IDeepCloneable<KJNCNBJIJPC>
// Fields:
//   private static readonly MessageParser<KJNCNBJIJPC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KLICLDMLJDJ = 1;
//   private int OLGJBKMCGIC; // 0x18
//   public const int INGGNGPMCCK = 2;
//   private static readonly FieldCodec<PIADCKMDDAK> EEIBKMBPHLJ; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> DDEAFMPDPBJ; // 0x20
//   public const int LOEJKJCHILM = 3;
//   private int OJBIFDEEBNO; // 0x28
//   public const int JPLOFKPPFIB = 4;
//   private static readonly FieldCodec<IHMIMECHIAN> HIEFPDFMLFP; // 0x10
//   private readonly RepeatedField<IHMIMECHIAN> EACBGCPPLBO; // 0x30
//   public const int LDLAJIJPJAI = 5;
//   private static readonly FieldCodec<BJEFHIBMHEJ> MDBMPJNDNLI; // 0x18
//   private readonly RepeatedField<BJEFHIBMHEJ> KELNJLBBHEC; // 0x38
//   public const int JBBIBFPHCKA = 6;
//   private bool HFNMLHEEAJM; // 0x40
//   public const int CEBGHOGBLMI = 7;
//   private int GAGJCDGEGBL; // 0x44

// ===== public void .ctor(KJNCNBJIJPC IBKIPBJJCPG)  [RVA 0x331A7E4]
// KJNCNBJIJPC$$.ctor @ RVA 0x331A7E4

void KJNCNBJIJPC___ctor(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *pGVar2;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar5;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567807 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Clone__);
    DAT_04567807 = 1;
    method_00 = extraout_x1;
  }
  KJNCNBJIJPC___ctor(__this,method_00);
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    (__this->fields).OLGJBKMCGIC = (IBKIPBJJCPG->fields).OLGJBKMCGIC;
    pGVar1 = (IBKIPBJJCPG->fields).DDEAFMPDPBJ;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
      ppGVar5 = &(__this->fields).DDEAFMPDPBJ;
      *ppGVar5 = pGVar1;
      thunk_FUN_01c20e04(ppGVar5,pGVar1);
      (__this->fields).OJBIFDEEBNO = (IBKIPBJJCPG->fields).OJBIFDEEBNO;
      pGVar2 = (IBKIPBJJCPG->fields).EACBGCPPLBO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Clone__);
        (__this->fields).EACBGCPPLBO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = (IBKIPBJJCPG->fields).KELNJLBBHEC;
        if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          pGVar3 = (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)
                   Google_Protobuf_Collections_RepeatedField<object>__Clone
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar3,
                              Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Clone__)
          ;
          (__this->fields).KELNJLBBHEC = pGVar3;
          thunk_FUN_01c20e04();
          (__this->fields).HFNMLHEEAJM = (IBKIPBJJCPG->fields).HFNMLHEEAJM;
          (__this->fields).GAGJCDGEGBL = (IBKIPBJJCPG->fields).GAGJCDGEGBL;
          pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                             ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
          (__this->fields).CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(&__this->fields,pGVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<KJNCNBJIJPC> PGCAHPDCJBC()  [RVA 0x331AA2C]
// KJNCNBJIJPC$$PGCAHPDCJBC @ RVA 0x331AA2C

Google_Protobuf_MessageParser_KJNCNBJIJPC__o * KJNCNBJIJPC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04567808 & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_04567808 = 1;
  }
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KJNCNBJIJPC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public RepeatedField<BJEFHIBMHEJ> GGHIGMNCOMC()  [RVA 0x331AA84]
// KJNCNBJIJPC$$GGHIGMNCOMC @ RVA 0x331AA84

Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *
KJNCNBJIJPC__GGHIGMNCOMC(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).KELNJLBBHEC;
}


// ===== public int ELOCCGMGCJB()  [RVA 0x331AA8C]
// KJNCNBJIJPC$$ELOCCGMGCJB @ RVA 0x331AA8C

int32_t KJNCNBJIJPC__ELOCCGMGCJB(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).OJBIFDEEBNO;
}


// ===== public int CENJLOIDBIJ()  [RVA 0x331AA94]
// KJNCNBJIJPC$$CENJLOIDBIJ @ RVA 0x331AA94

int32_t KJNCNBJIJPC__CENJLOIDBIJ(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).OLGJBKMCGIC;
}


// ===== public int HGDIKOFOEEA()  [RVA 0x331AA9C]
// KJNCNBJIJPC$$HGDIKOFOEEA @ RVA 0x331AA9C

int32_t KJNCNBJIJPC__HGDIKOFOEEA(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).GAGJCDGEGBL;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x331AAA4]
// KJNCNBJIJPC$$FFHIHGCDGAK @ RVA 0x331AAA4

Google_Protobuf_Reflection_MessageDescriptor_o * KJNCNBJIJPC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567809 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04567809 = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0341ab8c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0341ab8c:
                    /* WARNING: Could not recover jumptable at 0x0341aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x28,pVVar2->method);
  return pGVar3;
}


// ===== public RepeatedField<IHMIMECHIAN> FPKPFEFPGPE()  [RVA 0x331ABA8]
// KJNCNBJIJPC$$FPKPFEFPGPE @ RVA 0x331ABA8

Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *
KJNCNBJIJPC__FPKPFEFPGPE(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).EACBGCPPLBO;
}


// ===== public bool DHFFNGCNEMP()  [RVA 0x331ABB0]
// KJNCNBJIJPC$$DHFFNGCNEMP @ RVA 0x331ABB0

bool KJNCNBJIJPC__DHFFNGCNEMP(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).HFNMLHEEAJM;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x331ABB8]
// KJNCNBJIJPC$$Equals @ RVA 0x331ABB8

bool KJNCNBJIJPC__Equals(KJNCNBJIJPC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456780a & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KJNCNBJIJPC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KJNCNBJIJPC__Equals(__this,(KJNCNBJIJPC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public RepeatedField<PIADCKMDDAK> LMJPMJFJLNE()  [RVA 0x331AD54]
// KJNCNBJIJPC$$LMJPMJFJLNE @ RVA 0x331AD54

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
KJNCNBJIJPC__LMJPMJFJLNE(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  return (__this->fields).DDEAFMPDPBJ;
}


// ===== public override int GetHashCode()  [RVA 0x331AD5C]
// KJNCNBJIJPC$$GetHashCode @ RVA 0x331AD5C

int32_t KJNCNBJIJPC__GetHashCode(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *pGVar6;
  Google_Protobuf_UnknownFieldSet_o *pGVar7;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *pGVar8;
  undefined1 local_18 [4];
  int local_14;
  
  if ((DAT_0456780b & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_0456780b = 1;
  }
  local_14 = 0;
  local_18[0] = 0;
  iVar1 = (__this->fields).OLGJBKMCGIC;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pGVar5 = (__this->fields).DDEAFMPDPBJ;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    iVar1 = (__this->fields).OJBIFDEEBNO;
    uVar3 = uVar3 ^ uVar2;
    if (iVar1 != 0) {
      local_14 = iVar1;
      uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar6 = (__this->fields).EACBGCPPLBO;
    if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
                    /* try { // try from 0341adf4 to 0351adfb has its CatchHandler @ 0341aea0 */
      uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
      pGVar8 = (__this->fields).KELNJLBBHEC;
      if (pGVar8 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
                    /* try { // try from 0341ae04 to 0351ae0b has its CatchHandler @ 0341ae9c */
                    /* try { // try from 0341ae14 to 0351ae1b has its CatchHandler @ 0341ae98 */
        uVar4 = (*(pGVar8->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar8,(pGVar8->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 0341ae1c to 0351ae8b has its CatchHandler @ 0341ad20 */
        uVar4 = uVar2 ^ uVar3 ^ uVar4;
        if ((__this->fields).HFNMLHEEAJM != false) {
          local_18[0] = 1;
          if ((bool_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          uVar2 = System_Boolean__GetHashCode(SUB81(local_18,0),(MethodInfo *)0x0);
          uVar4 = uVar2 ^ uVar4;
        }
        iVar1 = (__this->fields).GAGJCDGEGBL;
        if (iVar1 != 0) {
          local_14 = iVar1;
          uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
          uVar4 = uVar2 ^ uVar4;
        }
        pGVar7 = (__this->fields).CKFPENBPNML;
        if (pGVar7 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          uVar2 = (*(pGVar7->klass->vtable)._2_GetHashCode.methodPtr)
                            (pGVar7,(pGVar7->klass->vtable)._2_GetHashCode.method);
          uVar4 = uVar2 ^ uVar4;
        }
                    /* try { // try from 0341ae8c to 0351ae8f has its CatchHandler @ 0341ae94 */
                    /* try { // try from 0341ae90 to 0351aeb7 has its CatchHandler @ 0341ad20 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341ae8c with catch @ 0341ae94
                        */
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341ae14 with catch @ 0341ae98
                        */
  FUN_01bab8c8();
}


// ===== public void DGBCOEHKCBK(bool CJNHFNHJHPE)  [RVA 0x331AE9C]
// KJNCNBJIJPC$$DGBCOEHKCBK @ RVA 0x331AE9C

void KJNCNBJIJPC__DGBCOEHKCBK(KJNCNBJIJPC_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341ae04 with catch @ 0341ae9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341adf4 with catch @ 0341aea0
                        */
  (__this->fields).HFNMLHEEAJM = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x331AEA8]
// KJNCNBJIJPC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x331AEA8

Google_Protobuf_Reflection_MessageDescriptor_o *
KJNCNBJIJPC__pb__Google_Protobuf_IMessage_get_Descriptor(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0341aeb8 to 0351aebb has its CatchHandler @ 0341aee4 */
                    /* try { // try from 0341aebc to 0351aef3 has its CatchHandler @ 0341ad20 */
  if ((DAT_0456780c & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780c = 1;
    method = extraout_x1;
  }
  method_00 = KJNCNBJIJPC_TypeInfo;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 0341aeb8 with catch @ 0341aee4 */
    method_00 = (KJNCNBJIJPC_c *)thunk_FUN_01ba7564(KJNCNBJIJPC_TypeInfo,method);
  }
  pGVar1 = KJNCNBJIJPC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public KJNCNBJIJPC Clone()  [RVA 0x331AEF4]
// KJNCNBJIJPC$$Clone @ RVA 0x331AEF4

KJNCNBJIJPC_o * KJNCNBJIJPC__Clone(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0341aef4 to 0351aefb has its CatchHandler @ 0341af10 */
                    /* try { // try from 0341aefc to 0351af07 has its CatchHandler @ 0341ad20 */
                    /* try { // try from 0341af08 to 0351af0f has its CatchHandler @ 0341af10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341aef4 with catch @ 0341af10
                       catch(type#2 @ 00000000) { ... } // from try @ 0341af08 with catch @ 0341af10
                        */
  if ((DAT_0456780d & 1) == 0) {
                    /* try { // try from 0341af14 to 0351b02b has its CatchHandler @ 0341af14
                       catch() { ... } // from try @ 0341af14 with catch @ 0341af14
                       catch() { ... } // from try @ 0341b0bc with catch @ 0341af14
                       catch() { ... } // from try @ 0341b190 with catch @ 0341af14
                       catch() { ... } // from try @ 0341b23c with catch @ 0341af14 */
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    DAT_0456780d = 1;
    method = extraout_x1;
  }
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo,method);
  KJNCNBJIJPC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== private static void .cctor()  [RVA 0x331AF4C]
// KJNCNBJIJPC$$.cctor @ RVA 0x331AF4C

void KJNCNBJIJPC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KJNCNBJIJPC__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_IHMIMECHIAN__o *pGVar2;
  Google_Protobuf_FieldCodec_BJEFHIBMHEJ__o *pGVar3;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar4;
  Google_Protobuf_FieldCodec_IHMIMECHIAN__o **ppGVar5;
  Google_Protobuf_FieldCodec_BJEFHIBMHEJ__o **ppGVar6;
  
  if ((DAT_0456780e & 1) == 0) {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BJEFHIBMHEJ>__);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<IHMIMECHIAN>__);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KJNCNBJIJPC>_TypeInfo);
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KJNCNBJIJPC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KJNCNBJIJPC>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KJNCNBJIJPC_<>c_KPFEPLDDLCD__);
    FUN_01bab630(&KJNCNBJIJPC_<>c_TypeInfo);
    DAT_0456780e = 1;
  }
                    /* try { // try from 0341b02c to 0351b053 has its CatchHandler @ 0341b1a4 */
  if ((KJNCNBJIJPC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KJNCNBJIJPC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KJNCNBJIJPC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KJNCNBJIJPC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KJNCNBJIJPC>__ctor__);
                    /* try { // try from 0341b088 to 0351b0b3 has its CatchHandler @ 0341b1a0 */
  KJNCNBJIJPC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KJNCNBJIJPC_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0341b0b4 to 0351b0bb has its CatchHandler @ 0341b19c */
                    /* try { // try from 0341b0bc to 0351b18b has its CatchHandler @ 0341af14 */
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar4 = &KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ;
  *ppGVar4 = pGVar1;
  thunk_FUN_01c20e04(ppGVar4,pGVar1);
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045678d7 == '\0') {
    FUN_01bab630(&IHMIMECHIAN_TypeInfo);
    DAT_045678d7 = '\x01';
  }
  if ((IHMIMECHIAN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = (Google_Protobuf_FieldCodec_IHMIMECHIAN__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x22,(Google_Protobuf_MessageParser_T__o *)
                           IHMIMECHIAN_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<IHMIMECHIAN>__);
                    /* try { // try from 0341b18c to 0351b18f has its CatchHandler @ 0341b198 */
                    /* try { // try from 0341b190 to 0351b1bb has its CatchHandler @ 0341af14 */
  ppGVar5 = &KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341b18c with catch @ 0341b198
                        */
  *ppGVar5 = pGVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341b0b4 with catch @ 0341b19c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341b088 with catch @ 0341b1a0
                        */
  thunk_FUN_01c20e04(ppGVar5,pGVar2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0341b02c with catch @ 0341b1a4
                        */
  if ((BJEFHIBMHEJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0341b1bc to 0351b1bf has its CatchHandler @ 0341b1d4 */
  if (DAT_045678d8 == '\0') {
    FUN_01bab630(&BJEFHIBMHEJ_TypeInfo);
    DAT_045678d8 = '\x01';
  }
                    /* catch() { ... } // from try @ 0341b1bc with catch @ 0341b1d4 */
  if ((BJEFHIBMHEJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = (Google_Protobuf_FieldCodec_BJEFHIBMHEJ__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x2a,(Google_Protobuf_MessageParser_T__o *)
                           BJEFHIBMHEJ_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<BJEFHIBMHEJ>__);
                    /* try { // try from 0341b214 to 0351b23b has its CatchHandler @ 0341b250 */
  ppGVar6 = &KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI;
  *ppGVar6 = pGVar3;
  thunk_FUN_01c20e04(ppGVar6,pGVar3);
  return;
}


// ===== public int CalculateSize()  [RVA 0x331B22C]
// KJNCNBJIJPC$$CalculateSize @ RVA 0x331B22C

int32_t KJNCNBJIJPC__CalculateSize(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_03;
  int iVar4;
  
                    /* try { // try from 0341b23c to 0351b247 has its CatchHandler @ 0341af14 */
  if ((DAT_0456780f & 1) == 0) {
                    /* try { // try from 0341b248 to 0351b24f has its CatchHandler @ 0341b250 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0341b214 with catch @ 0341b250
                       catch(type#2 @ 00000000) { ... } // from try @ 0341b248 with catch @ 0341b250
                        */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_CalculateSize__);
    DAT_0456780f = 1;
    method = extraout_x1;
  }
  iVar4 = (__this->fields).OLGJBKMCGIC;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar4,(MethodInfo *)0x0);
    iVar4 = iVar2 + 1;
  }
  __this_02 = (__this->fields).DDEAFMPDPBJ;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
                      );
    iVar1 = (__this->fields).OJBIFDEEBNO;
    iVar4 = iVar2 + iVar4;
    if (iVar1 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
      iVar4 = iVar4 + iVar2 + 1;
    }
    __this_03 = (__this->fields).EACBGCPPLBO;
    if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_03 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                         (Google_Protobuf_FieldCodec_T__o *)
                         KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP,
                         Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_CalculateSize__
                        );
      __this_01 = (__this->fields).KELNJLBBHEC;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
        iVar3 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                           (Google_Protobuf_FieldCodec_T__o *)
                           KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI,
                           Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_CalculateSize__
                          );
        iVar1 = (__this->fields).GAGJCDGEGBL;
        iVar4 = iVar2 + iVar4 + iVar3;
        if ((__this->fields).HFNMLHEEAJM != false) {
          iVar4 = iVar4 + 2;
        }
        if (iVar1 != 0) {
          if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
          iVar4 = iVar4 + iVar2 + 1;
        }
        __this_00 = (__this->fields).CKFPENBPNML;
        if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
          iVar4 = iVar2 + iVar4;
        }
        return iVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x331B404]
// KJNCNBJIJPC$$MergeFrom @ RVA 0x331B404

void KJNCNBJIJPC__MergeFrom
               (KJNCNBJIJPC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KJNCNBJIJPC_Fields *pKVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_FieldCodec_IHMIMECHIAN__o *codec;
  MethodInfo_295E0C0 *method_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_00;
  
  if ((DAT_04567810 & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04567810 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pKVar1 = &__this->fields;
      do {
        if (uVar3 < 0x19) {
          if (uVar3 == 8) {
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OLGJBKMCGIC = iVar4;
          }
          else {
            if (uVar3 == 0x12) {
              __this_00 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                          (__this->fields).DDEAFMPDPBJ;
              if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (__this_00 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
                codec = (Google_Protobuf_FieldCodec_IHMIMECHIAN__o *)
                        KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ;
                method_00 = 
                Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__;
                goto LAB_0341b5c4;
              }
              goto LAB_0341b610;
            }
            if (uVar3 != 0x18) goto LAB_0341b538;
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OJBIFDEEBNO = iVar4;
          }
        }
        else if (uVar3 < 0x2b) {
          if (uVar3 == 0x22) {
            __this_00 = (__this->fields).EACBGCPPLBO;
            if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
            goto LAB_0341b610;
            codec = KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_AddEntriesFrom__;
          }
          else {
            if (uVar3 != 0x2a) {
LAB_0341b538:
              pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                 (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pKVar1->CKFPENBPNML = pGVar5;
              thunk_FUN_01c20e04(pKVar1,pGVar5);
              goto LAB_0341b5e8;
            }
            __this_00 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
                        (__this->fields).KELNJLBBHEC;
            if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
            goto LAB_0341b610;
            codec = (Google_Protobuf_FieldCodec_IHMIMECHIAN__o *)
                    KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_AddEntriesFrom__;
          }
LAB_0341b5c4:
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)codec,method_00);
        }
        else if (uVar3 == 0x30) {
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).HFNMLHEEAJM = bVar2;
        }
        else {
          if (uVar3 != 0x38) goto LAB_0341b538;
          iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).GAGJCDGEGBL = iVar4;
        }
LAB_0341b5e8:
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
    return;
  }
LAB_0341b610:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(KJNCNBJIJPC IBKIPBJJCPG)  [RVA 0x331AC1C]
// KJNCNBJIJPC$$Equals @ RVA 0x331AC1C

bool KJNCNBJIJPC__Equals(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  
  if ((DAT_04567811 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Equals__);
    DAT_04567811 = 1;
  }
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).OLGJBKMCGIC == (IBKIPBJJCPG->fields).OLGJBKMCGIC) {
      __this_00 = (__this->fields).DDEAFMPDPBJ;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
LAB_0341ad50:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
      if ((bVar1) && ((__this->fields).OJBIFDEEBNO == (IBKIPBJJCPG->fields).OJBIFDEEBNO)) {
        __this_01 = (__this->fields).EACBGCPPLBO;
        if (__this_01 == (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0)
        goto LAB_0341ad50;
        bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                          ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                           (Google_Protobuf_Collections_RepeatedField_T__o *)
                           (IBKIPBJJCPG->fields).EACBGCPPLBO,
                           Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Equals__);
        if (bVar1) {
          __this_02 = (__this->fields).KELNJLBBHEC;
          if (__this_02 == (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0)
          goto LAB_0341ad50;
          bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                             (Google_Protobuf_Collections_RepeatedField_T__o *)
                             (IBKIPBJJCPG->fields).KELNJLBBHEC,
                             Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Equals__)
          ;
          if (((bVar1) &&
              (((__this->fields).HFNMLHEEAJM != false) ==
               ((IBKIPBJJCPG->fields).HFNMLHEEAJM != false))) &&
             ((__this->fields).GAGJCDGEGBL == (IBKIPBJJCPG->fields).GAGJCDGEGBL)) {
                    /* try { // try from 0341ad20 to 0351adf3 has its CatchHandler @ 0341ad20
                       catch() { ... } // from try @ 0341ad20 with catch @ 0341ad20
                       catch() { ... } // from try @ 0341ae1c with catch @ 0341ad20
                       catch() { ... } // from try @ 0341ae90 with catch @ 0341ad20
                       catch() { ... } // from try @ 0341aebc with catch @ 0341ad20
                       catch() { ... } // from try @ 0341aefc with catch @ 0341ad20 */
            bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}


// ===== public override string ToString()  [RVA 0x331B614]
// KJNCNBJIJPC$$ToString @ RVA 0x331B614

System_String_o * KJNCNBJIJPC__ToString(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567812 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567812 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void FPIHHKGJJBB(int CJNHFNHJHPE)  [RVA 0x331B66C]
// KJNCNBJIJPC$$FPIHHKGJJBB @ RVA 0x331B66C

void KJNCNBJIJPC__FPIHHKGJJBB(KJNCNBJIJPC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OJBIFDEEBNO = CJNHFNHJHPE;
  return;
}


// ===== public void KMAFGFHCPHH(int CJNHFNHJHPE)  [RVA 0x331B674]
// KJNCNBJIJPC$$KMAFGFHCPHH @ RVA 0x331B674

void KJNCNBJIJPC__KMAFGFHCPHH(KJNCNBJIJPC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OLGJBKMCGIC = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(KJNCNBJIJPC IBKIPBJJCPG)  [RVA 0x331B67C]
// KJNCNBJIJPC$$MergeFrom @ RVA 0x331B67C

void KJNCNBJIJPC__MergeFrom(KJNCNBJIJPC_o *__this,KJNCNBJIJPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KJNCNBJIJPC_Fields *pKVar3;
  
  if ((DAT_04567813 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04567813 = 1;
  }
  if (IBKIPBJJCPG != (KJNCNBJIJPC_o *)0x0) {
    iVar1 = (IBKIPBJJCPG->fields).OLGJBKMCGIC;
    if (iVar1 != 0) {
      (__this->fields).OLGJBKMCGIC = iVar1;
    }
    __this_00 = (__this->fields).DDEAFMPDPBJ;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DDEAFMPDPBJ,
                 Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
      iVar1 = (IBKIPBJJCPG->fields).OJBIFDEEBNO;
      if (iVar1 != 0) {
        (__this->fields).OJBIFDEEBNO = iVar1;
      }
      __this_01 = (__this->fields).EACBGCPPLBO;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).EACBGCPPLBO,
                   Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_Add__);
        __this_02 = (__this->fields).KELNJLBBHEC;
        if (__this_02 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
          Google_Protobuf_Collections_RepeatedField<object>__Add
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                     (System_Collections_Generic_IEnumerable_T__o *)
                     (IBKIPBJJCPG->fields).KELNJLBBHEC,
                     Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_Add__);
          if ((IBKIPBJJCPG->fields).HFNMLHEEAJM != false) {
            (__this->fields).HFNMLHEEAJM = true;
          }
          iVar1 = (IBKIPBJJCPG->fields).GAGJCDGEGBL;
          if (iVar1 != 0) {
            (__this->fields).GAGJCDGEGBL = iVar1;
          }
          pKVar3 = &__this->fields;
          pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                             (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,
                              (MethodInfo *)0x0);
          pKVar3->CKFPENBPNML = pGVar2;
          thunk_FUN_01c20e04(pKVar3,pGVar2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void KIAGFPAFOAG(int CJNHFNHJHPE)  [RVA 0x331B788]
// KJNCNBJIJPC$$KIAGFPAFOAG @ RVA 0x331B788

void KJNCNBJIJPC__KIAGFPAFOAG(KJNCNBJIJPC_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GAGJCDGEGBL = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x331A8FC]
// KJNCNBJIJPC$$.ctor @ RVA 0x331A8FC

void KJNCNBJIJPC___ctor(KJNCNBJIJPC_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o **ppGVar2;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o **ppGVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567814 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_TypeInfo);
    DAT_04567814 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).DDEAFMPDPBJ;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>__ctor__);
  ppGVar2 = &(__this->fields).EACBGCPPLBO;
  *ppGVar2 = __this_01;
  thunk_FUN_01c20e04(ppGVar2,__this_01);
  __this_02 = (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
             Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>__ctor__);
  ppGVar3 = &(__this->fields).KELNJLBBHEC;
  *ppGVar3 = __this_02;
  thunk_FUN_01c20e04(ppGVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x331B790]
// KJNCNBJIJPC$$WriteTo @ RVA 0x331B790

void KJNCNBJIJPC__WriteTo
               (KJNCNBJIJPC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *__this_03;
  
  if ((DAT_04567815 & 1) == 0) {
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_WriteTo__);
    DAT_04567815 = 1;
  }
  if ((__this->fields).OLGJBKMCGIC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OLGJBKMCGIC,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields).DDEAFMPDPBJ;
  if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KJNCNBJIJPC_TypeInfo->static_fields->EEIBKMBPHLJ,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    if ((__this->fields).OJBIFDEEBNO != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteInt32
                (JBGJLELBMJF,(__this->fields).OJBIFDEEBNO,(MethodInfo *)0x0);
    }
    __this_03 = (__this->fields).EACBGCPPLBO;
    if ((KJNCNBJIJPC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_03 != (Google_Protobuf_Collections_RepeatedField_IHMIMECHIAN__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)KJNCNBJIJPC_TypeInfo->static_fields->HIEFPDFMLFP
                 ,Method_Google_Protobuf_Collections_RepeatedField<IHMIMECHIAN>_WriteTo__);
      __this_00 = (__this->fields).KELNJLBBHEC;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BJEFHIBMHEJ__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                   (Google_Protobuf_FieldCodec_T__o *)
                   KJNCNBJIJPC_TypeInfo->static_fields->MDBMPJNDNLI,
                   Method_Google_Protobuf_Collections_RepeatedField<BJEFHIBMHEJ>_WriteTo__);
        if ((__this->fields).HFNMLHEEAJM != false) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteBool
                    (JBGJLELBMJF,(__this->fields).HFNMLHEEAJM,(MethodInfo *)0x0);
        }
        if ((__this->fields).GAGJCDGEGBL != 0) {
          if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0341b970;
          Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x38,(MethodInfo *)0x0);
          Google_Protobuf_CodedOutputStream__WriteInt32
                    (JBGJLELBMJF,(__this->fields).GAGJCDGEGBL,(MethodInfo *)0x0);
        }
        __this_01 = (__this->fields).CKFPENBPNML;
        if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
          Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
LAB_0341b970:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


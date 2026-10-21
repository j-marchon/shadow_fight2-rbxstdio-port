// TypeDefIndex 881
// Namespace: 
// public sealed class NODLJPNGNBG : IMessage<NODLJPNGNBG>, IMessage, IEquatable<NODLJPNGNBG>, IDeepCloneable<NODLJPNGNBG>
// Fields:
//   private static readonly MessageParser<NODLJPNGNBG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DAIPHMMHPLH = 1;
//   private long ANAJGHJEEOC; // 0x18
//   public const int IBIFENOEOCB = 2;
//   private int LINGIJDCLLC; // 0x20
//   public const int LAJOAFLDDAA = 3;
//   private bool DMFDEJEDMPO; // 0x24
//   public const int NIDIOMOKADF = 4;
//   private PMCKBFPNGOD PFJPLCAIGJH; // 0x28
//   public const int LPHOIDNJOCI = 5;
//   private ICBMOMGINFH PMMFPJJOPKE; // 0x30

// ===== public bool OGBKBPNPGEA()  [RVA 0x3090AE8]
// NODLJPNGNBG$$OGBKBPNPGEA @ RVA 0x3090AE8

bool NODLJPNGNBG__OGBKBPNPGEA(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  return (__this->fields).DMFDEJEDMPO;
}


// ===== public void HEPJKPBPEAD(bool CJNHFNHJHPE)  [RVA 0x3090AF0]
// NODLJPNGNBG$$HEPJKPBPEAD @ RVA 0x3090AF0

void NODLJPNGNBG__HEPJKPBPEAD(NODLJPNGNBG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).DMFDEJEDMPO = CJNHFNHJHPE;
  return;
}


// ===== public ICBMOMGINFH FGMGOKNGJFJ()  [RVA 0x3090AFC]
// NODLJPNGNBG$$FGMGOKNGJFJ @ RVA 0x3090AFC

ICBMOMGINFH_o * NODLJPNGNBG__FGMGOKNGJFJ(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  return (__this->fields).PMMFPJJOPKE;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3090B04]
// NODLJPNGNBG$$WriteTo @ RVA 0x3090B04

void NODLJPNGNBG__WriteTo
               (NODLJPNGNBG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).ANAJGHJEEOC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03190c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  if ((__this->fields).LINGIJDCLLC != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03190c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).LINGIJDCLLC,(MethodInfo *)0x0);
  }
  if ((__this->fields).DMFDEJEDMPO != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03190c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).DMFDEJEDMPO,(MethodInfo *)0x0);
  }
  if ((__this->fields).PFJPLCAIGJH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03190c18;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).PFJPLCAIGJH,(MethodInfo *)0x0);
  }
  if ((__this->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03190c18:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x2a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PMMFPJJOPKE,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void INOKKGKNDAH(ICBMOMGINFH CJNHFNHJHPE)  [RVA 0x3090C1C]
// NODLJPNGNBG$$INOKKGKNDAH @ RVA 0x3090C1C

void NODLJPNGNBG__INOKKGKNDAH(NODLJPNGNBG_o *__this,ICBMOMGINFH_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PMMFPJJOPKE = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3090C24]
// NODLJPNGNBG$$FFHIHGCDGAK @ RVA 0x3090C24

Google_Protobuf_Reflection_MessageDescriptor_o * NODLJPNGNBG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456609c & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456609c = 1;
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
        goto LAB_03190d0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03190d0c:
                    /* WARNING: Could not recover jumptable at 0x03190d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x21,pVVar2->method);
  return pGVar3;
}


// ===== public void EHMLCEKLCDD(long CJNHFNHJHPE)  [RVA 0x3090D28]
// NODLJPNGNBG$$EHMLCEKLCDD @ RVA 0x3090D28

void NODLJPNGNBG__EHMLCEKLCDD(NODLJPNGNBG_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).ANAJGHJEEOC = CJNHFNHJHPE;
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3090D30]
// NODLJPNGNBG$$Equals @ RVA 0x3090D30

bool NODLJPNGNBG__Equals(NODLJPNGNBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456609d & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_0456609d = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NODLJPNGNBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NODLJPNGNBG__Equals(__this,(NODLJPNGNBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void HNKOFBBHFPM(PMCKBFPNGOD CJNHFNHJHPE)  [RVA 0x3090E44]
// NODLJPNGNBG$$HNKOFBBHFPM @ RVA 0x3090E44

void NODLJPNGNBG__HNKOFBBHFPM(NODLJPNGNBG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PFJPLCAIGJH = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(NODLJPNGNBG IBKIPBJJCPG)  [RVA 0x3090E4C]
// NODLJPNGNBG$$.ctor @ RVA 0x3090E4C

void NODLJPNGNBG___ctor(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  ICBMOMGINFH_o *pIVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    (__this->fields).LINGIJDCLLC = (IBKIPBJJCPG->fields).LINGIJDCLLC;
    (__this->fields).DMFDEJEDMPO = (IBKIPBJJCPG->fields).DMFDEJEDMPO;
    (__this->fields).PFJPLCAIGJH = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    pIVar1 = (IBKIPBJJCPG->fields).PMMFPJJOPKE;
    if (pIVar1 == (ICBMOMGINFH_o *)0x0) {
      pIVar1 = (ICBMOMGINFH_o *)0x0;
    }
    else {
      pIVar1 = ICBMOMGINFH__Clone(pIVar1,(MethodInfo *)0x0);
    }
    (__this->fields).PMMFPJJOPKE = pIVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DAGHPBCAEJA(int CJNHFNHJHPE)  [RVA 0x3090EE0]
// NODLJPNGNBG$$DAGHPBCAEJA @ RVA 0x3090EE0

void NODLJPNGNBG__DAGHPBCAEJA(NODLJPNGNBG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LINGIJDCLLC = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3090EE8]
// NODLJPNGNBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3090EE8

Google_Protobuf_Reflection_MessageDescriptor_o *
NODLJPNGNBG__pb__Google_Protobuf_IMessage_get_Descriptor(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  NODLJPNGNBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456609e & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_0456609e = 1;
    method = extraout_x1;
  }
  method_00 = NODLJPNGNBG_TypeInfo;
  if ((NODLJPNGNBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NODLJPNGNBG_c *)thunk_FUN_01ba7564(NODLJPNGNBG_TypeInfo,method);
  }
  pGVar1 = NODLJPNGNBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public long LFELHKJPDHA()  [RVA 0x3090F34]
// NODLJPNGNBG$$LFELHKJPDHA @ RVA 0x3090F34

int64_t NODLJPNGNBG__LFELHKJPDHA(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  return (__this->fields).ANAJGHJEEOC;
}


// ===== public int IJDBKFAPNEC()  [RVA 0x3090F3C]
// NODLJPNGNBG$$IJDBKFAPNEC @ RVA 0x3090F3C

int32_t NODLJPNGNBG__IJDBKFAPNEC(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  return (__this->fields).LINGIJDCLLC;
}


// ===== public void .ctor()  [RVA 0x3090ED8]
// NODLJPNGNBG$$.ctor @ RVA 0x3090ED8

void NODLJPNGNBG___ctor(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool Equals(NODLJPNGNBG IBKIPBJJCPG)  [RVA 0x3090D94]
// NODLJPNGNBG$$Equals @ RVA 0x3090D94

bool NODLJPNGNBG__Equals(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         ((__this->fields).LINGIJDCLLC == (IBKIPBJJCPG->fields).LINGIJDCLLC)) &&
        (((__this->fields).DMFDEJEDMPO != false) == ((IBKIPBJJCPG->fields).DMFDEJEDMPO != false)))
       && (((__this->fields).PFJPLCAIGJH == (IBKIPBJJCPG->fields).PFJPLCAIGJH &&
           (bVar1 = System_Object__Equals
                              ((Il2CppObject *)(__this->fields).PMMFPJJOPKE,
                               (Il2CppObject *)(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0),
           bVar1)))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public override string ToString()  [RVA 0x3090F44]
// NODLJPNGNBG$$ToString @ RVA 0x3090F44

System_String_o * NODLJPNGNBG__ToString(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456609f & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456609f = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3090F9C]
// NODLJPNGNBG$$MergeFrom @ RVA 0x3090F9C

void NODLJPNGNBG__MergeFrom
               (NODLJPNGNBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  ICBMOMGINFH_o **ppIVar1;
  NODLJPNGNBG_Fields *pNVar2;
  bool bVar3;
  uint uVar4;
  int32_t iVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int64_t iVar7;
  ICBMOMGINFH_o *pIVar8;
  
  if ((DAT_045660a0 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045660a0 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar4 != 0) {
    ppIVar1 = &(__this->fields).PMMFPJJOPKE;
    pNVar2 = &__this->fields;
    do {
      if (uVar4 < 0x11) {
        if (uVar4 == 8) {
          iVar7 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar7;
        }
        else if (uVar4 == 0x10) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LINGIJDCLLC = iVar5;
        }
        else {
LAB_0319107c:
          pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pNVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pNVar2->CKFPENBPNML = pGVar6;
          thunk_FUN_01c20e04(pNVar2,pGVar6);
        }
      }
      else if (uVar4 == 0x18) {
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).DMFDEJEDMPO = bVar3;
      }
      else if (uVar4 == 0x20) {
        iVar5 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PFJPLCAIGJH = iVar5;
      }
      else {
        if (uVar4 != 0x2a) goto LAB_0319107c;
        pIVar8 = *ppIVar1;
        if (pIVar8 == (ICBMOMGINFH_o *)0x0) {
          pIVar8 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo);
          ICBMOMGINFH___ctor(pIVar8,(MethodInfo *)0x0);
          *ppIVar1 = pIVar8;
          thunk_FUN_01c20e04(ppIVar1,pIVar8);
          pIVar8 = *ppIVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pIVar8,(MethodInfo *)0x0);
      }
      uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar4 != 0);
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x3091104]
// NODLJPNGNBG$$.cctor @ RVA 0x3091104

void NODLJPNGNBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NODLJPNGNBG__o *__this;
  
  if ((DAT_045660a1 & 1) == 0) {
    FUN_01bab630(&System_Func<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NODLJPNGNBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    FUN_01bab630(&Method_NODLJPNGNBG_<>c_DMLACMHIPML__);
    FUN_01bab630(&NODLJPNGNBG_<>c_TypeInfo);
    DAT_045660a1 = 1;
  }
  if ((NODLJPNGNBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NODLJPNGNBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NODLJPNGNBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NODLJPNGNBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NODLJPNGNBG>__ctor__);
  NODLJPNGNBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NODLJPNGNBG_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(NODLJPNGNBG IBKIPBJJCPG)  [RVA 0x309121C]
// NODLJPNGNBG$$MergeFrom @ RVA 0x309121C

void NODLJPNGNBG__MergeFrom(NODLJPNGNBG_o *__this,NODLJPNGNBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  ICBMOMGINFH_o *pIVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  long lVar4;
  NODLJPNGNBG_Fields *pNVar5;
  ICBMOMGINFH_o **ppIVar6;
  
  if ((DAT_045660a2 & 1) == 0) {
    FUN_01bab630(&ICBMOMGINFH_TypeInfo);
    DAT_045660a2 = 1;
  }
  if (IBKIPBJJCPG != (NODLJPNGNBG_o *)0x0) {
    lVar4 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar4 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar4;
    }
    iVar1 = (IBKIPBJJCPG->fields).LINGIJDCLLC;
    if (iVar1 != 0) {
      (__this->fields).LINGIJDCLLC = iVar1;
    }
    if ((IBKIPBJJCPG->fields).DMFDEJEDMPO != false) {
      (__this->fields).DMFDEJEDMPO = true;
    }
    iVar1 = (IBKIPBJJCPG->fields).PFJPLCAIGJH;
    if (iVar1 != 0) {
      (__this->fields).PFJPLCAIGJH = iVar1;
    }
    if ((IBKIPBJJCPG->fields).PMMFPJJOPKE != (ICBMOMGINFH_o *)0x0) {
      ppIVar6 = &(__this->fields).PMMFPJJOPKE;
      pIVar2 = *ppIVar6;
      if (pIVar2 == (ICBMOMGINFH_o *)0x0) {
        pIVar2 = (ICBMOMGINFH_o *)thunk_FUN_01bda818(ICBMOMGINFH_TypeInfo);
        ICBMOMGINFH___ctor(pIVar2,(MethodInfo *)0x0);
        *ppIVar6 = pIVar2;
        thunk_FUN_01c20e04(ppIVar6,pIVar2);
        pIVar2 = *ppIVar6;
        if (pIVar2 == (ICBMOMGINFH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      ICBMOMGINFH__MergeFrom(pIVar2,(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0);
    }
    pNVar5 = &__this->fields;
    pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pNVar5->CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(pNVar5,pGVar3);
    return;
  }
  return;
}


// ===== public int CalculateSize()  [RVA 0x309131C]
// NODLJPNGNBG$$CalculateSize @ RVA 0x309131C

int32_t NODLJPNGNBG__CalculateSize(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  long value;
  ICBMOMGINFH_o *value_00;
  int iVar3;
  
  if ((DAT_045660a3 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045660a3 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).ANAJGHJEEOC;
  if (value == 0) {
    iVar3 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).LINGIJDCLLC;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).PFJPLCAIGJH;
  if ((__this->fields).DMFDEJEDMPO != false) {
    iVar3 = iVar3 + 2;
  }
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  value_00 = (__this->fields).PMMFPJJOPKE;
  if (value_00 != (ICBMOMGINFH_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public override int GetHashCode()  [RVA 0x3091440]
// NODLJPNGNBG$$GetHashCode @ RVA 0x3091440

int32_t NODLJPNGNBG__GetHashCode(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ICBMOMGINFH_o *pIVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  long local_18;
  
  if ((DAT_045660a4 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_045660a4 = 1;
  }
  local_18 = 0;
  local_24 = 0;
  local_28[0] = 0;
  local_2c = 0;
  lVar6 = (__this->fields).ANAJGHJEEOC;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).LINGIJDCLLC;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  if ((__this->fields).DMFDEJEDMPO != false) {
    local_28[0] = 1;
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar3 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).PFJPLCAIGJH;
  if (iVar1 != 0) {
    local_2c = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_2c,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pIVar4 = (__this->fields).PMMFPJJOPKE;
  if (pIVar4 != (ICBMOMGINFH_o *)0x0) {
    uVar3 = (*(pIVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pIVar4,(pIVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public static MessageParser<NODLJPNGNBG> PGCAHPDCJBC()  [RVA 0x3091558]
// NODLJPNGNBG$$PGCAHPDCJBC @ RVA 0x3091558

Google_Protobuf_MessageParser_NODLJPNGNBG__o * NODLJPNGNBG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045660a5 & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_045660a5 = 1;
  }
  if ((NODLJPNGNBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return NODLJPNGNBG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public PMCKBFPNGOD HMHBJILDFEI()  [RVA 0x30915B0]
// NODLJPNGNBG$$HMHBJILDFEI @ RVA 0x30915B0

int32_t NODLJPNGNBG__HMHBJILDFEI(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  return (__this->fields).PFJPLCAIGJH;
}


// ===== public NODLJPNGNBG Clone()  [RVA 0x30915B8]
// NODLJPNGNBG$$Clone @ RVA 0x30915B8

NODLJPNGNBG_o * NODLJPNGNBG__Clone(NODLJPNGNBG_o *__this,MethodInfo *method)

{
  NODLJPNGNBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045660a6 & 1) == 0) {
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_045660a6 = 1;
    method = extraout_x1;
  }
  __this_00 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo,method);
  NODLJPNGNBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


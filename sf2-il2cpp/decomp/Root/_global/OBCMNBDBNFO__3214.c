// TypeDefIndex 3214
// Namespace: 
// public sealed class OBCMNBDBNFO : IMessage<OBCMNBDBNFO>, IMessage, IEquatable<OBCMNBDBNFO>, IDeepCloneable<OBCMNBDBNFO>
// Fields:
//   private static readonly MessageParser<OBCMNBDBNFO> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int ILCBCAMADLI = 1;
//   private int HHNJEEMAEIH; // 0x18
//   public const int EHJBPJLFPPG = 2;
//   private int MGFICIOBKAI; // 0x1C
//   public const int NGIMDAIJJOF = 3;
//   private int AKBMEEECABK; // 0x20
//   public const int NOLMIGKLNCP = 4;
//   private int GCELGJPAMAA; // 0x24
//   public const int CFHCKKCFKHK = 5;
//   private int JEAFOMDCLHD; // 0x28
//   public const int IPAPNGFEIOE = 6;
//   private int OKHEECOKPBF; // 0x2C
//   public const int IHLDLALDOKA = 7;
//   private static readonly FieldCodec<KMDOLFBIGNC> FLKKFFHAJBM; // 0x8
//   private readonly RepeatedField<KMDOLFBIGNC> CFIKNGMJBLI; // 0x30

// ===== public void MENKEGIMGGI(int CJNHFNHJHPE)  [RVA 0x35022F0]
// OBCMNBDBNFO$$MENKEGIMGGI @ RVA 0x35022F0

void OBCMNBDBNFO__MENKEGIMGGI(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MGFICIOBKAI = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(OBCMNBDBNFO IBKIPBJJCPG)  [RVA 0x35022F8]
// OBCMNBDBNFO$$MergeFrom @ RVA 0x35022F8

void OBCMNBDBNFO__MergeFrom(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  OBCMNBDBNFO_Fields *pOVar3;
  
                    /* catch() { ... } // from try @ 036022e0 with catch @ 0360230c */
  if ((DAT_04568861 & 1) == 0) {
                    /* try { // try from 0360231c to 03702323 has its CatchHandler @ 03602338 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Add__);
                    /* try { // try from 03602324 to 0370232f has its CatchHandler @ 03602184 */
    DAT_04568861 = 1;
  }
  if (IBKIPBJJCPG == (OBCMNBDBNFO_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).HHNJEEMAEIH;
                    /* try { // try from 03602330 to 03702337 has its CatchHandler @ 03602338 */
  if (iVar1 != 0) {
    (__this->fields).HHNJEEMAEIH = iVar1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0360231c with catch @ 03602338
                       catch(type#2 @ 00000000) { ... } // from try @ 03602330 with catch @ 03602338
                        */
  iVar1 = (IBKIPBJJCPG->fields).MGFICIOBKAI;
  if (iVar1 != 0) {
    (__this->fields).MGFICIOBKAI = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).AKBMEEECABK;
  if (iVar1 != 0) {
    (__this->fields).AKBMEEECABK = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).GCELGJPAMAA;
  if (iVar1 != 0) {
    (__this->fields).GCELGJPAMAA = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).JEAFOMDCLHD;
  if (iVar1 != 0) {
    (__this->fields).JEAFOMDCLHD = iVar1;
  }
  iVar1 = (IBKIPBJJCPG->fields).OKHEECOKPBF;
  if (iVar1 != 0) {
    (__this->fields).OKHEECOKPBF = iVar1;
  }
  __this_00 = (__this->fields).CFIKNGMJBLI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).CFIKNGMJBLI,
               Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Add__);
    pOVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pOVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pOVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pOVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(OBCMNBDBNFO IBKIPBJJCPG)  [RVA 0x35023C8]
// OBCMNBDBNFO$$Equals @ RVA 0x35023C8

bool OBCMNBDBNFO__Equals(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  
  if ((DAT_04568862 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Equals__);
    DAT_04568862 = 1;
  }
  if (IBKIPBJJCPG != (OBCMNBDBNFO_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((((__this->fields).HHNJEEMAEIH == (IBKIPBJJCPG->fields).HHNJEEMAEIH) &&
         ((__this->fields).MGFICIOBKAI == (IBKIPBJJCPG->fields).MGFICIOBKAI)) &&
        ((__this->fields).AKBMEEECABK == (IBKIPBJJCPG->fields).AKBMEEECABK)) &&
       ((((__this->fields).GCELGJPAMAA == (IBKIPBJJCPG->fields).GCELGJPAMAA &&
         ((__this->fields).JEAFOMDCLHD == (IBKIPBJJCPG->fields).JEAFOMDCLHD)) &&
        ((__this->fields).OKHEECOKPBF == (IBKIPBJJCPG->fields).OKHEECOKPBF)))) {
      __this_00 = (__this->fields).CFIKNGMJBLI;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).CFIKNGMJBLI,
                         Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public void PMNPBMHNAHM(int CJNHFNHJHPE)  [RVA 0x35024B8]
// OBCMNBDBNFO$$PMNPBMHNAHM @ RVA 0x35024B8

void OBCMNBDBNFO__PMNPBMHNAHM(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OKHEECOKPBF = CJNHFNHJHPE;
  return;
}


// ===== public void NELEMAPEJEP(int CJNHFNHJHPE)  [RVA 0x35024C0]
// OBCMNBDBNFO$$NELEMAPEJEP @ RVA 0x35024C0

void OBCMNBDBNFO__NELEMAPEJEP(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).AKBMEEECABK = CJNHFNHJHPE;
  return;
}


// ===== private static void .cctor()  [RVA 0x35024C8]
// OBCMNBDBNFO$$.cctor @ RVA 0x35024C8

void OBCMNBDBNFO___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OBCMNBDBNFO__o *__this;
  Google_Protobuf_FieldCodec_KMDOLFBIGNC__o *pGVar1;
  Google_Protobuf_FieldCodec_KMDOLFBIGNC__o **ppGVar2;
  
  if ((DAT_04568863 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<KMDOLFBIGNC>__);
    FUN_01bab630(&System_Func<OBCMNBDBNFO>_TypeInfo);
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OBCMNBDBNFO>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OBCMNBDBNFO>_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_OBCMNBDBNFO_<>c_KPFEPLDDLCD__);
    FUN_01bab630(&OBCMNBDBNFO_<>c_TypeInfo);
    DAT_04568863 = 1;
  }
  if ((OBCMNBDBNFO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OBCMNBDBNFO>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OBCMNBDBNFO__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OBCMNBDBNFO>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OBCMNBDBNFO>__ctor__);
  OBCMNBDBNFO_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OBCMNBDBNFO_TypeInfo->static_fields,__this);
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f48 == '\0') {
    FUN_01bab630(&KMDOLFBIGNC_TypeInfo);
    DAT_04567f48 = '\x01';
  }
  if ((KMDOLFBIGNC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_KMDOLFBIGNC__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x3a,(Google_Protobuf_MessageParser_T__o *)
                           KMDOLFBIGNC_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<KMDOLFBIGNC>__);
  ppGVar2 = &OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void NFOKHOLMHFP(int CJNHFNHJHPE)  [RVA 0x3502678]
// OBCMNBDBNFO$$NFOKHOLMHFP @ RVA 0x3502678

void OBCMNBDBNFO__NFOKHOLMHFP(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).GCELGJPAMAA = CJNHFNHJHPE;
  return;
}


// ===== public int JADCDHCFKNE()  [RVA 0x3502680]
// OBCMNBDBNFO$$JADCDHCFKNE @ RVA 0x3502680

int32_t OBCMNBDBNFO__JADCDHCFKNE(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).AKBMEEECABK;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3502688]
// OBCMNBDBNFO$$FFHIHGCDGAK @ RVA 0x3502688

Google_Protobuf_Reflection_MessageDescriptor_o * OBCMNBDBNFO__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568864 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568864 = 1;
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
        goto LAB_03602770;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03602770:
                    /* WARNING: Could not recover jumptable at 0x03602784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,6,pVVar2->method);
  return pGVar3;
}


// ===== public override string ToString()  [RVA 0x350278C]
// OBCMNBDBNFO$$ToString @ RVA 0x350278C

System_String_o * OBCMNBDBNFO__ToString(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568865 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568865 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int BOJAGBOELJD()  [RVA 0x35027E4]
// OBCMNBDBNFO$$BOJAGBOELJD @ RVA 0x35027E4

int32_t OBCMNBDBNFO__BOJAGBOELJD(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).OKHEECOKPBF;
}


// ===== public int OGCKEMODKOC()  [RVA 0x35027EC]
// OBCMNBDBNFO$$OGCKEMODKOC @ RVA 0x35027EC

int32_t OBCMNBDBNFO__OGCKEMODKOC(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).MGFICIOBKAI;
}


// ===== public void .ctor()  [RVA 0x35027F4]
// OBCMNBDBNFO$$.ctor @ RVA 0x35027F4

void OBCMNBDBNFO___ctor(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568866 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_TypeInfo);
    DAT_04568866 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>__ctor__);
  ppGVar1 = &(__this->fields).CFIKNGMJBLI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x350287C]
// OBCMNBDBNFO$$MergeFrom @ RVA 0x350287C

void OBCMNBDBNFO__MergeFrom
               (OBCMNBDBNFO_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  OBCMNBDBNFO_Fields *pOVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_00;
  
  if ((DAT_04568867 & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_AddEntriesFrom__);
    DAT_04568867 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
      pOVar1 = &__this->fields;
      do {
        if (uVar2 < 0x19) {
          if (uVar2 == 8) {
                    /* try { // try from 036029bc to 03702c93 has its CatchHandler @ 036029bc
                       catch() { ... } // from try @ 036029bc with catch @ 036029bc
                       catch() { ... } // from try @ 03602d2c with catch @ 036029bc
                       catch() { ... } // from try @ 03602d58 with catch @ 036029bc
                       catch() { ... } // from try @ 03602e10 with catch @ 036029bc
                       catch() { ... } // from try @ 03602f5c with catch @ 036029bc
                       catch() { ... } // from try @ 03602f88 with catch @ 036029bc
                       catch() { ... } // from try @ 0360306c with catch @ 036029bc */
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HHNJEEMAEIH = iVar3;
          }
          else if (uVar2 == 0x10) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).MGFICIOBKAI = iVar3;
          }
          else {
            if (uVar2 != 0x18) goto LAB_03602990;
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).AKBMEEECABK = iVar3;
          }
        }
        else if (uVar2 < 0x29) {
          if (uVar2 == 0x20) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).GCELGJPAMAA = iVar3;
          }
          else if (uVar2 == 0x28) {
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).JEAFOMDCLHD = iVar3;
          }
          else {
LAB_03602990:
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pOVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pOVar1->CKFPENBPNML = pGVar4;
            thunk_FUN_01c20e04(pOVar1,pGVar4);
          }
        }
        else if (uVar2 == 0x30) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).OKHEECOKPBF = iVar3;
        }
        else {
          if (uVar2 != 0x3a) goto LAB_03602990;
          __this_00 = (__this->fields).CFIKNGMJBLI;
          if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0)
          goto LAB_03602a24;
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
                     Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_AddEntriesFrom__)
          ;
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_03602a24:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x3502A28]
// OBCMNBDBNFO$$GetHashCode @ RVA 0x3502A28

int32_t OBCMNBDBNFO__GetHashCode(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).HHNJEEMAEIH;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).MGFICIOBKAI;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).AKBMEEECABK;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).GCELGJPAMAA;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).JEAFOMDCLHD;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).OKHEECOKPBF;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).CFIKNGMJBLI;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar3 = uVar3 ^ uVar2;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3502B30]
// OBCMNBDBNFO$$Equals @ RVA 0x3502B30

bool OBCMNBDBNFO__Equals(OBCMNBDBNFO_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568868 & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_04568868 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OBCMNBDBNFO_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OBCMNBDBNFO__Equals(__this,(OBCMNBDBNFO_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public int CalculateSize()  [RVA 0x3502B94]
// OBCMNBDBNFO$$CalculateSize @ RVA 0x3502B94

int32_t OBCMNBDBNFO__CalculateSize(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_01;
  int iVar3;
  
  if ((DAT_04568869 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_CalculateSize__);
    DAT_04568869 = 1;
    method = extraout_x1;
  }
  iVar3 = (__this->fields).HHNJEEMAEIH;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar3,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).MGFICIOBKAI;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).AKBMEEECABK;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).GCELGJPAMAA;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
                    /* try { // try from 03602c94 to 03702c9b has its CatchHandler @ 03602d44 */
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).JEAFOMDCLHD;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03602cb0 to 03702cb3 has its CatchHandler @ 03602d30 */
                    /* try { // try from 03602cb4 to 03702cbb has its CatchHandler @ 03602d40 */
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).OKHEECOKPBF;
  if (iVar1 != 0) {
                    /* try { // try from 03602cd4 to 03702cdf has its CatchHandler @ 03602d38 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
                    /* try { // try from 03602cf4 to 03702cff has its CatchHandler @ 03602d34 */
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_01 = (__this->fields).CFIKNGMJBLI;
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* try { // try from 03602d28 to 03702d2b has its CatchHandler @ 03602d3c */
                    /* try { // try from 03602d2c to 03702d53 has its CatchHandler @ 036029bc */
    iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
                       Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_CalculateSize__
                      );
                    /* catch() { ... } // from try @ 03602cb0 with catch @ 03602d30 */
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* catch() { ... } // from try @ 03602cf4 with catch @ 03602d34 */
    iVar3 = iVar2 + iVar3;
                    /* catch() { ... } // from try @ 03602cd4 with catch @ 03602d38 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* catch() { ... } // from try @ 03602d28 with catch @ 03602d3c */
                    /* catch() { ... } // from try @ 03602cb4 with catch @ 03602d40 */
                    /* catch() { ... } // from try @ 03602c94 with catch @ 03602d44 */
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar3 = iVar2 + iVar3;
    }
                    /* try { // try from 03602d54 to 03702d57 has its CatchHandler @ 03603054 */
                    /* try { // try from 03602d58 to 03702da3 has its CatchHandler @ 036029bc */
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MKKNMHKPKDM(int CJNHFNHJHPE)  [RVA 0x3502D64]
// OBCMNBDBNFO$$MKKNMHKPKDM @ RVA 0x3502D64

void OBCMNBDBNFO__MKKNMHKPKDM(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HHNJEEMAEIH = CJNHFNHJHPE;
  return;
}


// ===== public int KCGIBLBEDKB()  [RVA 0x3502D6C]
// OBCMNBDBNFO$$KCGIBLBEDKB @ RVA 0x3502D6C

int32_t OBCMNBDBNFO__KCGIBLBEDKB(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).JEAFOMDCLHD;
}


// ===== public int KIPOCDOCKFA()  [RVA 0x3502D74]
// OBCMNBDBNFO$$KIPOCDOCKFA @ RVA 0x3502D74

int32_t OBCMNBDBNFO__KIPOCDOCKFA(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).HHNJEEMAEIH;
}


// ===== public RepeatedField<KMDOLFBIGNC> GFONMLEEIKA()  [RVA 0x3502D7C]
// OBCMNBDBNFO$$GFONMLEEIKA @ RVA 0x3502D7C

Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *
OBCMNBDBNFO__GFONMLEEIKA(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).CFIKNGMJBLI;
}


// ===== public void .ctor(OBCMNBDBNFO IBKIPBJJCPG)  [RVA 0x3502D84]
// OBCMNBDBNFO$$.ctor @ RVA 0x3502D84

void OBCMNBDBNFO___ctor(OBCMNBDBNFO_o *__this,OBCMNBDBNFO_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  int32_t iVar3;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_0456886a & 1) == 0) {
                    /* try { // try from 03602da4 to 03702dab has its CatchHandler @ 03602f74 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Clone__);
    DAT_0456886a = 1;
    method_00 = extraout_x1;
  }
  OBCMNBDBNFO___ctor(__this,method_00);
  if (IBKIPBJJCPG != (OBCMNBDBNFO_o *)0x0) {
                    /* try { // try from 03602dc0 to 03702dc3 has its CatchHandler @ 03602f60 */
    iVar1 = (IBKIPBJJCPG->fields).GCELGJPAMAA;
    iVar2 = (IBKIPBJJCPG->fields).HHNJEEMAEIH;
    iVar3 = (IBKIPBJJCPG->fields).MGFICIOBKAI;
                    /* try { // try from 03602dc4 to 03702dcb has its CatchHandler @ 03602f70 */
    (__this->fields).AKBMEEECABK = (IBKIPBJJCPG->fields).AKBMEEECABK;
    (__this->fields).GCELGJPAMAA = iVar1;
    (__this->fields).HHNJEEMAEIH = iVar2;
    (__this->fields).MGFICIOBKAI = iVar3;
    iVar1 = (IBKIPBJJCPG->fields).OKHEECOKPBF;
    (__this->fields).JEAFOMDCLHD = (IBKIPBJJCPG->fields).JEAFOMDCLHD;
    (__this->fields).OKHEECOKPBF = iVar1;
    pGVar4 = (IBKIPBJJCPG->fields).CFIKNGMJBLI;
    if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
                    /* try { // try from 03602de4 to 03702def has its CatchHandler @ 03602f6c */
      pGVar4 = (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,
                          Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_Clone__);
      (__this->fields).CFIKNGMJBLI = pGVar4;
      thunk_FUN_01c20e04();
      pGVar5 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 03602e04 to 03702e0f has its CatchHandler @ 03602f68 */
      (__this->fields).CKFPENBPNML = pGVar5;
                    /* try { // try from 03602e10 to 03702f57 has its CatchHandler @ 036029bc */
      thunk_FUN_01c20e04(&__this->fields,pGVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<OBCMNBDBNFO> PGCAHPDCJBC()  [RVA 0x3502E20]
// OBCMNBDBNFO$$PGCAHPDCJBC @ RVA 0x3502E20

Google_Protobuf_MessageParser_OBCMNBDBNFO__o * OBCMNBDBNFO__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456886b & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_0456886b = 1;
  }
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OBCMNBDBNFO_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3502E78]
// OBCMNBDBNFO$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3502E78

Google_Protobuf_Reflection_MessageDescriptor_o *
OBCMNBDBNFO__pb__Google_Protobuf_IMessage_get_Descriptor(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  OBCMNBDBNFO_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456886c & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_0456886c = 1;
    method = extraout_x1;
  }
  method_00 = OBCMNBDBNFO_TypeInfo;
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OBCMNBDBNFO_c *)thunk_FUN_01ba7564(OBCMNBDBNFO_TypeInfo,method);
  }
  pGVar1 = OBCMNBDBNFO__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public int IGMGNKAKMBH()  [RVA 0x3502EC4]
// OBCMNBDBNFO$$IGMGNKAKMBH @ RVA 0x3502EC4

int32_t OBCMNBDBNFO__IGMGNKAKMBH(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  return (__this->fields).GCELGJPAMAA;
}


// ===== public OBCMNBDBNFO Clone()  [RVA 0x3502ECC]
// OBCMNBDBNFO$$Clone @ RVA 0x3502ECC

OBCMNBDBNFO_o * OBCMNBDBNFO__Clone(OBCMNBDBNFO_o *__this,MethodInfo *method)

{
  OBCMNBDBNFO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456886d & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
    DAT_0456886d = 1;
    method = extraout_x1;
  }
  __this_00 = (OBCMNBDBNFO_o *)thunk_FUN_01bda818(OBCMNBDBNFO_TypeInfo,method);
  OBCMNBDBNFO___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3502F24]
// OBCMNBDBNFO$$WriteTo @ RVA 0x3502F24

void OBCMNBDBNFO__WriteTo
               (OBCMNBDBNFO_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *__this_01;
  
  if ((DAT_0456886e & 1) == 0) {
    FUN_01bab630(&OBCMNBDBNFO_TypeInfo);
                    /* try { // try from 03602f58 to 03702f5b has its CatchHandler @ 03602f64 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_WriteTo__);
                    /* try { // try from 03602f5c to 03702f83 has its CatchHandler @ 036029bc */
                    /* catch() { ... } // from try @ 03602dc0 with catch @ 03602f60 */
    DAT_0456886e = 1;
  }
                    /* catch() { ... } // from try @ 03602f58 with catch @ 03602f64 */
                    /* catch() { ... } // from try @ 03602e04 with catch @ 03602f68 */
  if ((__this->fields).HHNJEEMAEIH != 0) {
                    /* catch() { ... } // from try @ 03602de4 with catch @ 03602f6c */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
                    /* catch() { ... } // from try @ 03602dc4 with catch @ 03602f70 */
                    /* catch() { ... } // from try @ 03602da4 with catch @ 03602f74 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 03602f84 to 03702f87 has its CatchHandler @ 03603030 */
                    /* try { // try from 03602f88 to 0370303f has its CatchHandler @ 036029bc */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HHNJEEMAEIH,(MethodInfo *)0x0);
  }
  if ((__this->fields).MGFICIOBKAI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).MGFICIOBKAI,(MethodInfo *)0x0);
  }
  if ((__this->fields).AKBMEEECABK != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).AKBMEEECABK,(MethodInfo *)0x0);
  }
  if ((__this->fields).GCELGJPAMAA != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).GCELGJPAMAA,(MethodInfo *)0x0);
  }
  if ((__this->fields).JEAFOMDCLHD != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x28,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03602f84 with catch @ 03603030 */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).JEAFOMDCLHD,(MethodInfo *)0x0);
  }
                    /* try { // try from 03603040 to 0370306b has its CatchHandler @ 03603080 */
  if ((__this->fields).OKHEECOKPBF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036030e0;
                    /* catch() { ... } // from try @ 03602d54 with catch @ 03603054 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x30,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).OKHEECOKPBF,(MethodInfo *)0x0);
  }
                    /* try { // try from 0360306c to 03703077 has its CatchHandler @ 036029bc */
  __this_01 = (__this->fields).CFIKNGMJBLI;
                    /* try { // try from 03603078 to 0370307f has its CatchHandler @ 03603080 */
                    /* catch() { ... } // from try @ 03603040 with catch @ 03603080
                       catch() { ... } // from try @ 03603078 with catch @ 03603080 */
  if ((OBCMNBDBNFO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_KMDOLFBIGNC__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)OBCMNBDBNFO_TypeInfo->static_fields->FLKKFFHAJBM,
               Method_Google_Protobuf_Collections_RepeatedField<KMDOLFBIGNC>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036030e0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FEKPEMKJAJL(int CJNHFNHJHPE)  [RVA 0x35030E4]
// OBCMNBDBNFO$$FEKPEMKJAJL @ RVA 0x35030E4

void OBCMNBDBNFO__FEKPEMKJAJL(OBCMNBDBNFO_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).JEAFOMDCLHD = CJNHFNHJHPE;
  return;
}


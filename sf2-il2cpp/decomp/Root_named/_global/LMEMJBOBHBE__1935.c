// TypeDefIndex 1935
// Namespace: 
// public sealed class LMEMJBOBHBE : IMessage<LMEMJBOBHBE>, IMessage, IEquatable<LMEMJBOBHBE>, IDeepCloneable<LMEMJBOBHBE>
// Fields:
//   private static readonly MessageParser<LMEMJBOBHBE> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EJGHNPOAOIG = 1;
//   private LACJGHLKINB MOCOKGFIJFP; // 0x18
//   public const int IBOGBLEGAHB = 2;
//   private string MAHGAIJBBHF; // 0x20
//   public const int JMEGMAPOMOP = 3;
//   private long PHICOONBADJ; // 0x28

// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x326D648]
// LMEMJBOBHBE$$MergeFrom @ RVA 0x326D648

void LMEMJBOBHBE__MergeFrom
               (LMEMJBOBHBE_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  LMEMJBOBHBE_Fields *pLVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int64_t iVar4;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pLVar1 = &__this->fields;
  do {
    while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar2) {
      if (uVar2 == 0x12) {
        CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
        LMEMJBOBHBE__OPKJBABEHFH(__this,CJNHFNHJHPE,method);
      }
      else if (uVar2 == 0x18) {
        iVar4 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).PHICOONBADJ = iVar4;
      }
      else {
LAB_0336d6d4:
        method = (MethodInfo *)0x0;
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pLVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pLVar1->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pLVar1,pGVar5);
      }
    }
    if (uVar2 != 8) {
      if (uVar2 == 0) {
        return;
      }
      goto LAB_0336d6d4;
    }
    iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
    (__this->fields).MOCOKGFIJFP = iVar3;
  } while( true );
}


// ===== public LMEMJBOBHBE Clone()  [RVA 0x326D784]
// LMEMJBOBHBE$$Clone @ RVA 0x326D784

LMEMJBOBHBE_o * LMEMJBOBHBE__Clone(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  LMEMJBOBHBE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045671f7 & 1) == 0) {
                    /* try { // try from 0336d7a8 to 0346d7cf has its CatchHandler @ 0336ddd8 */
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    DAT_045671f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (LMEMJBOBHBE_o *)thunk_FUN_01bda818(LMEMJBOBHBE_TypeInfo,method);
  LMEMJBOBHBE___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override int GetHashCode()  [RVA 0x326D83C]
// LMEMJBOBHBE$$GetHashCode @ RVA 0x326D83C

int32_t LMEMJBOBHBE__GetHashCode(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  long local_28;
  int local_14;
  
  local_28 = 0;
  local_14 = 0;
  iVar1 = (__this->fields).MOCOKGFIJFP;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
                    /* try { // try from 0336d86c to 0346d873 has its CatchHandler @ 0336ddc8 */
  }
  pSVar4 = (__this->fields).MAHGAIJBBHF;
                    /* try { // try from 0336d878 to 0346d87f has its CatchHandler @ 0336ddd0 */
  if (pSVar4 != (System_String_o *)0x0) {
    if ((pSVar4->fields)._stringLength != 0) {
                    /* try { // try from 0336d888 to 0346d893 has its CatchHandler @ 0336ddc0 */
      uVar3 = (*(pSVar4->klass->vtable)._2_GetHashCode.methodPtr)
                        (pSVar4,(pSVar4->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
    lVar6 = (__this->fields).PHICOONBADJ;
    if (lVar6 != 0) {
                    /* try { // try from 0336d89c to 0346d8a7 has its CatchHandler @ 0336ddbc */
      local_28 = lVar6;
      uVar3 = System_Int64__GetHashCode((int64_t)&local_28,(MethodInfo *)0x0);
                    /* try { // try from 0336d8ac to 0346d8b7 has its CatchHandler @ 0336ddc4 */
      uVar2 = uVar3 ^ uVar2;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar3 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar3 ^ uVar2;
    }
                    /* try { // try from 0336d8c8 to 0346d8cf has its CatchHandler @ 0336dd98 */
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336d8dc to 0346d8df has its CatchHandler @ 0336dda4 */
  FUN_01bab8c8();
}


// ===== public void .ctor(LMEMJBOBHBE IBKIPBJJCPG)  [RVA 0x326D7DC]
// LMEMJBOBHBE$$.ctor @ RVA 0x326D7DC

void LMEMJBOBHBE___ctor(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  
  LMEMJBOBHBE___ctor(__this,(MethodInfo *)IBKIPBJJCPG);
  if (IBKIPBJJCPG != (LMEMJBOBHBE_o *)0x0) {
    (__this->fields).MOCOKGFIJFP = (IBKIPBJJCPG->fields).MOCOKGFIJFP;
                    /* try { // try from 0336d804 to 0346d82f has its CatchHandler @ 0336ddd4 */
    (__this->fields).MAHGAIJBBHF = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
    thunk_FUN_01c20e04();
    (__this->fields).PHICOONBADJ = (IBKIPBJJCPG->fields).PHICOONBADJ;
    pGVar1 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar1;
    thunk_FUN_01c20e04(&__this->fields,pGVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(LMEMJBOBHBE IBKIPBJJCPG)  [RVA 0x326D938]
// LMEMJBOBHBE$$Equals @ RVA 0x326D938

bool LMEMJBOBHBE__Equals(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (LMEMJBOBHBE_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 0336d97c to 0346d9a7 has its CatchHandler @ 0336dc04 */
    if ((((__this->fields).MOCOKGFIJFP == (IBKIPBJJCPG->fields).MOCOKGFIJFP) &&
        (bVar1 = System_String__op_Inequality
                           ((__this->fields).MAHGAIJBBHF,(IBKIPBJJCPG->fields).MAHGAIJBBHF,
                            (MethodInfo *)0x0), !bVar1)) &&
       ((__this->fields).PHICOONBADJ == (IBKIPBJJCPG->fields).PHICOONBADJ)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x326D8E0]
// LMEMJBOBHBE$$.ctor @ RVA 0x326D8E0

void LMEMJBOBHBE___ctor(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  if ((DAT_045671f8 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045671f8 = 1;
  }
  (__this->fields).MAHGAIJBBHF = StringLiteral_1/*""*/;
                    /* try { // try from 0336d920 to 0346d947 has its CatchHandler @ 0336dc08 */
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x326D9B8]
// LMEMJBOBHBE$$WriteTo @ RVA 0x326D9B8

void LMEMJBOBHBE__WriteTo
               (LMEMJBOBHBE_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__this->fields).MOCOKGFIJFP != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 0336d9e4 to 0346d9eb has its CatchHandler @ 0336dbfc */
                    /* try { // try from 0336d9f0 to 0346d9f7 has its CatchHandler @ 0336dc00 */
    Google_Protobuf_CodedOutputStream__WriteEnum
              (JBGJLELBMJF,(__this->fields).MOCOKGFIJFP,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).MAHGAIJBBHF;
  if (pSVar1 != (System_String_o *)0x0) {
    if ((pSVar1->fields)._stringLength != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
                    /* try { // try from 0336da08 to 0346da13 has its CatchHandler @ 0336dbf4 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 0336da24 to 0346da2b has its CatchHandler @ 0336dbe8 */
      Google_Protobuf_CodedOutputStream__WriteString
                (JBGJLELBMJF,(__this->fields).MAHGAIJBBHF,(MethodInfo *)0x0);
    }
    if ((__this->fields).PHICOONBADJ != 0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0336da7c;
                    /* try { // try from 0336da38 to 0346da3b has its CatchHandler @ 0336dbe4 */
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
                    /* try { // try from 0336da48 to 0346da53 has its CatchHandler @ 0336dbdc */
      Google_Protobuf_CodedOutputStream__WriteInt64
                (JBGJLELBMJF,(__this->fields).PHICOONBADJ,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
                    /* try { // try from 0336da58 to 0346da67 has its CatchHandler @ 0336dbd8 */
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0336da7c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336da7c to 0346da83 has its CatchHandler @ 0336dbcc */
  FUN_01bab8c8();
}


// ===== public void MGDCMOPLDNM(long CJNHFNHJHPE)  [RVA 0x326DA80]
// LMEMJBOBHBE$$MGDCMOPLDNM @ RVA 0x326DA80

void LMEMJBOBHBE__MGDCMOPLDNM(LMEMJBOBHBE_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PHICOONBADJ = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x326DA88]
// LMEMJBOBHBE$$ToString @ RVA 0x326DA88

System_String_o * LMEMJBOBHBE__ToString(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0336da98 to 0346da9f has its CatchHandler @ 0336dbc0 */
  if ((DAT_045671f9 & 1) == 0) {
                    /* try { // try from 0336daac to 0346daaf has its CatchHandler @ 0336dbb8 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045671f9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0336dac0 to 0346dac7 has its CatchHandler @ 0336ddac */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 0336dad4 to 0346dadb has its CatchHandler @ 0336dda8 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void OPKJBABEHFH(string CJNHFNHJHPE)  [RVA 0x326D708]
// LMEMJBOBHBE$$OPKJBABEHFH @ RVA 0x326D708

void LMEMJBOBHBE__OPKJBABEHFH(LMEMJBOBHBE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045671fa & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
    FUN_01bab630(&StringLiteral_21930/*"value"*/);
    DAT_045671fa = 1;
  }
  pSVar1 = (System_String_o *)
           Google_Protobuf_ProtoPreconditions__CheckNotNull<object>
                     ((Il2CppObject *)CJNHFNHJHPE,StringLiteral_21930/*"value"*/,
                      Method_Google_Protobuf_ProtoPreconditions_CheckNotNull<string>__);
  ppSVar2 = &(__this->fields).MAHGAIJBBHF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== public long POHGIDGGILO()  [RVA 0x326DAE0]
// LMEMJBOBHBE$$POHGIDGGILO @ RVA 0x326DAE0

int64_t LMEMJBOBHBE__POHGIDGGILO(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  return (__this->fields).PHICOONBADJ;
}


// ===== public void EBKBEBMFKBF(LACJGHLKINB CJNHFNHJHPE)  [RVA 0x326DAE8]
// LMEMJBOBHBE$$EBKBEBMFKBF @ RVA 0x326DAE8

void LMEMJBOBHBE__EBKBEBMFKBF(LMEMJBOBHBE_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MOCOKGFIJFP = CJNHFNHJHPE;
  return;
}


// ===== public LACJGHLKINB HOFEFIGKGMN()  [RVA 0x326DAF0]
// LMEMJBOBHBE$$HOFEFIGKGMN @ RVA 0x326DAF0

int32_t LMEMJBOBHBE__HOFEFIGKGMN(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
                    /* try { // try from 0336daf4 to 0346db63 has its CatchHandler @ 0336ddb8 */
  return (__this->fields).MOCOKGFIJFP;
}


// ===== public void MergeFrom(LMEMJBOBHBE IBKIPBJJCPG)  [RVA 0x326DAF8]
// LMEMJBOBHBE$$MergeFrom @ RVA 0x326DAF8

void LMEMJBOBHBE__MergeFrom(LMEMJBOBHBE_o *__this,LMEMJBOBHBE_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  System_String_o *CJNHFNHJHPE;
  long lVar3;
  LMEMJBOBHBE_Fields *pLVar4;
  
  if (IBKIPBJJCPG == (LMEMJBOBHBE_o *)0x0) {
                    /* try { // try from 0336db6c to 0346db73 has its CatchHandler @ 0336dc0c */
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).MOCOKGFIJFP;
  if (iVar1 != 0) {
    (__this->fields).MOCOKGFIJFP = iVar1;
  }
  CJNHFNHJHPE = (IBKIPBJJCPG->fields).MAHGAIJBBHF;
  if (CJNHFNHJHPE != (System_String_o *)0x0) {
    if ((CJNHFNHJHPE->fields)._stringLength != 0) {
      LMEMJBOBHBE__OPKJBABEHFH(__this,CJNHFNHJHPE,method);
    }
    lVar3 = (IBKIPBJJCPG->fields).PHICOONBADJ;
    if (lVar3 != 0) {
      (__this->fields).PHICOONBADJ = lVar3;
    }
    pLVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pLVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pLVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pLVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<LMEMJBOBHBE> PGCAHPDCJBC()  [RVA 0x326DB74]
// LMEMJBOBHBE$$PGCAHPDCJBC @ RVA 0x326DB74

Google_Protobuf_MessageParser_LMEMJBOBHBE__o * LMEMJBOBHBE__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 0336db78 to 0346db7b has its CatchHandler @ 0336dbf8 */
                    /* try { // try from 0336db80 to 0346db83 has its CatchHandler @ 0336dbf0 */
                    /* try { // try from 0336db88 to 0346db8b has its CatchHandler @ 0336dbec */
  if ((DAT_045671fb & 1) == 0) {
                    /* try { // try from 0336db90 to 0346db93 has its CatchHandler @ 0336dbe0 */
                    /* try { // try from 0336db98 to 0346db9b has its CatchHandler @ 0336dbd4 */
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
                    /* try { // try from 0336dba0 to 0346dba3 has its CatchHandler @ 0336dbd0 */
    DAT_045671fb = 1;
  }
                    /* try { // try from 0336dba8 to 0346dbab has its CatchHandler @ 0336dbc4 */
  if ((LMEMJBOBHBE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336dbb0 to 0346dbb3 has its CatchHandler @ 0336dbbc */
    thunk_FUN_01ba7564();
                    /* try { // try from 0336dbb4 to 0346dc1b has its CatchHandler @ 0336d5c0 */
  }
                    /* catch() { ... } // from try @ 0336daac with catch @ 0336dbb8 */
                    /* catch() { ... } // from try @ 0336dbb0 with catch @ 0336dbbc */
                    /* catch() { ... } // from try @ 0336da98 with catch @ 0336dbc0 */
                    /* catch() { ... } // from try @ 0336dba8 with catch @ 0336dbc4 */
  return LMEMJBOBHBE_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int CalculateSize()  [RVA 0x326DBCC]
// LMEMJBOBHBE$$CalculateSize @ RVA 0x326DBCC

int32_t LMEMJBOBHBE__CalculateSize(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  System_String_o *value_00;
  long value_01;
  
                    /* catch() { ... } // from try @ 0336da7c with catch @ 0336dbcc */
                    /* catch() { ... } // from try @ 0336dba0 with catch @ 0336dbd0 */
                    /* catch() { ... } // from try @ 0336db98 with catch @ 0336dbd4 */
                    /* catch() { ... } // from try @ 0336da58 with catch @ 0336dbd8 */
                    /* catch() { ... } // from try @ 0336da48 with catch @ 0336dbdc */
                    /* catch() { ... } // from try @ 0336db90 with catch @ 0336dbe0 */
                    /* catch() { ... } // from try @ 0336da38 with catch @ 0336dbe4 */
  if ((DAT_045671fc & 1) == 0) {
                    /* catch() { ... } // from try @ 0336da24 with catch @ 0336dbe8 */
                    /* catch() { ... } // from try @ 0336db88 with catch @ 0336dbec */
                    /* catch() { ... } // from try @ 0336db80 with catch @ 0336dbf0 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* catch() { ... } // from try @ 0336da08 with catch @ 0336dbf4 */
                    /* catch() { ... } // from try @ 0336db78 with catch @ 0336dbf8 */
    DAT_045671fc = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0336d9e4 with catch @ 0336dbfc */
                    /* catch() { ... } // from try @ 0336d9f0 with catch @ 0336dc00 */
  value = (__this->fields).MOCOKGFIJFP;
                    /* catch() { ... } // from try @ 0336d97c with catch @ 0336dc04 */
                    /* catch() { ... } // from try @ 0336d920 with catch @ 0336dc08 */
  iVar2 = 0;
  if (value != 0) {
                    /* catch() { ... } // from try @ 0336db6c with catch @ 0336dc0c */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
                    /* try { // try from 0336dc1c to 0346dc1f has its CatchHandler @ 0336dd8c */
                    /* try { // try from 0336dc20 to 0346dcbb has its CatchHandler @ 0336d5c0 */
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeEnumSize(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).MAHGAIJBBHF;
  if (value_00 != (System_String_o *)0x0) {
    if ((value_00->fields)._stringLength != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeStringSize(value_00,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    value_01 = (__this->fields).PHICOONBADJ;
    if (value_01 != 0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value_01,(MethodInfo *)0x0);
      iVar2 = iVar2 + iVar1 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x326DCB8]
// LMEMJBOBHBE$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x326DCB8

Google_Protobuf_Reflection_MessageDescriptor_o *
LMEMJBOBHBE__pb__Google_Protobuf_IMessage_get_Descriptor(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  LMEMJBOBHBE_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0336dcbc to 0346dcc3 has its CatchHandler @ 0336dddc */
                    /* try { // try from 0336dcc4 to 0346dcc7 has its CatchHandler @ 0336ddcc */
  if ((DAT_045671fd & 1) == 0) {
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
                    /* try { // try from 0336dce0 to 0346dd33 has its CatchHandler @ 0336de9c */
    DAT_045671fd = 1;
    method = extraout_x1;
  }
  method_00 = LMEMJBOBHBE_TypeInfo;
  if ((LMEMJBOBHBE_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LMEMJBOBHBE_c *)thunk_FUN_01ba7564(LMEMJBOBHBE_TypeInfo,method);
  }
  pGVar1 = LMEMJBOBHBE__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x326DE08]
// LMEMJBOBHBE$$.cctor @ RVA 0x326DE08

void LMEMJBOBHBE___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_LMEMJBOBHBE__o *__this;
  
                    /* catch() { ... } // from try @ 0336ddf4 with catch @ 0336de08 */
                    /* try { // try from 0336de18 to 0346de87 has its CatchHandler @ 0336de9c */
  if ((DAT_045671fe & 1) == 0) {
    FUN_01bab630(&System_Func<LMEMJBOBHBE>_TypeInfo);
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<LMEMJBOBHBE>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<LMEMJBOBHBE>_TypeInfo);
    FUN_01bab630(&Method_LMEMJBOBHBE_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&LMEMJBOBHBE_<>c_TypeInfo);
    DAT_045671fe = 1;
  }
                    /* try { // try from 0336de88 to 0346de93 has its CatchHandler @ 0336d5c0 */
                    /* try { // try from 0336de94 to 0346de9b has its CatchHandler @ 0336de9c */
                    /* catch() { ... } // from try @ 0336dce0 with catch @ 0336de9c
                       catch() { ... } // from try @ 0336dd4c with catch @ 0336de9c
                       catch() { ... } // from try @ 0336de18 with catch @ 0336de9c
                       catch() { ... } // from try @ 0336de94 with catch @ 0336de9c */
                    /* try { // try from 0336dea0 to 0346df97 has its CatchHandler @ 0336dea0
                       catch() { ... } // from try @ 0336dea0 with catch @ 0336dea0
                       catch() { ... } // from try @ 0336e108 with catch @ 0336dea0
                       catch() { ... } // from try @ 0336e1ac with catch @ 0336dea0
                       catch() { ... } // from try @ 0336e1b4 with catch @ 0336dea0
                       catch() { ... } // from try @ 0336e1c0 with catch @ 0336dea0
                       catch() { ... } // from try @ 0336e284 with catch @ 0336dea0 */
  if ((LMEMJBOBHBE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<LMEMJBOBHBE>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_LMEMJBOBHBE__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<LMEMJBOBHBE>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<LMEMJBOBHBE>__ctor__);
  LMEMJBOBHBE_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(LMEMJBOBHBE_TypeInfo->static_fields,__this);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x326DF20]
// LMEMJBOBHBE$$Equals @ RVA 0x326DF20

bool LMEMJBOBHBE__Equals(LMEMJBOBHBE_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045671ff & 1) == 0) {
    FUN_01bab630(&LMEMJBOBHBE_TypeInfo);
    DAT_045671ff = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)LMEMJBOBHBE_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = LMEMJBOBHBE__Equals(__this,(LMEMJBOBHBE_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x326DD04]
// LMEMJBOBHBE$$FFHIHGCDGAK @ RVA 0x326DD04

Google_Protobuf_Reflection_MessageDescriptor_o * LMEMJBOBHBE__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04567200 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
                    /* try { // try from 0336dd34 to 0346dd4b has its CatchHandler @ 0336d5c0 */
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04567200 = 1;
  }
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336dd4c to 0346dd6f has its CatchHandler @ 0336de9c */
    thunk_FUN_01ba7564();
  }
  if (DAT_04565c85 == '\0') {
    FUN_01bab630(&JILJJJLMDCO_TypeInfo);
    DAT_04565c85 = '\x01';
  }
                    /* try { // try from 0336dd70 to 0346dd73 has its CatchHandler @ 0336ddb4 */
                    /* try { // try from 0336dd74 to 0346dd7b has its CatchHandler @ 0336d5c0 */
  if ((JILJJJLMDCO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0336dd7c to 0346dd7f has its CatchHandler @ 0336ddb0 */
    thunk_FUN_01ba7564();
                    /* try { // try from 0336dd80 to 0346dd83 has its CatchHandler @ 0336dda0 */
  }
                    /* try { // try from 0336dd84 to 0346dd8b has its CatchHandler @ 0336dd9c */
  pGVar4 = JILJJJLMDCO_TypeInfo->static_fields->GPNOKFJEHKO;
                    /* catch() { ... } // from try @ 0336dc1c with catch @ 0336dd8c
                       try { // try from 0336dd8c to 0346ddf3 has its CatchHandler @ 0336d5c0 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0336d8c8 with catch @ 0336dd98 */
                    /* catch() { ... } // from try @ 0336dd84 with catch @ 0336dd9c */
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0336dd80 with catch @ 0336dda0 */
                    /* catch() { ... } // from try @ 0336d8dc with catch @ 0336dda4 */
  uVar6 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 0336dad4 with catch @ 0336dda8 */
                    /* catch() { ... } // from try @ 0336dac0 with catch @ 0336ddac */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0336dd7c with catch @ 0336ddb0 */
                    /* catch() { ... } // from try @ 0336dd70 with catch @ 0336ddb4 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0336daf4 with catch @ 0336ddb8 */
                    /* catch() { ... } // from try @ 0336d89c with catch @ 0336ddbc */
                    /* catch() { ... } // from try @ 0336d888 with catch @ 0336ddc0 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_0336ddec;
      }
                    /* catch() { ... } // from try @ 0336d8ac with catch @ 0336ddc4 */
      uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 0336d86c with catch @ 0336ddc8 */
      piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0336dcc4 with catch @ 0336ddcc */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 0336d878 with catch @ 0336ddd0 */
                    /* catch() { ... } // from try @ 0336d804 with catch @ 0336ddd4 */
                    /* catch() { ... } // from try @ 0336d7a8 with catch @ 0336ddd8 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
                    /* catch() { ... } // from try @ 0336dcbc with catch @ 0336dddc */
LAB_0336ddec:
                    /* try { // try from 0336ddf4 to 0346ddf7 has its CatchHandler @ 0336de08 */
                    /* WARNING: Could not recover jumptable at 0x0336de00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,2,pVVar2->method);
  return pGVar3;
}


// ===== public string DGDDIIMMPEL()  [RVA 0x326DF84]
// LMEMJBOBHBE$$DGDDIIMMPEL @ RVA 0x326DF84

System_String_o * LMEMJBOBHBE__DGDDIIMMPEL(LMEMJBOBHBE_o *__this,MethodInfo *method)

{
  return (__this->fields).MAHGAIJBBHF;
}


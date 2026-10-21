// DPEEIIAMANO$$MEOPENGPLPL @ RVA 0x3313DB4

System_Nullable_DateTime__o DPEEIIAMANO__MEOPENGPLPL(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  System_String_o *s;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  System_Collections_Generic_IDictionary_string__object__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IDictionary_string__object__o *pSVar8;
  System_Nullable_DateTime__o *pSVar9;
  undefined1 auVar10 [16];
  System_Nullable_DateTime__o __this_00;
  undefined8 local_48;
  uint64_t uStack_40;
  System_DateTime_o local_38;
  System_String_o *local_28;
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_045677c8 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&string_TypeInfo);
    auVar10 = FUN_01bab630(&StringLiteral_17074);
    DAT_045677c8 = 1;
  }
  uVar2 = StringLiteral_17074;
  local_28 = (System_String_o *)0x0;
  local_38.fields._dateData = (System_DateTime_Fields)0;
  pSVar9 = &(__this->fields).GHKNMEMMBDB;
  if ((pSVar9->fields).hasValue == false) {
    pSVar8 = (__this->fields).IECPOKCOKIC;
    if (pSVar8 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
    }
    pSVar5 = pSVar8->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar4 = pSVar5->vtable + (*piVar7 + 7);
          goto LAB_03413ebc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(pSVar8,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7);
LAB_03413ebc:
    method_00 = pVVar4->method;
                    /* try { // try from 03413ec4 to 03513ec7 has its CatchHandler @ 03413f38 */
    uVar6 = (*pVVar4->methodPtr)(pSVar8,uVar2,&local_28);
    if ((local_28 != (System_String_o *)0x0) && ((uVar6 & 1) != 0)) {
                    /* try { // try from 03413ee0 to 03513ef7 has its CatchHandler @ 03413fb0 */
      if (local_28->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
                    /* try { // try from 03413ef8 to 03513eff has its CatchHandler @ 03413478 */
      bVar3 = System_String__IsNullOrWhiteSpace(local_28,(MethodInfo *)0x0);
      s = local_28;
                    /* try { // try from 03413f00 to 03513f03 has its CatchHandler @ 03413f30 */
      if (!bVar3) {
                    /* try { // try from 03413f04 to 03513f0b has its CatchHandler @ 03413f2c */
                    /* try { // try from 03413f0c to 03513f13 has its CatchHandler @ 03413fb0 */
                    /* catch() { ... } // from try @ 03413bc0 with catch @ 03413f14
                       try { // try from 03413f14 to 03513f57 has its CatchHandler @ 03413478 */
                    /* catch() { ... } // from try @ 03413c50 with catch @ 03413f18 */
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03413cb4 with catch @ 03413f1c */
          thunk_FUN_01ba7564();
        }
        if (s != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 03413734 with catch @ 03413f28 */
                    /* catch() { ... } // from try @ 03413f04 with catch @ 03413f2c */
                    /* catch() { ... } // from try @ 03413f00 with catch @ 03413f30 */
          if (s->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(s);
          }
        }
                    /* catch() { ... } // from try @ 03413c30 with catch @ 03413f34 */
                    /* catch() { ... } // from try @ 03413ec4 with catch @ 03413f38 */
                    /* catch() { ... } // from try @ 03413718 with catch @ 03413f3c */
                    /* catch() { ... } // from try @ 034136fc with catch @ 03413f40 */
        bVar3 = System_DateTime__TryParse(s,&local_38,(MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 03413f58 to 03513f5b has its CatchHandler @ 03413f84 */
          local_48 = 0;
          uStack_40 = 0;
          __this_00.fields.value.fields._dateData = local_38.fields._dateData;
          __this_00.fields._0_8_ = &local_48;
                    /* try { // try from 03413f5c to 03513f93 has its CatchHandler @ 03413478 */
          System_Nullable<DateTime>___ctor
                    (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData
                     ,(MethodInfo_27F61A0 *)method_00);
          (__this->fields).GHKNMEMMBDB.fields.value.fields._dateData = uStack_40;
          *(undefined8 *)&pSVar9->fields = local_48;
        }
      }
    }
  }
  return (System_Nullable_DateTime__o)(__this->fields).JFNKGDHEGBG.fields;
}


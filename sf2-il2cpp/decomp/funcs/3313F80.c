// DPEEIIAMANO$$LPFMPDCPBDI @ RVA 0x3313F80

System_DateTime_o DPEEIIAMANO__LPFMPDCPBDI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  System_String_o *s;
  VirtualInvokeData *pVVar3;
  System_DateTime_Fields SVar4;
  System_DateTime_o SVar5;
  System_DateTime_Fields in_x2;
  MethodInfo *method_00;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Nullable_DateTime__o *pSVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  undefined1 auVar11 [16];
  System_Nullable_DateTime__o __this_00;
  System_Nullable_DateTime__o __this_01;
  undefined8 local_38;
  uint64_t uStack_30;
  System_String_o *local_28;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
                    /* catch() { ... } // from try @ 03413f58 with catch @ 03413f84 */
                    /* try { // try from 03413f94 to 03513f9b has its CatchHandler @ 03413fb0 */
  if ((DAT_045677c9 & 1) == 0) {
                    /* try { // try from 03413f9c to 03513fa7 has its CatchHandler @ 03413478 */
    FUN_01bab630(&System_DateTime_TypeInfo);
                    /* try { // try from 03413fa8 to 03513faf has its CatchHandler @ 03413fb0 */
                    /* catch() { ... } // from try @ 03413ee0 with catch @ 03413fb0
                       catch() { ... } // from try @ 03413f0c with catch @ 03413fb0
                       catch() { ... } // from try @ 03413f94 with catch @ 03413fb0
                       catch() { ... } // from try @ 03413fa8 with catch @ 03413fb0 */
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    auVar11 = FUN_01bab630(&StringLiteral_19029);
    DAT_045677c9 = 1;
  }
  uVar2 = StringLiteral_19029;
  local_28 = (System_String_o *)0x0;
  pSVar9 = &(__this->fields).JFNKGDHEGBG;
  if ((pSVar9->fields).hasValue == false) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar3 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03414080;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03414080:
    method_00 = pVVar3->method;
    uVar7 = (*pVVar3->methodPtr)(pSVar10,uVar2,&local_28);
    s = local_28;
    if ((uVar7 & 1) == 0) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    }
    else {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((s != (System_String_o *)0x0) && (s->klass != string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(s);
      }
      SVar4._dateData = (uint64_t)System_DateTime__Parse(s,(MethodInfo *)0x0);
    }
    local_38 = 0;
    uStack_30 = 0;
    __this_00.fields.value.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)SVar4._dateData;
    __this_00.fields._0_8_ = &local_38;
    in_x2._dateData = Method_System_Nullable<DateTime>__ctor__._dateData;
    System_Nullable<DateTime>___ctor
              (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,
               (MethodInfo_27F61A0 *)method_00);
    (__this->fields).JFNKGDHEGBG.fields.value.fields._dateData = uStack_30;
    *(undefined8 *)&pSVar9->fields = local_38;
  }
  __this_01.fields.value.fields._dateData =
       (System_DateTime_Fields)
       (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
  __this_01.fields._0_8_ = pSVar9;
  SVar5 = System_Nullable<DateTime>__get_Value(__this_01,(MethodInfo_27F61B8 *)in_x2._dateData);
  return (System_DateTime_o)SVar5.fields._dateData;
}


// LHEANFBMAAI$$MBLOPJIFOMC @ RVA 0x31AF41C

void LHEANFBMAAI__MBLOPJIFOMC(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_o *pSVar2;
  long lVar3;
  System_Object_array *args;
  
  if ((DAT_04566b71 & 1) == 0) {
                    /* try { // try from 032af43c to 033af43f has its CatchHandler @ 032af5b8 */
    FUN_01bab630(&Method_System_Array_Empty<object>__);
                    /* try { // try from 032af444 to 033af46b has its CatchHandler @ 032af5d0 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&LHEANFBMAAI_TypeInfo);
    FUN_01bab630(&StringLiteral_15450);
    DAT_04566b71 = 1;
  }
                    /* try { // try from 032af470 to 033af497 has its CatchHandler @ 032af5c8 */
  pSVar2 = LHEANFBMAAI_TypeInfo->static_fields->OBDBCPILHKI;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
  }
  lVar1 = Method_System_Array_Empty<object>__;
                    /* try { // try from 032af49c to 033af4c3 has its CatchHandler @ 032af5cc */
  lVar3 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
                    /* try { // try from 032af4dc to 033af4df has its CatchHandler @ 032af5b4 */
                    /* try { // try from 032af4e0 to 033af4ef has its CatchHandler @ 032af598 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
                    /* try { // try from 032af4f4 to 033af4ff has its CatchHandler @ 032af59c */
  args = (System_Object_array *)**(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 032af500 to 033af50f has its CatchHandler @ 032af590 */
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
                    /* try { // try from 032af514 to 033af51f has its CatchHandler @ 032af5a0 */
  UnityEngine_Debug__LogFormat(StringLiteral_15450,args,(MethodInfo *)0x0);
  LHEANFBMAAI__DGLJCGNHLIG(method_00);
                    /* try { // try from 032af520 to 033af56b has its CatchHandler @ 032af268 */
  LHEANFBMAAI__IKAAFAICDMD(method_01);
  return;
}


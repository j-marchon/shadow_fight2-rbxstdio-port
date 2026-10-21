// DebugSimpleScroll$$Update @ RVA 0x3594F10

void DebugSimpleScroll__Update(DebugSimpleScroll_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  byte bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Text_o *pUVar5;
  
  if ((DAT_04568d97 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_LabelAlias_TypeInfo);
    FUN_01bab630(&StringLiteral_8665);
    FUN_01bab630(&StringLiteral_12197);
    FUN_01bab630(&StringLiteral_9681);
    FUN_01bab630(&StringLiteral_9675);
                    /* try { // try from 03694f68 to 03794f6f has its CatchHandler @ 036952c4 */
    DAT_04568d97 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields).LBCNOLDLOAJ;
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method);
  if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_036950a4;
                    /* try { // try from 03694f88 to 03794f8f has its CatchHandler @ 036952bc */
                    /* try { // try from 03694fa4 to 03794fab has its CatchHandler @ 03695050 */
  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_LabelAlias_TypeInfo->_2).naturalAligment;
    if ((pUVar5->klass->_2).naturalAligment < bVar2) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
    else if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
             (Il2CppClass *)Nekki_SF2_GUI_LabelAlias_TypeInfo) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
  }
  puVar1 = &StringLiteral_9675;
  if (*(char *)&(pNVar3->fields)._visibilityChecker != '\0') {
    puVar1 = &StringLiteral_9681;
  }
  pSVar4 = System_String__Concat(StringLiteral_12197,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                    /* try { // try from 03694ff4 to 0379500f has its CatchHandler @ 0369504c */
  if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) goto LAB_036950a4;
  (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
            (pUVar5,pSVar4,(pUVar5->klass->vtable)._75_set_text.method);
  pUVar5 = (__this->fields).JGMNBBKLENN;
  pNVar3 = DebugSimpleScroll__CKPKMBBIMOP(__this,method_00);
  if (pNVar3 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_036950a4;
                    /* try { // try from 03695020 to 03795027 has its CatchHandler @ 036952b8 */
  if (pUVar5 == (UnityEngine_UI_Text_o *)0x0) {
LAB_0369504c:
                    /* catch() { ... } // from try @ 03694ff4 with catch @ 0369504c */
    pUVar5 = (UnityEngine_UI_Text_o *)0x0;
                    /* catch() { ... } // from try @ 03694fa4 with catch @ 03695050 */
  }
  else {
                    /* try { // try from 0369503c to 03795047 has its CatchHandler @ 03695054 */
    bVar2 = (Nekki_SF2_GUI_LabelAlias_TypeInfo->_2).naturalAligment;
                    /* try { // try from 03695048 to 0379506f has its CatchHandler @ 0369430c */
    if ((pUVar5->klass->_2).naturalAligment < bVar2) goto LAB_0369504c;
                    /* catch() { ... } // from try @ 0369503c with catch @ 03695054 */
    if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_LabelAlias_TypeInfo) {
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
    }
  }
  puVar1 = &StringLiteral_9675;
  if (*(char *)((long)&(pNVar3->fields)._visibilityChecker + 1) != '\0') {
    puVar1 = &StringLiteral_9681;
  }
                    /* try { // try from 03695070 to 03795073 has its CatchHandler @ 036952a4 */
                    /* try { // try from 03695074 to 0379527b has its CatchHandler @ 0369430c */
  pSVar4 = System_String__Concat(StringLiteral_8665,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036950a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
              (pUVar5,pSVar4,(pUVar5->klass->vtable)._75_set_text.method);
    return;
  }
LAB_036950a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCellSeparator$$NOPJKPNLKNA @ RVA 0x33A0AE8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator__NOPJKPNLKNA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCellSeparator_o *__this,
               DPDNFOCBGGD_o *DKMMBMBMJBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  float local_24;
  
  if ((DAT_04567cb6 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&OPMDFMOAMKB_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_4409);
    FUN_01bab630(&StringLiteral_10888);
    FUN_01bab630(&StringLiteral_11818);
    FUN_01bab630(&StringLiteral_10889);
    FUN_01bab630(&StringLiteral_10891);
    FUN_01bab630(&StringLiteral_10890);
    DAT_04567cb6 = 1;
  }
  if (DKMMBMBMJBO == (DPDNFOCBGGD_o *)0x0) {
LAB_034a0bcc:
                    /* try { // try from 034a0bcc to 035a0bd3 has its CatchHandler @ 034a116c */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11818,(MethodInfo *)0x0);
    return;
  }
  bVar1 = (OPMDFMOAMKB_TypeInfo->_2).naturalAligment;
  if (((DKMMBMBMJBO->klass->_2).naturalAligment < bVar1) ||
     ((DKMMBMBMJBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)OPMDFMOAMKB_TypeInfo)) goto LAB_034a0bcc;
                    /* try { // try from 034a0c14 to 035a0c1f has its CatchHandler @ 034a1158 */
  switch(*(undefined4 *)&DKMMBMBMJBO->field_0x14) {
  case 0:
    __this_00 = (__this->fields)._background;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034a0da0;
    puVar8 = &StringLiteral_10888;
                    /* try { // try from 034a0c3c to 035a0c4b has its CatchHandler @ 034a1124 */
    break;
  case 1:
    __this_00 = (__this->fields)._background;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034a0da0;
    puVar8 = &StringLiteral_10889;
                    /* try { // try from 034a0c50 to 035a0c5b has its CatchHandler @ 034a1130 */
    break;
  case 2:
    __this_00 = (__this->fields)._background;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034a0da0;
                    /* try { // try from 034a0c60 to 035a0c67 has its CatchHandler @ 034a1134 */
    puVar8 = &StringLiteral_10890;
    break;
  case 3:
    __this_00 = (__this->fields)._background;
                    /* try { // try from 034a0c6c to 035a0c73 has its CatchHandler @ 034a112c */
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_034a0da0;
    puVar8 = &StringLiteral_10891;
    break;
  default:
    goto switchD_034a0c28_default;
  }
                    /* try { // try from 034a0c78 to 035a0c83 has its CatchHandler @ 034a1128 */
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (__this_00,(System_String_o *)*puVar8,(MethodInfo *)0x0);
switchD_034a0c28_default:
                    /* try { // try from 034a0c88 to 035a0c8f has its CatchHandler @ 034a1138 */
  if (DKMMBMBMJBO[1].klass != (DPDNFOCBGGD_c *)0x0) {
                    /* try { // try from 034a0c94 to 035a0c9f has its CatchHandler @ 034a1108 */
    local_24 = *(float *)((long)&((DKMMBMBMJBO[1].klass)->_1).name + 4) * 100.0;
    pSVar3 = System_Single__ToString(local_24,(MethodInfo *)&local_24);
    pNVar12 = (__this->fields)._text;
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = FUN_01bab718(string___TypeInfo,1);
                    /* try { // try from 034a0ce4 to 035a0cef has its CatchHandler @ 034a10c0 */
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 034a0cf4 to 035a0cfb has its CatchHandler @ 034a10f4 */
      *(undefined8 *)(lVar5 + 0x20) = pSVar3;
                    /* try { // try from 034a0d00 to 035a0d0b has its CatchHandler @ 034a1100 */
      thunk_FUN_01c20e04((undefined8 *)(lVar5 + 0x20),pSVar3);
      uVar7 = StringLiteral_4409;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar2._0_1_ = (pIVar9->_2).rank;
        uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
                    /* try { // try from 034a0d10 to 035a0d1f has its CatchHandler @ 034a10dc */
        uVar10 = (ulong)uVar2;
                    /* try { // try from 034a0d24 to 035a0d2f has its CatchHandler @ 034a1120 */
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_034a0d6c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034a0d6c:
                    /* try { // try from 034a0d74 to 035a0d83 has its CatchHandler @ 034a10bc */
        uVar7 = (*pVVar6->methodPtr)(pIVar4,uVar7,lVar5,pVVar6->method);
        if (pNVar12 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 034a0d88 to 035a0d8f has its CatchHandler @ 034a10e8 */
                    /* try { // try from 034a0d94 to 035a0d9b has its CatchHandler @ 034a110c */
          (*(pNVar12->klass->vtable)._75_set_text.methodPtr)
                    (pNVar12,uVar7,(pNVar12->klass->vtable)._75_set_text.method);
                    /* try { // try from 034a0bf8 to 035a0c0b has its CatchHandler @ 034a1170 */
          return;
        }
      }
    }
  }
LAB_034a0da0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a0da0 to 035a0dab has its CatchHandler @ 034a10ec */
  FUN_01bab8c8();
}


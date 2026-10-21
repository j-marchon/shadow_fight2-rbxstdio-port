// Nekki.SF2.GUI.TextPic$$CGDJKDDKKKC @ RVA 0x30B5D7C

int32_t Nekki_SF2_GUI_TextPic__CGDJKDDKKKC
                  (Nekki_SF2_GUI_TextPic_o *__this,UnityEngine_Vector2_o *DOPCACEJKOG,
                  MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  float fVar11;
  UnityEngine_Vector2_Fields UVar12;
  
  method_00 = (MethodInfo *)DOPCACEJKOG;
  if ((DAT_04566217 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    DAT_04566217 = 1;
    method_00 = extraout_x1;
  }
  UVar12 = (UnityEngine_Vector2_Fields)
           Nekki_SF2_GUI_TextPic__get_GenerationGeometryBounds(__this,method_00);
  DOPCACEJKOG->fields = UVar12;
  bVar3 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                    (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
  if (bVar3) {
    pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 031b5e18 to 032b5e1b has its CatchHandler @ 031b5e64 */
    pIVar8 = pIVar6->klass;
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
                    /* try { // try from 031b5e1c to 032b5e37 has its CatchHandler @ 031b57ec */
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 031b5e38 to 032b5e47 has its CatchHandler @ 031b5e54 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* catch() { ... } // from try @ 031b5d10 with catch @ 031b5e6c */
                    /* catch() { ... } // from try @ 031b5cc0 with catch @ 031b5e70 */
                    /* catch() { ... } // from try @ 031b5cb4 with catch @ 031b5e74 */
                    /* catch() { ... } // from try @ 031b5cd4 with catch @ 031b5e78 */
          pVVar7 = pIVar8->vtable + (*piVar10 + 0xd);
          goto LAB_031b5e7c;
        }
        uVar9 = uVar9 - 1;
                    /* try { // try from 031b5e48 to 032b5e57 has its CatchHandler @ 031b57ec */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 031b5a54 with catch @ 031b5e50 */
                    /* catch() { ... } // from try @ 031b5e38 with catch @ 031b5e54 */
                    /* try { // try from 031b5e58 to 032b5e5b has its CatchHandler @ 031b5f38 */
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,DFLJPJMIMHI_TypeInfo,0xd);
                    /* try { // try from 031b5e5c to 032b5eab has its CatchHandler @ 031b57ec */
LAB_031b5e7c:
                    /* catch() { ... } // from try @ 031b5c7c with catch @ 031b5e7c */
                    /* catch() { ... } // from try @ 031b5c38 with catch @ 031b5e80 */
                    /* catch() { ... } // from try @ 031b5c50 with catch @ 031b5e84 */
    fVar11 = (float)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
                    /* catch() { ... } // from try @ 031b5c88 with catch @ 031b5e88 */
  }
  else {
    fVar11 = 1.0;
                    /* catch() { ... } // from try @ 031b5e18 with catch @ 031b5e64 */
                    /* catch() { ... } // from try @ 031b5d04 with catch @ 031b5e68 */
  }
                    /* catch() { ... } // from try @ 031b5c24 with catch @ 031b5e8c */
                    /* catch() { ... } // from try @ 031b5bf4 with catch @ 031b5e90 */
                    /* catch() { ... } // from try @ 031b5b90 with catch @ 031b5e94 */
  iVar4 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  fVar11 = UVar12.y * fVar11;
                    /* try { // try from 031b5eac to 032b5eaf has its CatchHandler @ 031b5ec4 */
  iVar1 = -0x80000000;
  if (fVar11 != INFINITY) {
    iVar1 = (int)fVar11;
  }
  if (iVar4 < 1) {
    iVar5 = UnityEngine_UI_Text__get_resizeTextMaxSize
                      ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  }
  else {
                    /* catch() { ... } // from try @ 031b5eac with catch @ 031b5ec4 */
    iVar5 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  }
  if (iVar5 <= iVar1) {
    iVar1 = iVar5;
  }
  return iVar1;
}


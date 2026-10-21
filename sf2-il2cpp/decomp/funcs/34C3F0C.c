// Nekki.SF2.GUI.Shop.PropertiesPanelContent$$GKPCOMLBGCO @ RVA 0x34C3F0C

void Nekki_SF2_GUI_Shop_PropertiesPanelContent__GKPCOMLBGCO
               (Nekki_SF2_GUI_Shop_PropertiesPanelContent_o *__this,int64_t CNHMFABDCHB,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  IconLabelButton_o *__this_00;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  int32_t BCDLHKNFNDA;
  long lVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  
                    /* try { // try from 035c3f18 to 036c3fa3 has its CatchHandler @ 035c3d84 */
  if ((DAT_04568625 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_1223);
    FUN_01bab630(&StringLiteral_13795);
    FUN_01bab630(&StringLiteral_2086);
                    /* try { // try from 035c3fa4 to 036c3fab has its CatchHandler @ 035c3fc4 */
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 035c3fac to 036c3faf has its CatchHandler @ 035c3d84 */
                    /* try { // try from 035c3fb0 to 036c3fb3 has its CatchHandler @ 035c3fbc */
    DAT_04568625 = 1;
  }
                    /* try { // try from 035c3fb4 to 036c3fdb has its CatchHandler @ 035c3d84 */
  __this_00 = (__this->fields)._SkipDeliveryForADButton;
  if (__this_00 != (IconLabelButton_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3fb0 with catch @ 035c3fbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3f08 with catch @ 035c3fc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3fa4 with catch @ 035c3fc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3ea8 with catch @ 035c3fc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3e4c with catch @ 035c3fcc
                        */
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponentInChildren<object>
                  ((UnityEngine_Component_o *)__this_00,
                   Method_UnityEngine_Component_GetComponentInChildren<LabelAlias>__);
                    /* try { // try from 035c3fdc to 036c3fdf has its CatchHandler @ 035c3ff0 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 035c3fdc with catch @ 035c3ff0 */
                    /* try { // try from 035c3ff8 to 036c405f has its CatchHandler @ 035c4074 */
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    BCDLHKNFNDA = 3;
    if (0x1517f < CNHMFABDCHB) {
      BCDLHKNFNDA = 4;
    }
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar5 = Method_System_Array_Empty<string>__;
    lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar8 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar8 = *(long *)(lVar5 + 0x38);
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01b81620();
    }
    if (*(int *)(lVar8 + 0xe0) == 0) {
                    /* try { // try from 035c4060 to 036c406b has its CatchHandler @ 035c3d84 */
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
                    /* try { // try from 035c406c to 036c4073 has its CatchHandler @ 035c4074 */
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c3ff8 with catch @ 035c4074
                       catch(type#2 @ 00000000) { ... } // from try @ 035c406c with catch @ 035c4074
                        */
      lVar5 = FUN_01b81620();
    }
    uVar2 = StringLiteral_13795;
                    /* try { // try from 035c4078 to 036c4183 has its CatchHandler @ 035c4078
                       catch() { ... } // from try @ 035c4078 with catch @ 035c4078
                       catch() { ... } // from try @ 035c42a8 with catch @ 035c4078
                       catch() { ... } // from try @ 035c4350 with catch @ 035c4078
                       catch() { ... } // from try @ 035c4358 with catch @ 035c4078
                       catch() { ... } // from try @ 035c441c with catch @ 035c4078 */
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar9 = pIVar4->klass;
      uVar12 = **(undefined8 **)(lVar5 + 0xb8);
      uVar1._0_1_ = (pIVar9->_2).rank;
      uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
            goto LAB_035c4100;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035c4100:
      pSVar7 = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,uVar12,pVVar6->method);
      pSVar7 = System_String__Concat(pSVar7,StringLiteral_167,(MethodInfo *)0x0);
                    /* try { // try from 035c4184 to 036c41ab has its CatchHandler @ 035c4384 */
      pSVar7 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                         (CNHMFABDCHB,true,true,true,0x1517f < CNHMFABDCHB,false,false,
                          StringLiteral_2086,pSVar7,false,true,true,true,false,StringLiteral_1,
                          StringLiteral_1,StringLiteral_1,BCDLHKNFNDA,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat(StringLiteral_1223,pSVar7,(MethodInfo *)0x0);
      if (x != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 035c41e0 to 036c420b has its CatchHandler @ 035c4380 */
                    /* WARNING: Could not recover jumptable at 0x035c41e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*x->klass[4]._1.gc_desc)(x,pSVar7,x->klass[4]._1.name);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$HEFGCBGBDGP @ RVA 0x3100E30

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HEFGCBGBDGP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str3;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  int32_t *piVar12;
  undefined8 uVar13;
  
  if ((DAT_045664c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&StringLiteral_2434);
    FUN_01bab630(&StringLiteral_167);
                    /* try { // try from 03200e8c to 03300f4f has its CatchHandler @ 03200e8c
                       catch() { ... } // from try @ 03200e8c with catch @ 03200e8c
                       catch() { ... } // from try @ 03200fbc with catch @ 03200e8c
                       catch() { ... } // from try @ 03200ff4 with catch @ 03200e8c
                       catch() { ... } // from try @ 03201000 with catch @ 03200e8c
                       catch() { ... } // from try @ 03201038 with catch @ 03200e8c
                       catch() { ... } // from try @ 0320106c with catch @ 03200e8c */
    FUN_01bab630(&StringLiteral_8370);
    FUN_01bab630(&StringLiteral_21451);
    DAT_045664c8 = 1;
  }
  pNVar4 = (__this->fields)._prevSeasonLabel;
  if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._prevSeasonLabel;
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar6 = Method_System_Array_Empty<string>__;
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar6 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    uVar3 = StringLiteral_21451;
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar5->klass;
                    /* try { // try from 03200f50 to 03300f57 has its CatchHandler @ 0320101c */
      uVar13 = **(undefined8 **)(lVar6 + 0xb8);
      uVar1._0_1_ = (pIVar10->_2).rank;
      uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
        do {
                    /* try { // try from 03200f6c to 03300f77 has its CatchHandler @ 03201014 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
            goto LAB_03200fa4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
                    /* try { // try from 03200f80 to 03300f8f has its CatchHandler @ 03201010 */
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03200fa4:
                    /* try { // try from 03200fb0 to 03300fbb has its CatchHandler @ 03201004 */
      pSVar8 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar3,uVar13,pVVar7->method);
                    /* try { // try from 03200fbc to 03300feb has its CatchHandler @ 03200e8c */
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = Method_System_Array_Empty<string>__;
      lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar9 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar9 = *(long *)(lVar6 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
                    /* try { // try from 03200fec to 03300fef has its CatchHandler @ 03201018 */
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
                    /* try { // try from 03200ff0 to 03300ff3 has its CatchHandler @ 0320100c */
        lVar9 = FUN_01b81620();
      }
                    /* try { // try from 03200ff4 to 03300ff7 has its CatchHandler @ 03200e8c */
                    /* try { // try from 03200ff8 to 03300ffb has its CatchHandler @ 03201008 */
      if (*(int *)(lVar9 + 0xe0) == 0) {
                    /* try { // try from 03200ffc to 03300fff has its CatchHandler @ 03201000 */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ffc with catch @ 03201000
                       try { // try from 03201000 to 03301033 has its CatchHandler @ 03200e8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200fb0 with catch @ 03201004
                        */
      lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ff8 with catch @ 03201008
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200ff0 with catch @ 0320100c
                        */
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f80 with catch @ 03201010
                        */
        lVar6 = FUN_01b81620();
      }
      uVar3 = StringLiteral_8370;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f6c with catch @ 03201014
                        */
      if (pIVar5 != (Il2CppObject *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200fec with catch @ 03201018
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03200f50 with catch @ 0320101c
                        */
        pIVar10 = pIVar5->klass;
                    /* try { // try from 03201034 to 03301037 has its CatchHandler @ 0320105c */
        uVar13 = **(undefined8 **)(lVar6 + 0xb8);
        uVar2._0_1_ = (pIVar10->_2).rank;
        uVar2._1_1_ = (pIVar10->_2).minimumAlignment;
                    /* try { // try from 03201038 to 03301063 has its CatchHandler @ 03200e8c */
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pIVar10->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 03201034 with catch @ 0320105c */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03201064 with catch @ 03201080
                       catch(type#2 @ 00000000) { ... } // from try @ 03201078 with catch @ 03201080
                        */
                    /* try { // try from 03201084 to 03301b83 has its CatchHandler @ 03201084
                       catch() { ... } // from try @ 03201084 with catch @ 03201084
                       catch() { ... } // from try @ 03201d50 with catch @ 03201084
                       catch() { ... } // from try @ 03202050 with catch @ 03201084
                       catch() { ... } // from try @ 03202108 with catch @ 03201084
                       catch() { ... } // from try @ 03202128 with catch @ 03201084
                       catch() { ... } // from try @ 03202134 with catch @ 03201084
                       catch() { ... } // from try @ 03202258 with catch @ 03201084
                       catch() { ... } // from try @ 03202314 with catch @ 03201084 */
              pVVar7 = pIVar10->vtable + (*piVar12 + 0xc);
              goto LAB_0320108c;
            }
            uVar11 = uVar11 - 1;
                    /* try { // try from 03201064 to 0330106b has its CatchHandler @ 03201080 */
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
                    /* try { // try from 0320106c to 03301077 has its CatchHandler @ 03200e8c */
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
                    /* try { // try from 03201078 to 0330107f has its CatchHandler @ 03201080 */
LAB_0320108c:
        str3 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar3,uVar13,pVVar7->method);
        pSVar8 = System_String__Concat
                           (StringLiteral_2434,pSVar8,StringLiteral_167,str3,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032010e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar4->klass->vtable)._75_set_text.methodPtr)
                    (pNVar4,pSVar8,(pNVar4->klass->vtable)._75_set_text.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


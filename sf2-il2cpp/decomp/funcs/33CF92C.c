// NHOILKKCIMI$$FAENACIILOH @ RVA 0x33CF92C

void NHOILKKCIMI__FAENACIILOH
               (NHOILKKCIMI_o *__this,NHOILKKCIMI_BGFGPENCLEA_o *FEPLAGOGJNL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  KLPJOKOFLJD_o *__this_00;
  Newtonsoft_Json_Linq_JObject_o *__this_01;
  Newtonsoft_Json_Linq_JToken_o *pNVar4;
  System_Exception_o *__this_02;
  VirtualInvokeData *pVVar5;
  MethodInfo *in_x4;
  EOJBGBDLBKJ_c *pEVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  EOJBGBDLBKJ_o *pEVar10;
  undefined8 local_60;
  NHOILKKCIMI_BGFGPENCLEA_o **ppNStack_58;
  undefined4 *local_50;
  NHOILKKCIMI_o **ppNStack_48;
  char *local_40;
  undefined4 local_38;
  char local_34 [4];
  NHOILKKCIMI_BGFGPENCLEA_o *local_30;
  NHOILKKCIMI_o *local_28;
  
  local_30 = FEPLAGOGJNL;
  local_28 = __this;
  if ((DAT_04567e52 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&System_Exception_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_Linq_JObject_TypeInfo);
    FUN_01bab630(&Newtonsoft_Json_Linq_JToken_TypeInfo);
    FUN_01bab630(&StringLiteral_21600);
    FUN_01bab630(&StringLiteral_8992);
    FUN_01bab630(&StringLiteral_19767);
    DAT_04567e52 = 1;
  }
  ppNStack_58 = &local_30;
  local_50 = &local_38;
  ppNStack_48 = &local_28;
  local_40 = local_34;
  local_38 = 0;
  local_34[0] = '\x01';
  local_60 = 0;
  if (FEPLAGOGJNL == (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppSVar9 = &(FEPLAGOGJNL->fields).JLGDKAJFDNB;
  pSVar3 = NHOILKKCIMI__CIHMPKNAGDI
                     (__this,(FEPLAGOGJNL->fields).OFONONEILPE,*ppSVar9,(__this->fields).CIENNBPAEGH
                      ,in_x4);
  *ppSVar9 = pSVar3;
  thunk_FUN_01c20e04(ppSVar9);
  FUN_01b492c8(&local_60);
  if (local_34[0] == '\0') {
    return;
  }
  if ((local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) &&
     (__this_00 = (local_28->fields).GAHDPKPIMHK, __this_00 != (KLPJOKOFLJD_o *)0x0)) {
    bVar2 = KLPJOKOFLJD__LFENGGKOJDO
                      (__this_00,(local_30->fields).OFONONEILPE,(local_30->fields).JLGDKAJFDNB,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_01 = (Newtonsoft_Json_Linq_JObject_o *)
                thunk_FUN_01bda818(Newtonsoft_Json_Linq_JObject_TypeInfo);
    Newtonsoft_Json_Linq_JObject___ctor(__this_01,(MethodInfo *)0x0);
    if (local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) {
      pSVar3 = (local_30->fields).OFONONEILPE;
      if ((Newtonsoft_Json_Linq_JToken_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(pSVar3,(MethodInfo *)0x0);
      if ((__this_01 != (Newtonsoft_Json_Linq_JObject_o *)0x0) &&
         (Newtonsoft_Json_Linq_JObject__Add(__this_01,StringLiteral_19767,pNVar4,(MethodInfo *)0x0),
         local_30 != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0)) {
        pNVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit
                           ((local_30->fields).JLGDKAJFDNB,(MethodInfo *)0x0);
        Newtonsoft_Json_Linq_JObject__Add(__this_01,StringLiteral_21600,pNVar4,(MethodInfo *)0x0);
        pEVar10 = (local_28->fields).MOIKNMBMBBO;
        pSVar3 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        __this_02 = (System_Exception_o *)thunk_FUN_01bda818(System_Exception_TypeInfo);
        System_Exception___ctor(__this_02,pSVar3,(MethodInfo *)0x0);
        if (pEVar10 != (EOJBGBDLBKJ_o *)0x0) {
          pEVar6 = pEVar10->klass;
          uVar1._0_1_ = (pEVar6->_2).rank;
          uVar1._1_1_ = (pEVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pEVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
                pVVar5 = pEVar6->vtable + (*piVar8 + 4);
                goto LAB_034cfb80;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar10,EOJBGBDLBKJ_TypeInfo,4);
LAB_034cfb80:
          (*pVVar5->methodPtr)(pEVar10,__this_02,pVVar5->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


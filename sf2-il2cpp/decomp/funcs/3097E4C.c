// KIOBDEIAMOO$$LBEJFCJOIEE @ RVA 0x3097E4C

void KIOBDEIAMOO__LBEJFCJOIEE
               (KIOBDEIAMOO_o *__this,int32_t ACCIHBHMFPN,bool CMEPJPCDKKF,MethodInfo *method)

{
  ushort uVar1;
  KIOBDEIAMOO_EFKAFKAPHBM_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  float fVar8;
  undefined4 extraout_var;
  
  if ((DAT_045660ef & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_KIOBDEIAMOO_EFKAFKAPHBM_GIJAAOFDAMP__);
    FUN_01bab630(&KIOBDEIAMOO_EFKAFKAPHBM_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045660ef = 1;
  }
  __this_00 = (KIOBDEIAMOO_EFKAFKAPHBM_o *)thunk_FUN_01bda818(KIOBDEIAMOO_EFKAFKAPHBM_TypeInfo);
  KIOBDEIAMOO_EFKAFKAPHBM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (KIOBDEIAMOO_EFKAFKAPHBM_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    (__this_00->fields).type = ACCIHBHMFPN;
    (__this_00->fields).lockScreen = CMEPJPCDKKF;
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    fVar8 = KIOBDEIAMOO_AOGMBGAJKOD__CILLDMLPPPN((MethodInfo *)0x0);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_03197f90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03197f90:
                    /* WARNING: Could not recover jumptable at 0x03197fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(CONCAT44(extraout_var,fVar8),pPVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


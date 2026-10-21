// GGAFBEMCEIN$$LDMPHMGMJAK @ RVA 0x301C0E8

void GGAFBEMCEIN__LDMPHMGMJAK
               (GGAFBEMCEIN_o *__this,System_Action_bool__o *KMGFEDFECGO,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__o **ppSVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Action_bool__o *extraout_x1;
  System_Action_bool__o *method_00;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  method_00 = KMGFEDFECGO;
  if ((DAT_04565c16 & 1) == 0) {
                    /* try { // try from 0311c108 to 0321c10b has its CatchHandler @ 0311c354 */
                    /* try { // try from 0311c10c to 0321c113 has its CatchHandler @ 0311c360 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565c16 = 1;
    method_00 = extraout_x1;
  }
  GGAFBEMCEIN__GFAHOLHMPOM(__this,(MethodInfo *)method_00);
  ppSVar2 = &(__this->fields).JBNMABKLMAH;
  *ppSVar2 = KMGFEDFECGO;
  thunk_FUN_01c20e04(ppSVar2,KMGFEDFECGO);
  pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
  pSVar4 = GGAFBEMCEIN__EIBLHJKINEN(__this,method_01);
  if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar6 = pPVar3->klass;
  uVar1._0_1_ = (pPVar6->_2).rank;
  uVar1._1_1_ = (pPVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar5 = pPVar6->vtable + *piVar8;
        goto LAB_0311c1a0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
                    /* try { // try from 0311c180 to 0321c1a3 has its CatchHandler @ 0311c368 */
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_0311c1a0:
  pSVar4 = (System_Collections_IEnumerator_o *)(*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
  (__this->fields).NLNJKHHHELM = pSVar4;
                    /* try { // try from 0311c1b8 to 0321c1eb has its CatchHandler @ 0311c380 */
  thunk_FUN_01c20e04(&__this->fields,pSVar4);
  return;
}


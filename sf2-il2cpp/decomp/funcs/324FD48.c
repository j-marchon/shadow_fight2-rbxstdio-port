// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene.OFAPBIKIJBJ$$BLPJNINLMMF @ RVA 0x324FD48

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ__BLPJNINLMMF
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_OFAPBIKIJBJ_o *__this,Il2CppObject *data,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* catch() { ... } // from try @ 0334fbb0 with catch @ 0334fd48 */
                    /* catch() { ... } // from try @ 0334fba0 with catch @ 0334fd4c */
                    /* catch() { ... } // from try @ 0334fb80 with catch @ 0334fd50 */
                    /* catch() { ... } // from try @ 0334fb4c with catch @ 0334fd54 */
                    /* catch() { ... } // from try @ 0334fb20 with catch @ 0334fd58 */
                    /* catch() { ... } // from try @ 0334fb0c with catch @ 0334fd5c */
  if ((DAT_04567121 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* catch() { ... } // from try @ 0334fae0 with catch @ 0334fd70 */
                    /* catch() { ... } // from try @ 0334fad8 with catch @ 0334fd74 */
    DAT_04567121 = 1;
  }
                    /* catch() { ... } // from try @ 0334fa98 with catch @ 0334fd78 */
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  __this_00 = (__this->fields).__4__this;
                    /* catch() { ... } // from try @ 0334fa78 with catch @ 0334fd84 */
                    /* catch() { ... } // from try @ 0334fcc4 with catch @ 0334fd90 */
                    /* catch() { ... } // from try @ 0334fc8c with catch @ 0334fd9c */
  if ((__this_00 == (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *)0x0) ||
     (pSVar3 = Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DJDOKKJGOFJ
                         (__this_00,data,(__this->fields).slot,in_x3),
     pPVar2 == (PBAKFOBIHEG_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 0334f890 with catch @ 0334fda0 */
                    /* catch() { ... } // from try @ 0334f8b8 with catch @ 0334fda4 */
  pPVar5 = pPVar2->klass;
  uVar1._0_1_ = (pPVar5->_2).rank;
  uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 0334fc7c with catch @ 0334fda8 */
                    /* catch() { ... } // from try @ 0334fc78 with catch @ 0334fdac */
                    /* catch() { ... } // from try @ 0334f8a4 with catch @ 0334fdb0 */
  uVar6 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 0334f864 with catch @ 0334fdb4 */
                    /* catch() { ... } // from try @ 0334f87c with catch @ 0334fdb8 */
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 0334f830 with catch @ 0334fdbc */
                    /* catch() { ... } // from try @ 0334fc74 with catch @ 0334fdc0 */
    piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 0334fc68 with catch @ 0334fdc4 */
                    /* catch() { ... } // from try @ 0334f83c with catch @ 0334fdc8 */
                    /* catch() { ... } // from try @ 0334f9dc with catch @ 0334fdcc */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 0334fdf4 to 0344fdf7 has its CatchHandler @ 0334fe20 */
        pVVar4 = pPVar5->vtable + *piVar7;
        goto LAB_0334fdf8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0334fdf8:
                    /* try { // try from 0334fdf8 to 0344fe2f has its CatchHandler @ 0334f534 */
                    /* WARNING: Could not recover jumptable at 0x0334fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
  return;
}


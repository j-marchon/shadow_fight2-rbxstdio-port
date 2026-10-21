// EIABCPKDEBD$$KGPPJAHDJEH @ RVA 0x3133BFC

/* WARNING: Removing unreachable block (ram,0x03233d64) */

System_String_o * EIABCPKDEBD__KGPPJAHDJEH(System_Xml_XmlDocument_o *EPHIMGPGNPK,MethodInfo *method)

{
  ushort uVar1;
  System_Text_StringBuilder_o *__this;
  System_Xml_XmlWriterSettings_o *__this_00;
  System_Xml_XmlWriter_o *pSVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  System_Xml_XmlWriter_c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 03233c00 to 03333c03 has its CatchHandler @ 03233f7c */
                    /* try { // try from 03233c04 to 03333c13 has its CatchHandler @ 03233f88 */
                    /* try { // try from 03233c18 to 03333c23 has its CatchHandler @ 03233f8c */
  if ((DAT_045666ec & 1) == 0) {
                    /* try { // try from 03233c28 to 03333c2b has its CatchHandler @ 03233cb0 */
                    /* try { // try from 03233c30 to 03333c33 has its CatchHandler @ 03233cac */
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03233c38 to 03333c3b has its CatchHandler @ 03233ca4 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 03233c40 to 03333c4b has its CatchHandler @ 03233cb8 */
    FUN_01bab630(&System_Xml_XmlWriterSettings_TypeInfo);
                    /* try { // try from 03233c50 to 03333c53 has its CatchHandler @ 03233c98 */
    DAT_045666ec = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03233c58 to 03333c5b has its CatchHandler @ 03233c94 */
  __this = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
                    /* try { // try from 03233c60 to 03333c63 has its CatchHandler @ 03233cb4 */
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
                    /* try { // try from 03233c68 to 03333c6b has its CatchHandler @ 03233c90 */
  __this_00 = (System_Xml_XmlWriterSettings_o *)
              thunk_FUN_01bda818(System_Xml_XmlWriterSettings_TypeInfo);
                    /* try { // try from 03233c70 to 03333c73 has its CatchHandler @ 03233c8c */
                    /* try { // try from 03233c78 to 03333c7b has its CatchHandler @ 03233c88 */
  System_Xml_XmlWriterSettings___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03233c7c to 03333cd7 has its CatchHandler @ 032331f0 */
  if (__this_00 != (System_Xml_XmlWriterSettings_o *)0x0) {
                    /* catch() { ... } // from try @ 03233ab8 with catch @ 03233c80 */
                    /* catch() { ... } // from try @ 032339d4 with catch @ 03233c84 */
                    /* catch() { ... } // from try @ 03233aa4 with catch @ 03233c88
                       catch() { ... } // from try @ 03233c78 with catch @ 03233c88 */
                    /* catch() { ... } // from try @ 03233aa0 with catch @ 03233c8c
                       catch() { ... } // from try @ 03233c70 with catch @ 03233c8c */
                    /* catch() { ... } // from try @ 03233a84 with catch @ 03233c90
                       catch() { ... } // from try @ 03233c68 with catch @ 03233c90 */
                    /* catch() { ... } // from try @ 03233a38 with catch @ 03233c94
                       catch() { ... } // from try @ 03233c58 with catch @ 03233c94 */
    System_Xml_XmlWriterSettings__set_OmitXmlDeclaration(__this_00,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03233a14 with catch @ 03233c98
                       catch() { ... } // from try @ 03233c50 with catch @ 03233c98 */
                    /* catch() { ... } // from try @ 032339b4 with catch @ 03233c9c */
                    /* catch() { ... } // from try @ 032339a4 with catch @ 03233ca0 */
                    /* catch() { ... } // from try @ 03233c38 with catch @ 03233ca4 */
    System_Xml_XmlWriterSettings__set_Indent(__this_00,true,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03233984 with catch @ 03233ca8 */
                    /* catch() { ... } // from try @ 03233c30 with catch @ 03233cac */
                    /* catch() { ... } // from try @ 03233c28 with catch @ 03233cb0 */
                    /* catch() { ... } // from try @ 03233a3c with catch @ 03233cb4
                       catch() { ... } // from try @ 03233c60 with catch @ 03233cb4 */
    pSVar2 = System_Xml_XmlWriter__Create(__this,__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032339f8 with catch @ 03233cb8
                       catch() { ... } // from try @ 03233c40 with catch @ 03233cb8 */
                    /* catch() { ... } // from try @ 0323396c with catch @ 03233cbc */
    if (EPHIMGPGNPK == (System_Xml_XmlDocument_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(EPHIMGPGNPK->klass->vtable)._90_Save.methodPtr)
              (EPHIMGPGNPK,pSVar2,(EPHIMGPGNPK->klass->vtable)._90_Save.method);
                    /* try { // try from 03233cd8 to 03333cef has its CatchHandler @ 03233f4c */
    if (pSVar2 != (System_Xml_XmlWriter_o *)0x0) {
      pSVar5 = pSVar2->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
                    /* try { // try from 03233d28 to 03333d2f has its CatchHandler @ 03233f38 */
            pVVar3 = &(pSVar5->vtable)._0_Equals + *piVar7;
            goto LAB_03233d2c;
          }
                    /* try { // try from 03233d04 to 03333d07 has its CatchHandler @ 03233f48 */
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2,System_IDisposable_TypeInfo,0);
LAB_03233d2c:
                    /* try { // try from 03233d34 to 03333d67 has its CatchHandler @ 03233f34 */
      (*pVVar3->methodPtr)(pSVar2,pVVar3->method);
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03233d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar4 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


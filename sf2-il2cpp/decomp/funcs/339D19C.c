// CKMOFDBAEKH$$PLANLODIOHG @ RVA 0x339D19C

OANBNKOOJFH_o * CKMOFDBAEKH__PLANLODIOHG(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  NGJHCIGFLFD_o *__this;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = AHDGNOJPPIB;
                    /* try { // try from 0349d19c to 0359d19f has its CatchHandler @ 0349d1b8 */
                    /* try { // try from 0349d1a0 to 0359d1a3 has its CatchHandler @ 0349cfa4 */
                    /* try { // try from 0349d1a4 to 0359d1a7 has its CatchHandler @ 0349d1b4 */
                    /* try { // try from 0349d1a8 to 0359d1db has its CatchHandler @ 0349cfa4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d114 with catch @ 0349d1b0
                        */
  if ((DAT_04567c8f & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d1a4 with catch @ 0349d1b4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d19c with catch @ 0349d1b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d198 with catch @ 0349d1bc
                        */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d0c8 with catch @ 0349d1c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349d06c with catch @ 0349d1c4
                        */
    FUN_01bab630(&HACFBKCHBEJ_TypeInfo);
    FUN_01bab630(&NGJHCIGFLFD_TypeInfo);
                    /* try { // try from 0349d1dc to 0359d1df has its CatchHandler @ 0349d1ec */
    FUN_01bab630(&StringLiteral_4833);
                    /* catch() { ... } // from try @ 0349d1dc with catch @ 0349d1ec */
    FUN_01bab630(&StringLiteral_3426);
    auVar3 = FUN_01bab630(&StringLiteral_9968);
    DAT_04567c8f = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
                    /* try { // try from 0349d22c to 0359d253 has its CatchHandler @ 0349d268 */
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3426,(MethodInfo *)0x0);
    if (bVar1) {
      __this = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(HACFBKCHBEJ_TypeInfo);
      HACFBKCHBEJ___ctor((HACFBKCHBEJ_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 0349d254 to 0359d25f has its CatchHandler @ 0349cfa4 */
    }
    else {
                    /* try { // try from 0349d260 to 0359d267 has its CatchHandler @ 0349d268 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0349d22c with catch @ 0349d268
                       catch(type#2 @ 00000000) { ... } // from try @ 0349d260 with catch @ 0349d268
                        */
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9968,(MethodInfo *)0x0);
      if (bVar1) {
        __this = (NGJHCIGFLFD_o *)thunk_FUN_01bda818(NGJHCIGFLFD_TypeInfo);
        NGJHCIGFLFD___ctor(__this,AHDGNOJPPIB,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = System_String__Concat(StringLiteral_4833,pSVar2,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        __this = (NGJHCIGFLFD_o *)0x0;
      }
    }
    return (OANBNKOOJFH_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}


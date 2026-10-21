// JMDPBFOCHHP$$IFFHCBKGMKC @ RVA 0x2FF7DCC

System_Xml_XmlNode_o *
JMDPBFOCHHP__IFFHCBKGMKC(JMDPBFOCHHP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_Xml_XmlDocument_o *pSVar1;
  long *plVar2;
  System_Xml_XmlNode_o *pSVar3;
  
                    /* catch() { ... } // from try @ 030f773c with catch @ 030f7dcc */
                    /* catch() { ... } // from try @ 030f7a98 with catch @ 030f7dd0 */
                    /* catch() { ... } // from try @ 030f7b8c with catch @ 030f7dd4 */
                    /* catch() { ... } // from try @ 030f76fc with catch @ 030f7dd8
                       catch() { ... } // from try @ 030f7b90 with catch @ 030f7dd8 */
                    /* catch() { ... } // from try @ 030f7b28 with catch @ 030f7ddc
                       catch() { ... } // from try @ 030f7c84 with catch @ 030f7ddc
                       catch() { ... } // from try @ 030f7cc4 with catch @ 030f7ddc */
                    /* catch() { ... } // from try @ 030f7b84 with catch @ 030f7de0 */
                    /* catch() { ... } // from try @ 030f7700 with catch @ 030f7de4 */
  if ((DAT_04565ab5 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f7a48 with catch @ 030f7de8 */
                    /* catch() { ... } // from try @ 030f771c with catch @ 030f7dec */
                    /* catch() { ... } // from try @ 030f7b48 with catch @ 030f7df0 */
    FUN_01bab630(&StringLiteral_17601);
                    /* catch() { ... } // from try @ 030f7a74 with catch @ 030f7df4
                       catch() { ... } // from try @ 030f7b88 with catch @ 030f7df4 */
                    /* catch() { ... } // from try @ 030f7694 with catch @ 030f7df8 */
    DAT_04565ab5 = 1;
  }
                    /* catch() { ... } // from try @ 030f7b7c with catch @ 030f7dfc */
  pSVar1 = (__this->fields).KGCDBPOBGFH;
                    /* catch() { ... } // from try @ 030f79a4 with catch @ 030f7e00 */
  if (pSVar1 != (System_Xml_XmlDocument_o *)0x0) {
                    /* catch() { ... } // from try @ 030f7b44 with catch @ 030f7e04 */
    plVar2 = (long *)(*(pSVar1->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar1,StringLiteral_17601,
                                (pSVar1->klass->vtable)._51_get_Item.method);
                    /* try { // try from 030f7e20 to 031f7e37 has its CatchHandler @ 030f7e74 */
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030f7e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 030f7e3c to 031f7e3f has its CatchHandler @ 030f7e70 */
      pSVar3 = (System_Xml_XmlNode_o *)
               (**(code **)(*plVar2 + 0x468))(plVar2,KGLJICLJHEL,*(undefined8 *)(*plVar2 + 0x470));
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 030f7e40 to 031f7e5b has its CatchHandler @ 030f7598 */
  return (System_Xml_XmlNode_o *)0x0;
}


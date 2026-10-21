// EIABCPKDEBD$$BDMJPODOPEM @ RVA 0x3133FA0

System_Xml_XmlNode_o *
EIABCPKDEBD__BDMJPODOPEM(System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
                    /* catch() { ... } // from try @ 03233ea4 with catch @ 03233fa0 */
                    /* catch() { ... } // from try @ 03233e98 with catch @ 03233fa4 */
                    /* catch() { ... } // from try @ 03233e8c with catch @ 03233fa8 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 03233e80 with catch @ 03233fac */
                    /* catch() { ... } // from try @ 03233e74 with catch @ 03233fb0 */
                    /* catch() { ... } // from try @ 03233b58 with catch @ 03233fb4 */
                    /* catch() { ... } // from try @ 03233b18 with catch @ 03233fb8 */
                    /* catch() { ... } // from try @ 03233aec with catch @ 03233fbc */
    pSVar1 = (System_Xml_XmlNode_o *)
             (*(AHDGNOJPPIB->klass->vtable)._40_Clone.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._40_Clone.method);
                    /* catch() { ... } // from try @ 03233bc0 with catch @ 03233fc0 */
                    /* catch() { ... } // from try @ 03233e50 with catch @ 03233fc4 */
                    /* catch() { ... } // from try @ 03233e44 with catch @ 03233fc8 */
                    /* catch() { ... } // from try @ 03233b74 with catch @ 03233fcc */
                    /* catch() { ... } // from try @ 03233e5c with catch @ 03233fd0 */
    lVar2 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 03233950 with catch @ 03233fdc */
      auVar4 = (*(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._12_get_ParentNode.method);
      method = auVar4._8_8_;
      plVar3 = auVar4._0_8_;
      if (plVar3 == (long *)0x0) goto LAB_03234010;
      (**(code **)(*plVar3 + 0x2c8))(plVar3,AHDGNOJPPIB,*(undefined8 *)(*plVar3 + 0x2d0));
    }
                    /* try { // try from 03234004 to 03334007 has its CatchHandler @ 03234030 */
                    /* try { // try from 03234008 to 0333403f has its CatchHandler @ 032331f0 */
    return pSVar1;
  }
LAB_03234010:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


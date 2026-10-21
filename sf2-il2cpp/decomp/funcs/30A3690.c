// IGFGDDANEPE$$HCOCAAIGNNL @ RVA 0x30A3690

void IGFGDDANEPE__HCOCAAIGNNL(IGFGDDANEPE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Xml_XmlNode_o *pSVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  
                    /* try { // try from 031a3694 to 032a36a3 has its CatchHandler @ 031a36d0 */
                    /* try { // try from 031a36a4 to 032a36c7 has its CatchHandler @ 031a35d8 */
  if ((DAT_0456615a & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327);
    DAT_0456615a = 1;
  }
  (__this->fields).NPFMOEOIEKM = CJNHFNHJHPE;
                    /* try { // try from 031a36c8 to 032a36cb has its CatchHandler @ 031a36cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a36c8 with catch @ 031a36cc
                       try { // try from 031a36cc to 032a36eb has its CatchHandler @ 031a35d8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3694 with catch @ 031a36d0
                        */
  thunk_FUN_01c20e04(&__this->fields,CJNHFNHJHPE);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a3674 with catch @ 031a36d4
                        */
  if ((__this->fields).MMNCAIGLMJB != false) {
    pSVar1 = (__this->fields).DMLGJFCNNJF;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031a36ec to 032a36ef has its CatchHandler @ 031a3710 */
                    /* try { // try from 031a36f0 to 032a3717 has its CatchHandler @ 031a35d8 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
        if (pSVar3 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* catch() { ... } // from try @ 031a36ec with catch @ 031a3710 */
                    /* try { // try from 031a3718 to 032a371f has its CatchHandler @ 031a3734 */
          EIABCPKDEBD__HBGAGFJBGKD
                    ((__this->fields).DMLGJFCNNJF,StringLiteral_9327,(MethodInfo *)0x0);
        }
                    /* try { // try from 031a3720 to 032a372b has its CatchHandler @ 031a35d8 */
        pSVar1 = (__this->fields).DMLGJFCNNJF;
        if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 031a372c to 032a3733 has its CatchHandler @ 031a3734 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031a3718 with catch @ 031a3734
                       catch(type#2 @ 00000000) { ... } // from try @ 031a372c with catch @ 031a3734
                        */
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(pSVar1->klass->vtable)._16_get_Attributes.methodPtr)
                             (pSVar1,(pSVar1->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 031a3738 to 032a37d3 has its CatchHandler @ 031a3738
                       catch() { ... } // from try @ 031a3738 with catch @ 031a3738
                       catch() { ... } // from try @ 031a3804 with catch @ 031a3738
                       catch() { ... } // from try @ 031a382c with catch @ 031a3738
                       catch() { ... } // from try @ 031a3850 with catch @ 031a3738
                       catch() { ... } // from try @ 031a3880 with catch @ 031a3738 */
          if ((pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) &&
             (pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_9327,(MethodInfo *)0x0),
             pSVar3 != (System_Xml_XmlAttribute_o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x031a3760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pSVar3->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar3,CJNHFNHJHPE,(pSVar3->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


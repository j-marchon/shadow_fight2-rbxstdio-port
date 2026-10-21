// HFNLANEMDFI$$.ctor @ RVA 0x334A190

void HFNLANEMDFI___ctor(HFNLANEMDFI_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  float fVar6;
  
  if ((DAT_045679eb & 1) == 0) {
    FUN_01bab630(&StringLiteral_5224);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_6084);
    FUN_01bab630(&StringLiteral_5335);
                    /* try { // try from 0344a1e8 to 0354a1eb has its CatchHandler @ 0344a350 */
    FUN_01bab630(&StringLiteral_14738);
                    /* try { // try from 0344a1f4 to 0354a1fb has its CatchHandler @ 0344a354 */
    FUN_01bab630(&StringLiteral_1);
    DAT_045679eb = 1;
  }
                    /* try { // try from 0344a208 to 0354a20f has its CatchHandler @ 0344a358 */
  ppSVar5 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar5 = StringLiteral_1;
                    /* try { // try from 0344a218 to 0354a28b has its CatchHandler @ 0344a374 */
  thunk_FUN_01c20e04(ppSVar5);
  DOCABGGCCIL___ctor((DOCABGGCCIL_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(__this->klass->vtable)._4_HNIHOIAMDPC.method);
  (__this->fields).super.NOBEFHEECKJ = 3;
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1,(MethodInfo *)0x0);
      *ppSVar5 = pSVar4;
                    /* try { // try from 0344a28c to 0354a327 has its CatchHandler @ 03449fa4 */
      thunk_FUN_01c20e04(ppSVar5,pSVar4);
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6084,(MethodInfo *)0x0);
        bVar1 = EIABCPKDEBD__OBECCOPBADO(pSVar3,(MethodInfo *)0x0);
        (__this->fields).CKEJJHPCDFK = bVar1;
        pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                 (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                           (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
        if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar2,StringLiteral_6084,(MethodInfo *)0x0);
          fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
          (__this->fields).AICMABLCDED = fVar6;
          pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
          if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0344a328 to 0354a32b has its CatchHandler @ 0344a36c */
            pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar2,StringLiteral_5335,(MethodInfo *)0x0);
                    /* try { // try from 0344a32c to 0354a32f has its CatchHandler @ 0344a370 */
                    /* try { // try from 0344a330 to 0354a333 has its CatchHandler @ 0344a360 */
                    /* try { // try from 0344a334 to 0354a337 has its CatchHandler @ 0344a35c */
            fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 0344a338 to 0354a33b has its CatchHandler @ 0344a370 */
            (__this->fields).EGCPFDNGNHP = fVar6;
                    /* try { // try from 0344a33c to 0354a33f has its CatchHandler @ 03449fa4 */
                    /* try { // try from 0344a340 to 0354a343 has its CatchHandler @ 0344a34c */
                    /* try { // try from 0344a344 to 0354a38b has its CatchHandler @ 03449fa4 */
                    /* catch() { ... } // from try @ 0344a340 with catch @ 0344a34c */
            pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                     (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 0344a1e8 with catch @ 0344a350 */
            if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0344a1f4 with catch @ 0344a354 */
                    /* catch() { ... } // from try @ 0344a208 with catch @ 0344a358 */
                    /* catch() { ... } // from try @ 0344a334 with catch @ 0344a35c */
                    /* catch() { ... } // from try @ 0344a330 with catch @ 0344a360 */
                    /* catch() { ... } // from try @ 0344a17c with catch @ 0344a364 */
              pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar2,StringLiteral_5224,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0344a120 with catch @ 0344a368 */
                    /* catch() { ... } // from try @ 0344a328 with catch @ 0344a36c */
                    /* catch() { ... } // from try @ 0344a32c with catch @ 0344a370
                       catch() { ... } // from try @ 0344a338 with catch @ 0344a370 */
              fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0344a218 with catch @ 0344a374 */
              (__this->fields).CMCDADPEHJI = fVar6;
              pSVar2 = (System_Xml_XmlAttributeCollection_o *)
                       (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method
                                 );
                    /* try { // try from 0344a38c to 0354a38f has its CatchHandler @ 0344a3a0 */
              if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 0344a38c with catch @ 0344a3a0 */
                pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar2,StringLiteral_14738,(MethodInfo *)0x0);
                fVar6 = EIABCPKDEBD__GICIEKCGOHA(pSVar3,0.0,(MethodInfo *)0x0);
                    /* try { // try from 0344a3b0 to 0354a41f has its CatchHandler @ 0344a434 */
                (__this->fields).NBJKKCCFGNM = fVar6;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


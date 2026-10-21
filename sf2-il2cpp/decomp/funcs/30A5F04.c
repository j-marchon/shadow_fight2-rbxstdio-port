// IGFGDDANEPE$$.ctor @ RVA 0x30A5F04

void IGFGDDANEPE___ctor(IGFGDDANEPE_o *__this,System_Xml_XmlNode_o *EBLABJMFLJB,int32_t EBDDELGICGB,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool FCPLINEFDIO;
  bool bVar2;
  int32_t DFIBGGDJPLM;
  int32_t JLAFGLDIFOC;
  int32_t iVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_00;
  System_Collections_Generic_List_HEFOANCOHDC__o **ppSVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  System_String_o *KGLJICLJHEL;
  int64_t LBAAJNDIEMD;
  System_String_o *NMABNFMBFJF;
  long *plVar7;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if ((DAT_0456616a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&StringLiteral_5837);
    FUN_01bab630(&StringLiteral_14587);
    FUN_01bab630(&StringLiteral_4824);
    FUN_01bab630(&StringLiteral_9327);
                    /* try { // try from 031a5f90 to 032a6133 has its CatchHandler @ 031a5f90
                       catch() { ... } // from try @ 031a5f90 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a6234 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a62d8 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a62e0 with catch @ 031a5f90
                       catch() { ... } // from try @ 031a6390 with catch @ 031a5f90 */
    FUN_01bab630(&StringLiteral_2724);
    FUN_01bab630(&StringLiteral_5292);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_8054);
    FUN_01bab630(&StringLiteral_14589);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5294);
    DAT_0456616a = 1;
  }
  __this_00 = (System_Collections_Generic_List_HEFOANCOHDC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
  ppSVar4 = &(__this->fields).PAPANCDPPIF;
  *ppSVar4 = __this_00;
  thunk_FUN_01c20e04(ppSVar4,__this_00);
  (__this->fields).APCAEINELHJ = 0x34;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).APCAEINELHJ = EBDDELGICGB;
  if (EBLABJMFLJB != (System_Xml_XmlNode_o *)0x0) {
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                       (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_9327,(MethodInfo *)0x0);
      KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,StringLiteral_1,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                         (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_4824,(MethodInfo *)0x0);
        DFIBGGDJPLM = EIABCPKDEBD__EHJNCGCICMP(pSVar6,0,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                           (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_14589,(MethodInfo *)0x0);
          JLAFGLDIFOC = EIABCPKDEBD__EHJNCGCICMP(pSVar6,-1,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                             (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_5837,(MethodInfo *)0x0);
            FCPLINEFDIO = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                    /* try { // try from 031a6134 to 032a615b has its CatchHandler @ 031a6300 */
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                               (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_5292,(MethodInfo *)0x0);
              LBAAJNDIEMD = EIABCPKDEBD__HNIGPBMJJOL(pSVar6,0,(MethodInfo *)0x0);
              if ((0 < LBAAJNDIEMD) &&
                 (iVar3 = HOOAAGABMBL__NNOMKMDICIG((MethodInfo *)0x0), 0 < iVar3)) {
                iVar3 = HOOAAGABMBL__NNOMKMDICIG((MethodInfo *)0x0);
                LBAAJNDIEMD = (int64_t)iVar3;
              }
                    /* try { // try from 031a6190 to 032a61b7 has its CatchHandler @ 031a62fc */
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                 (EBLABJMFLJB,(EBLABJMFLJB->klass->vtable)._16_get_Attributes.method
                                 );
              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_5294,(MethodInfo *)0x0);
                iVar3 = EIABCPKDEBD__EHJNCGCICMP(pSVar6,-1,(MethodInfo *)0x0);
                    /* try { // try from 031a61c8 to 032a61cf has its CatchHandler @ 031a62f0 */
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                   (EBLABJMFLJB,
                                    (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_2724,(MethodInfo *)0x0);
                    /* try { // try from 031a61f8 to 032a61ff has its CatchHandler @ 031a62f4 */
                  NMABNFMBFJF = EIABCPKDEBD__JPKEHIBGOEM
                                          (pSVar6,StringLiteral_8095,(MethodInfo *)0x0);
                  pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                           (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                     (EBLABJMFLJB,
                                      (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                  if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 031a6228 to 032a6233 has its CatchHandler @ 031a62e8 */
                    pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar5,StringLiteral_8054,(MethodInfo *)0x0);
                    if (pSVar6 == (System_Xml_XmlAttribute_o *)0x0) {
LAB_031a62a4:
                    /* try { // try from 031a62d4 to 032a62d7 has its CatchHandler @ 031a62f8 */
                      IGFGDDANEPE__GIENGNEGHPJ
                                (__this,EBLABJMFLJB,KGLJICLJHEL,FCPLINEFDIO,DFIBGGDJPLM,JLAFGLDIFOC,
                                 LBAAJNDIEMD,iVar3,true,NMABNFMBFJF,false,in_stack_ffffffffffffff98)
                      ;
                    /* try { // try from 031a62d8 to 032a62db has its CatchHandler @ 031a5f90 */
                    /* try { // try from 031a62dc to 032a62df has its CatchHandler @ 031a62ec */
                    /* try { // try from 031a62e0 to 032a6317 has its CatchHandler @ 031a5f90 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a6228 with catch @ 031a62e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a62dc with catch @ 031a62ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a61c8 with catch @ 031a62f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a61f8 with catch @ 031a62f4
                        */
                      return;
                    }
                    /* try { // try from 031a6234 to 032a62d3 has its CatchHandler @ 031a5f90 */
                    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                             (*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                       (EBLABJMFLJB,
                                        (EBLABJMFLJB->klass->vtable)._16_get_Attributes.method);
                    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar5,StringLiteral_8054,(MethodInfo *)0x0);
                      bVar2 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                      plVar7 = (long *)(*(EBLABJMFLJB->klass->vtable)._16_get_Attributes.methodPtr)
                                                 (EBLABJMFLJB,
                                                  (EBLABJMFLJB->klass->vtable)._16_get_Attributes.
                                                  method);
                      if (plVar7 != (long *)0x0) {
                        (**(code **)(*plVar7 + 0x1a8))
                                  (plVar7,StringLiteral_8054,*(undefined8 *)(*plVar7 + 0x1b0));
                        ppSVar1 = (System_String_o **)&StringLiteral_14587;
                        if (!bVar2) {
                          ppSVar1 = &StringLiteral_8095;
                        }
                        NMABNFMBFJF = *ppSVar1;
                        goto LAB_031a62a4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031a62d4 with catch @ 031a62f8
                        */
  FUN_01bab8c8();
}


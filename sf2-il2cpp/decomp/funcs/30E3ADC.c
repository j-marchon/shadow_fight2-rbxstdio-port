// POECGHDENAF$$NDAHBJOBBFF @ RVA 0x30E3ADC

void POECGHDENAF__NDAHBJOBBFF
               (GBJGJEGPHKD_o *BCKBBGCOMJD,IEFEBEDLHNN_o *PFKGKBNBGED,
               System_Xml_XmlNode_o *CMBPNGHLCKH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Object_array *args;
  long lVar3;
  Il2CppObject *pIVar4;
  System_Xml_XmlAttributeCollection_o *pSVar5;
  System_Xml_XmlAttribute_o *pSVar6;
  CNDPAJOLKFN_o *__this;
  undefined8 uVar7;
  System_String_o *a;
  float fVar8;
  float fVar9;
  float PIBBGDEBBJC;
  
  if ((DAT_045663cf & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15220);
    FUN_01bab630(&StringLiteral_9155);
    FUN_01bab630(&StringLiteral_9544);
    FUN_01bab630(&StringLiteral_8859);
    FUN_01bab630(&StringLiteral_6492);
    FUN_01bab630(&StringLiteral_14806);
    FUN_01bab630(&StringLiteral_13991);
    FUN_01bab630(&StringLiteral_15134);
    FUN_01bab630(&StringLiteral_15021);
    FUN_01bab630(&StringLiteral_3200);
    BCKBBGCOMJD = (GBJGJEGPHKD_o *)FUN_01bab630(&StringLiteral_4442);
    DAT_045663cf = 1;
  }
  if ((PFKGKBNBGED != (IEFEBEDLHNN_o *)0x0) && (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0)) {
    a = (PFKGKBNBGED->fields).NPFMOEOIEKM;
    pSVar2 = (System_String_o *)
             (*(CMBPNGHLCKH->klass->vtable)._8_unknown.methodPtr)
                       (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._8_unknown.method);
    bVar1 = System_String__op_Inequality(a,pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
      if (args == (System_Object_array *)0x0) goto LAB_031e3f6c;
      pSVar2 = (PFKGKBNBGED->fields).NPFMOEOIEKM;
      if ((pSVar2 != (System_String_o *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_031e3f74:
                    /* try { // try from 031e3f74 to 032e3fab has its CatchHandler @ 031e2854 */
        uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar7,0);
      }
      if ((int)args->max_length == 0) {
LAB_031e3f70:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031e3f70 to 032e3f73 has its CatchHandler @ 031e3f9c */
        FUN_01bab8d0();
      }
      args->m_Items[0] = (Il2CppObject *)pSVar2;
      thunk_FUN_01c20e04(args->m_Items,pSVar2);
      pIVar4 = (Il2CppObject *)
               (*(CMBPNGHLCKH->klass->vtable)._8_unknown.methodPtr)
                         (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._8_unknown.method);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar3 == 0))
      goto LAB_031e3f74;
      if ((uint)args->max_length < 2) goto LAB_031e3f70;
      args->m_Items[1] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9155,args,(MethodInfo *)0x0);
    }
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                       (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
    BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_15021,(MethodInfo *)0x0);
      fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                         (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
      BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_15134,(MethodInfo *)0x0);
        fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                           (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
        BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_15220,(MethodInfo *)0x0);
          PIBBGDEBBJC = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
          __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(__this,fVar8,-fVar9,PIBBGDEBBJC,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                             (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
          BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_13991,(MethodInfo *)0x0);
            pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
            IEFEBEDLHNN__AGOEHONIGBH(PFKGKBNBGED,__this,(MethodInfo *)0x0);
            IEFEBEDLHNN__LCOGNIMMOFL(PFKGKBNBGED,__this,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9544,(MethodInfo *)0x0);
            if (bVar1) {
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method
                                 );
              BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031e3f6c;
                    /* try { // try from 031e3e28 to 032e3e2b has its CatchHandler @ 031e3f4c */
                    /* try { // try from 031e3e2c to 032e3e73 has its CatchHandler @ 031e3f3c */
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_4442,(MethodInfo *)0x0);
              bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
              IEFEBEDLHNN__GJCKOEMLFJP(PFKGKBNBGED,bVar1,(MethodInfo *)0x0);
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method
                                 );
              BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
              if (pSVar5 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_031e3f6c;
                    /* try { // try from 031e3e74 to 032e3f6f has its CatchHandler @ 031e2854 */
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_3200,(MethodInfo *)0x0);
              fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
              (PFKGKBNBGED->fields).DDMMFMCNPON = fVar8;
            }
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                               (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
            BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8859,(MethodInfo *)0x0);
              fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
              IEFEBEDLHNN__BCEAICNLDID(PFKGKBNBGED,fVar8,(MethodInfo *)0x0);
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method
                                 );
              BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_6492,(MethodInfo *)0x0);
                bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                IEFEBEDLHNN__GAMGKJCEMAJ(PFKGKBNBGED,bVar1,(MethodInfo *)0x0);
                pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                         (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                                   (CMBPNGHLCKH,
                                    (CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
                BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
                if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 031e37a0 with catch @ 031e3f30 */
                    /* catch() { ... } // from try @ 031e3704 with catch @ 031e3f34 */
                    /* catch() { ... } // from try @ 031e381c with catch @ 031e3f38 */
                    /* catch() { ... } // from try @ 031e3e2c with catch @ 031e3f3c */
                  pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar5,StringLiteral_14806,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031e3740 with catch @ 031e3f40 */
                    /* catch() { ... } // from try @ 031e37e0 with catch @ 031e3f44 */
                    /* catch() { ... } // from try @ 031e36d4 with catch @ 031e3f48 */
                  bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar6,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031e3e28 with catch @ 031e3f4c */
                    /* catch() { ... } // from try @ 031e3698 with catch @ 031e3f50 */
                  (PFKGKBNBGED->fields).ENFFPGHABFD = bVar1;
                    /* catch() { ... } // from try @ 031e3624 with catch @ 031e3f54 */
                    /* catch() { ... } // from try @ 031e3668 with catch @ 031e3f58 */
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031e3f6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(BCKBBGCOMJD);
}


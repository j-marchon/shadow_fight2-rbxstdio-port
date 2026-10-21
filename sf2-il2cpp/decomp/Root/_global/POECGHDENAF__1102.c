// TypeDefIndex 1102
// Namespace: 
// public static class POECGHDENAF
// Fields:

// ===== private static bool ABCNILIJHCG(GBJGJEGPHKD BCKBBGCOMJD, List<XmlNode> PDHLJKEDECI)  [RVA 0x30E36D8]
// POECGHDENAF$$ABCNILIJHCG @ RVA 0x30E36D8

/* WARNING: Removing unreachable block (ram,0x031e3a30) */
/* WARNING: Removing unreachable block (ram,0x031e3990) */

bool POECGHDENAF__ABCNILIJHCG
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_XmlNode__o *PDHLJKEDECI,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this;
  Il2CppObject *pIVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *CMBPNGHLCKH;
  GBJGJEGPHKD_o *PFKGKBNBGED;
  MethodInfo *in_x3;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int index;
  int index_00;
  
                    /* try { // try from 031e3704 to 032e370b has its CatchHandler @ 031e3f34 */
  if ((DAT_045663cc & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
                    /* try { // try from 031e3740 to 032e379f has its CatchHandler @ 031e3f40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_get_Item__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045663cc = 1;
  }
  if ((BCKBBGCOMJD == (GBJGJEGPHKD_o *)0x0) ||
     (__this = GBJGJEGPHKD__HMAAHELNECD(BCKBBGCOMJD,(MethodInfo *)0x0),
     PDHLJKEDECI == (System_Collections_Generic_List_XmlNode__o *)0x0)) {
LAB_031e3a2c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((PDHLJKEDECI->fields)._size < 1) {
LAB_031e39fc:
    GBJGJEGPHKD__POBIFAEFKHC(BCKBBGCOMJD,(MethodInfo *)0x0);
    return true;
  }
  index = 0;
  index_00 = 0;
LAB_031e37a0:
                    /* try { // try from 031e37a0 to 032e37ab has its CatchHandler @ 031e3f30 */
  pIVar2 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)PDHLJKEDECI,index,
                      Method_System_Collections_Generic_List<XmlNode>_get_Item__);
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (plVar3 = (long *)(*pIVar2->klass->vtable[0xd].methodPtr)
                                 (pIVar2,pIVar2->klass->vtable[0xd].method), plVar3 != (long *)0x0))
  {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
                    /* try { // try from 031e37e0 to 032e380b has its CatchHandler @ 031e3f44 */
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031e3828 to 032e3e27 has its CatchHandler @ 031e2854 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_031e3834;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 031e381c to 032e3827 has its CatchHandler @ 031e3f38 */
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_031e3834:
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar6 & 1) == 0) goto LAB_031e38fc;
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_031e3894;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_031e3894:
      CMBPNGHLCKH = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (CMBPNGHLCKH != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((CMBPNGHLCKH->klass->_2).naturalAligment < bVar1) ||
           ((CMBPNGHLCKH->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(CMBPNGHLCKH);
        }
      }
      if (__this == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      PFKGKBNBGED = (GBJGJEGPHKD_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this,index_00,
                               Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
      POECGHDENAF__NDAHBJOBBFF(PFKGKBNBGED,(IEFEBEDLHNN_o *)PFKGKBNBGED,CMBPNGHLCKH,in_x3);
      index_00 = index_00 + 1;
    } while( true );
  }
  goto LAB_031e3a2c;
LAB_031e38fc:
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_031e3978;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_031e3978:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  index = index + 1;
  if ((PDHLJKEDECI->fields)._size <= index) goto LAB_031e39fc;
  goto LAB_031e37a0;
}


// ===== private static bool ABJJDDOFODH(GBJGJEGPHKD INNMCFJNEAE, List<XmlNode> OBDMHHJBLKL, List<string> MEOBNMMHFGG)  [RVA 0x30E3F80]
// POECGHDENAF$$ABJJDDOFODH @ RVA 0x30E3F80

bool POECGHDENAF__ABJJDDOFODH
               (GBJGJEGPHKD_o *INNMCFJNEAE,System_Collections_Generic_List_XmlNode__o *OBDMHHJBLKL,
               System_Collections_Generic_List_string__o *MEOBNMMHFGG,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *AAIHDEKMIJG;
  System_String_o *LFGKEPCBPKF;
  System_Xml_XmlDocument_o *pSVar3;
  long *plVar4;
  System_Object_array *args;
  long lVar5;
  undefined8 uVar6;
  System_Xml_XmlNode_array *pSVar7;
  int index;
  MDFGJKBMECA_OJOAPHBHAFL_o *__this;
  
                    /* catch() { ... } // from try @ 031e3f70 with catch @ 031e3f9c */
  if ((DAT_045663cd & 1) == 0) {
                    /* try { // try from 031e3fac to 032e3fb3 has its CatchHandler @ 031e3fc8 */
                    /* try { // try from 031e3fb4 to 032e3fbf has its CatchHandler @ 031e2854 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 031e3fc0 to 032e3fc7 has its CatchHandler @ 031e3fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
                    /* catch() { ... } // from try @ 031e3fac with catch @ 031e3fc8
                       catch() { ... } // from try @ 031e3fc0 with catch @ 031e3fc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6388/*"File {0} was not open "*/);
    FUN_01bab630(&StringLiteral_9548/*"Nodes"*/);
    INNMCFJNEAE = (GBJGJEGPHKD_o *)FUN_01bab630(&StringLiteral_11719/*"Scene"*/);
    DAT_045663cd = 1;
  }
  if (MEOBNMMHFGG == (System_Collections_Generic_List_string__o *)0x0) {
LAB_031e41c8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(INNMCFJNEAE);
  }
  iVar1 = (MEOBNMMHFGG->fields)._size;
  if (0 < iVar1) {
    index = 0;
    do {
      if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this = MDFGJKBMECA_TypeInfo->static_fields->FGJCGBEGDOC;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo);
      }
      AAIHDEKMIJG = MGENAMAJALB__CIKNLBCABMJ((MethodInfo *)0x0);
      LFGKEPCBPKF = (System_String_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)MEOBNMMHFGG,index,
                               Method_System_Collections_Generic_List<string>_get_Item__);
      INNMCFJNEAE = (GBJGJEGPHKD_o *)
                    GIAMPEGMNHE__JIGCIBMKDAL(AAIHDEKMIJG,LFGKEPCBPKF,(MethodInfo *)0x0);
      if (__this == (MDFGJKBMECA_OJOAPHBHAFL_o *)0x0) goto LAB_031e41c8;
      pSVar3 = MDFGJKBMECA_OJOAPHBHAFL__BGPCDOCFCEH
                         (__this,(System_String_o *)INNMCFJNEAE,(MethodInfo *)0x0);
      if (pSVar3 == (System_Xml_XmlDocument_o *)0x0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        INNMCFJNEAE = (GBJGJEGPHKD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)MEOBNMMHFGG,index,
                                 Method_System_Collections_Generic_List<string>_get_Item__);
        if (args != (System_Object_array *)0x0) {
          if ((INNMCFJNEAE != (GBJGJEGPHKD_o *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(INNMCFJNEAE,(((args->obj).klass)->_1).element_class),
             lVar5 == 0)) {
            uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar6,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)INNMCFJNEAE;
          thunk_FUN_01c20e04(args->m_Items,INNMCFJNEAE);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_6388/*"File {0} was not open "*/,args,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_031e41c8;
      }
      plVar4 = (long *)(*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                                 (pSVar3,StringLiteral_11719/*"Scene"*/,
                                  (pSVar3->klass->vtable)._51_get_Item.method);
      INNMCFJNEAE = (GBJGJEGPHKD_o *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_031e41c8;
      INNMCFJNEAE = (GBJGJEGPHKD_o *)
                    (**(code **)(*plVar4 + 0x468))
                              (plVar4,StringLiteral_9548/*"Nodes"*/,*(undefined8 *)(*plVar4 + 0x470));
      lVar5 = Method_System_Collections_Generic_List<XmlNode>_Add__;
      if (INNMCFJNEAE != (GBJGJEGPHKD_o *)0x0) {
        if (OBDMHHJBLKL == (System_Collections_Generic_List_XmlNode__o *)0x0) goto LAB_031e41c8;
        pSVar7 = (OBDMHHJBLKL->fields)._items;
        (OBDMHHJBLKL->fields)._version = (OBDMHHJBLKL->fields)._version + 1;
        if (pSVar7 == (System_Xml_XmlNode_array *)0x0) goto LAB_031e41c8;
        uVar2 = (OBDMHHJBLKL->fields)._size;
        if (uVar2 < (uint)pSVar7->max_length) {
          (OBDMHHJBLKL->fields)._size = uVar2 + 1;
          pSVar7->m_Items[(int)uVar2] = (System_Xml_XmlNode_o *)INNMCFJNEAE;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                     (Il2CppObject *)INNMCFJNEAE,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      index = index + 1;
    } while (iVar1 != index);
  }
  return true;
}


// ===== private static void HNIHOIAMDPC(GBJGJEGPHKD BCKBBGCOMJD, List<XmlNode> OBDMHHJBLKL)  [RVA 0x30E4244]
// POECGHDENAF$$HNIHOIAMDPC @ RVA 0x30E4244

void POECGHDENAF__HNIHOIAMDPC
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_XmlNode__o *OBDMHHJBLKL,
               MethodInfo *method)

{
  if ((DAT_045663ce & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_9550/*"Nodes was not parsed"*/);
    DAT_045663ce = 1;
  }
  POECGHDENAF__ABCNILIJHCG(BCKBBGCOMJD,OBDMHHJBLKL,method);
  return;
}


// ===== private static void NDAHBJOBBFF(GBJGJEGPHKD BCKBBGCOMJD, IEFEBEDLHNN PFKGKBNBGED, XmlNode CMBPNGHLCKH)  [RVA 0x30E3ADC]
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
    FUN_01bab630(&StringLiteral_15220/*"Z"*/);
    FUN_01bab630(&StringLiteral_9155/*"Model reload: {0} -- {1}"*/);
    FUN_01bab630(&StringLiteral_9544/*"Node"*/);
    FUN_01bab630(&StringLiteral_8859/*"Mass"*/);
    FUN_01bab630(&StringLiteral_6492/*"Fixed"*/);
    FUN_01bab630(&StringLiteral_14806/*"Visible"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_15134/*"Y"*/);
    FUN_01bab630(&StringLiteral_15021/*"X"*/);
    FUN_01bab630(&StringLiteral_3200/*"Attenuation"*/);
    BCKBBGCOMJD = (GBJGJEGPHKD_o *)FUN_01bab630(&StringLiteral_4442/*"Cloth"*/);
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
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9155/*"Model reload: {0} -- {1}"*/,args,(MethodInfo *)0x0);
    }
    pSVar5 = (System_Xml_XmlAttributeCollection_o *)
             (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                       (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
    BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
    if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar5,StringLiteral_15021/*"X"*/,(MethodInfo *)0x0);
      fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
      pSVar5 = (System_Xml_XmlAttributeCollection_o *)
               (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                         (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
      BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
      if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar5,StringLiteral_15134/*"Y"*/,(MethodInfo *)0x0);
        fVar9 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
        pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                 (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                           (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
        BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
        if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar5,StringLiteral_15220/*"Z"*/,(MethodInfo *)0x0);
          PIBBGDEBBJC = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
          __this = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
          CNDPAJOLKFN___ctor(__this,fVar8,-fVar9,PIBBGDEBBJC,(MethodInfo *)0x0);
          pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                   (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                             (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
          BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
          if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar5,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
            pSVar2 = EIABCPKDEBD__JPKEHIBGOEM(pSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
            IEFEBEDLHNN__AGOEHONIGBH(PFKGKBNBGED,__this,(MethodInfo *)0x0);
            IEFEBEDLHNN__LCOGNIMMOFL(PFKGKBNBGED,__this,(MethodInfo *)0x0);
            bVar1 = System_String__op_Equality(pSVar2,StringLiteral_9544/*"Node"*/,(MethodInfo *)0x0);
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
                                 (pSVar5,StringLiteral_4442/*"Cloth"*/,(MethodInfo *)0x0);
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
                                 (pSVar5,StringLiteral_3200/*"Attenuation"*/,(MethodInfo *)0x0);
              fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
              (PFKGKBNBGED->fields).DDMMFMCNPON = fVar8;
            }
            pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                     (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                               (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method);
            BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
            if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar5,StringLiteral_8859/*"Mass"*/,(MethodInfo *)0x0);
              fVar8 = EIABCPKDEBD__GICIEKCGOHA(pSVar6,0.0,(MethodInfo *)0x0);
              IEFEBEDLHNN__BCEAICNLDID(PFKGKBNBGED,fVar8,(MethodInfo *)0x0);
              pSVar5 = (System_Xml_XmlAttributeCollection_o *)
                       (*(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.methodPtr)
                                 (CMBPNGHLCKH,(CMBPNGHLCKH->klass->vtable)._16_get_Attributes.method
                                 );
              BCKBBGCOMJD = (GBJGJEGPHKD_o *)0x0;
              if (pSVar5 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar6 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar5,StringLiteral_6492/*"Fixed"*/,(MethodInfo *)0x0);
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
                                     (pSVar5,StringLiteral_14806/*"Visible"*/,(MethodInfo *)0x0);
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


// ===== public static void ELJIPDIDPJD(GBJGJEGPHKD BCKBBGCOMJD, List<string> MEOBNMMHFGG)  [RVA 0x30E4294]
// POECGHDENAF$$ELJIPDIDPJD @ RVA 0x30E4294

void POECGHDENAF__ELJIPDIDPJD
               (GBJGJEGPHKD_o *BCKBBGCOMJD,System_Collections_Generic_List_string__o *MEOBNMMHFGG,
               MethodInfo *method)

{
  System_Collections_Generic_List_XmlNode__o *OBDMHHJBLKL;
  GBJGJEGPHKD_o *INNMCFJNEAE;
  MethodInfo *in_x3;
  
  if ((DAT_045663d0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    DAT_045663d0 = 1;
  }
  if (MEOBNMMHFGG != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (MEOBNMMHFGG->fields)._size) {
      OBDMHHJBLKL = (System_Collections_Generic_List_XmlNode__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)OBDMHHJBLKL,
                 Method_System_Collections_Generic_List<XmlNode>__ctor__);
      POECGHDENAF__ABJJDDOFODH(INNMCFJNEAE,OBDMHHJBLKL,MEOBNMMHFGG,in_x3);
      POECGHDENAF__HNIHOIAMDPC(BCKBBGCOMJD,OBDMHHJBLKL,(MethodInfo *)MEOBNMMHFGG);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


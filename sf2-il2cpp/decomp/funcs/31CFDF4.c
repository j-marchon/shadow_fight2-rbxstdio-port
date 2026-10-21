// AHMJMDBNMHO$$HNIHOIAMDPC @ RVA 0x31CFDF4

/* WARNING: Removing unreachable block (ram,0x032d0278) */

void AHMJMDBNMHO__HNIHOIAMDPC
               (AHMJMDBNMHO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar1;
  byte bVar2;
  bool bVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  if ((DAT_04566c9c & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_Add__);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_5245);
    FUN_01bab630(&StringLiteral_4201);
    DAT_04566c9c = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1b,(MethodInfo *)0x0);
  (__this->fields).super._KPCCNJJEIAN_k__BackingField = false;
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
    pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar6,(MethodInfo *)0x0);
    if (!bVar3) {
      JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
      NILLKLHKLHG___ctor(__this_00,pSVar6,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                         (MethodInfo *)0x0);
      ppNVar7 = &(__this->fields).FKMMOOKKLBH;
      *ppNVar7 = __this_00;
      thunk_FUN_01c20e04(ppNVar7,__this_00);
    }
    plVar8 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar1 = &(__this->fields).CMAFKNEPKDA;
      do {
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_032d0054;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d0054:
                    /* try { // try from 032d0054 to 033d027f has its CatchHandler @ 032d0054
                       catch() { ... } // from try @ 032d0054 with catch @ 032d0054
                       catch() { ... } // from try @ 032d02b8 with catch @ 032d0054
                       catch() { ... } // from try @ 032d0310 with catch @ 032d0054
                       catch() { ... } // from try @ 032d0338 with catch @ 032d0054
                       catch() { ... } // from try @ 032d036c with catch @ 032d0054 */
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          plVar8 = (long *)thunk_FUN_01bda71c(plVar8,System_IDisposable_TypeInfo);
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_032d0214;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_032d01fc;
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_032d00b4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d00b4:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        if (AHDGNOJPPIB_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar2) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
        pSVar6 = (System_String_o *)
                 (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                           (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(pSVar6,StringLiteral_4201,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.methodPtr)
                             (AHDGNOJPPIB_00,
                              (AHDGNOJPPIB_00->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
          if (pSVar6 == (System_String_o *)0x0) goto LAB_032d017c;
          pSVar10 = HJNEOLCKEMD__EOHMFJFFFIN
                              (AHDGNOJPPIB_00,
                               (__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                               (__this->fields).super._MLBBLNHFENE_k__BackingField,(MethodInfo *)0x0
                              );
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).HENCEKHKNDD;
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_object>__Add
                    (__this_01,(Il2CppObject *)pSVar6,(Il2CppObject *)pSVar10,
                     Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_Add__);
        }
        else {
LAB_032d017c:
          pSVar6 = (System_String_o *)
                   (*(AHDGNOJPPIB_00->klass->vtable)._8_unknown.methodPtr)
                             (AHDGNOJPPIB_00,(AHDGNOJPPIB_00->klass->vtable)._8_unknown.method);
          bVar3 = System_String__op_Equality(pSVar6,StringLiteral_5245,(MethodInfo *)0x0);
          if (bVar3) {
            pSVar10 = HJNEOLCKEMD__EOHMFJFFFIN
                                (AHDGNOJPPIB_00,
                                 (__this->fields).super.super._MEFGNAIILBJ_k__BackingField,
                                 (__this->fields).super._MLBBLNHFENE_k__BackingField,
                                 (MethodInfo *)0x0);
            *ppSVar1 = pSVar10;
            thunk_FUN_01c20e04(ppSVar1);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_032d01fc:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_032d0230;
    }
  }
LAB_032d0214:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d0230:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


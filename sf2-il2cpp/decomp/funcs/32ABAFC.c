// FCNNPBIIEOK$$EAGBBNECKFB @ RVA 0x32ABAFC

/* WARNING: Removing unreachable block (ram,0x033acb6c) */
/* WARNING: Removing unreachable block (ram,0x033ac850) */
/* WARNING: Removing unreachable block (ram,0x033acb54) */

JMDPBFOCHHP_JMEJFGKJNEA_o *
FCNNPBIIEOK__EAGBBNECKFB(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  uint32_t uVar5;
  long *plVar6;
  JMDPBFOCHHP_JMEJFGKJNEA_o *__this;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  JMDPBFOCHHP_CKEMIAEPGKD_o *__this_00;
  System_DateTime_o SVar12;
  int64_t iVar13;
  int64_t iVar14;
  long *plVar15;
  JMDPBFOCHHP_EEJFKIEGDPH_o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *__this_02;
  System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *__this_03;
  MethodInfo_27F61B8 *pMVar16;
  long lVar17;
  JMDPBFOCHHP_EEJFKIEGDPH_array *pJVar18;
  JMDPBFOCHHP_CKEMIAEPGKD_array *pJVar19;
  ulong uVar20;
  int *piVar21;
  System_Nullable_DateTime__o __this_04;
  System_Nullable_DateTime__o __this_05;
  System_Nullable_DateTime__Fields local_80;
  System_Nullable_DateTime__Fields local_70;
  
  if ((DAT_0456743c & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_CKEMIAEPGKD_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_EEJFKIEGDPH_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&JMDPBFOCHHP_JMEJFGKJNEA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_Add__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_3318);
    FUN_01bab630(&StringLiteral_3573);
    FUN_01bab630(&StringLiteral_3149);
    FUN_01bab630(&StringLiteral_10430);
    FUN_01bab630(&StringLiteral_10519);
    FUN_01bab630(&StringLiteral_10432);
    FUN_01bab630(&StringLiteral_5750);
    FUN_01bab630(&StringLiteral_22254);
    FUN_01bab630(&StringLiteral_3440);
    FUN_01bab630(&StringLiteral_3439);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_9653);
    FUN_01bab630(&StringLiteral_12091);
    FUN_01bab630(&StringLiteral_10517);
    FUN_01bab630(&StringLiteral_10429);
    FUN_01bab630(&StringLiteral_10346);
    FUN_01bab630(&StringLiteral_10518);
    FUN_01bab630(&StringLiteral_12374);
    FUN_01bab630(&StringLiteral_12899);
    FUN_01bab630(&StringLiteral_3574);
    FUN_01bab630(&StringLiteral_11234);
    FUN_01bab630(&StringLiteral_8669);
    FUN_01bab630(&StringLiteral_10520);
    FUN_01bab630(&StringLiteral_5304);
    FUN_01bab630(&StringLiteral_3561);
    DAT_0456743c = 1;
  }
  local_70 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  local_80 = (System_Nullable_DateTime__Fields)ZEXT816(0);
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_3440,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    if (plVar6 == (long *)0x0) {
      return (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0;
    }
    __this = (JMDPBFOCHHP_JMEJFGKJNEA_o *)thunk_FUN_01bda818(JMDPBFOCHHP_JMEJFGKJNEA_TypeInfo);
    JMDPBFOCHHP_JMEJFGKJNEA___ctor(__this,(MethodInfo *)0x0);
    pSVar7 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
    if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar7,StringLiteral_10432,(MethodInfo *)0x0);
      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                         (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      if (__this != (JMDPBFOCHHP_JMEJFGKJNEA_o *)0x0) {
        (__this->fields).COENDIKFHPA = pSVar9;
        thunk_FUN_01c20e04();
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_10430,(MethodInfo *)0x0);
          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                             (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
          (__this->fields).GDAPNIKAOJK = pSVar9;
          thunk_FUN_01c20e04();
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_3318,(MethodInfo *)0x0);
            pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                               (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
            (__this->fields).BMODOAKLCNA = pSVar9;
            thunk_FUN_01c20e04();
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_3561,(MethodInfo *)0x0);
              pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                 (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
              (__this->fields).CGEMEMLPJFE = pSVar9;
              thunk_FUN_01c20e04();
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
              if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar7,StringLiteral_3439,(MethodInfo *)0x0);
                pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                   (pSVar8,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
                (__this->fields).PPFEFPPPLOA = pSVar9;
                thunk_FUN_01c20e04();
                plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x210));
                if (plVar6 != (long *)0x0) {
                  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                             (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                  do {
                    lVar17 = *plVar6;
                    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                          goto LAB_033abfa4;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_033abfa4:
                    uVar20 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                    if ((uVar20 & 1) == 0) {
                      plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                      if (plVar6 == (long *)0x0) {
                        return __this;
                      }
                      lVar17 = *plVar6;
                      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar20 == 0) goto LAB_033aca2c;
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      goto LAB_033aca14;
                    }
                    lVar17 = *plVar6;
                    uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                    if (uVar20 != 0) {
                      piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                      do {
                        if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                            System_Collections_IEnumerator_TypeInfo) {
                          puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                          goto LAB_033ac004;
                        }
                        uVar20 = uVar20 - 1;
                        piVar21 = piVar21 + 4;
                      } while (uVar20 != 0);
                    }
                    puVar10 = (undefined8 *)
                              FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ac004:
                    pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar6,puVar10[1]);
                    if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
                      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                      if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                         ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01babc64(pSVar11);
                      }
                    }
                    bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
                    if (!bVar3) {
                      __this_00 = (JMDPBFOCHHP_CKEMIAEPGKD_o *)
                                  thunk_FUN_01bda818(JMDPBFOCHHP_CKEMIAEPGKD_TypeInfo);
                      JMDPBFOCHHP_CKEMIAEPGKD___ctor(__this_00,(MethodInfo *)0x0);
                      if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_9327,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if (__this_00 == (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      (__this_00->fields).JIJLBFGKNJK = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3149,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).KBOFABJIPPD = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_5304,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).BPCADJLKKGA = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12091,(MethodInfo *)0x0);
                      bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
                      (__this_00->fields).HKKGMGDDCOD = bVar3;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10518,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).EGMPFEOGKOF = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10517,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      (__this_00->fields).DFHEHPGHMLF = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10520,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254,(MethodInfo *)0x0);
                      (__this_00->fields).DPNFGBFFNAJ = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3573,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254,(MethodInfo *)0x0);
                      (__this_00->fields).POLMCBLGCFH = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_3574,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254,(MethodInfo *)0x0);
                      (__this_00->fields).MNHCNNMLFNO = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12899,(MethodInfo *)0x0);
                      pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                         (pSVar8,StringLiteral_22254,(MethodInfo *)0x0);
                      (__this_00->fields).KMMIHCHCNDM = pSVar9;
                      thunk_FUN_01c20e04();
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_10519,(MethodInfo *)0x0);
                      iVar4 = EIABCPKDEBD__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
                      (__this_00->fields).JIALOHAOPAO = iVar4;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_12374,(MethodInfo *)0x0);
                      pMVar16 = (MethodInfo_27F61B8 *)0x0;
                      local_70 = (System_Nullable_DateTime__Fields)
                                 EIABCPKDEBD__LDPPNAICGFJ
                                           (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if ((local_70._0_8_ & 0xff) == 0) {
                        iVar13 = 0;
                      }
                      else {
                        __this_04.fields.value.fields._dateData =
                             (System_DateTime_Fields)
                             (System_DateTime_Fields)
                             Method_System_Nullable<DateTime>_get_Value__._dateData;
                        __this_04.fields._0_8_ = &local_70;
                        SVar12 = System_Nullable<DateTime>__get_Value(__this_04,pMVar16);
                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar13 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar12,(MethodInfo *)0x0);
                        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar14 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                        iVar13 = iVar13 - iVar14;
                      }
                      (__this_00->fields).LKENIPBKAJI = iVar13;
                      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                               (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                         (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.method
                                         );
                      if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                         (pSVar7,StringLiteral_5750,(MethodInfo *)0x0);
                      pMVar16 = (MethodInfo_27F61B8 *)0x0;
                      local_80 = (System_Nullable_DateTime__Fields)
                                 EIABCPKDEBD__LDPPNAICGFJ
                                           (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                      if ((local_80._0_8_ & 0xff) == 0) {
                        iVar13 = 0;
                      }
                      else {
                        __this_05.fields.value.fields._dateData =
                             (System_DateTime_Fields)
                             (System_DateTime_Fields)
                             Method_System_Nullable<DateTime>_get_Value__._dateData;
                        __this_05.fields._0_8_ = &local_80;
                        SVar12 = System_Nullable<DateTime>__get_Value(__this_05,pMVar16);
                        if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar13 = Nekki_Utils_GlobalTimer__TotalSeconds(SVar12,(MethodInfo *)0x0);
                        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
                          thunk_FUN_01ba7564();
                        }
                        iVar14 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
                        iVar13 = iVar13 - iVar14;
                      }
                      (__this_00->fields).PMHJGJHCNHE = iVar13;
                      plVar15 = (long *)(*(pSVar11->klass->vtable)._13_get_ChildNodes.methodPtr)
                                                  (pSVar11,(pSVar11->klass->vtable).
                                                           _13_get_ChildNodes.method);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      plVar15 = (long *)(**(code **)(*plVar15 + 0x1b8))
                                                  (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
LAB_033ac510:
                      lVar17 = *plVar15;
                      uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                      if (uVar20 != 0) {
                        piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                        do {
                          if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                              System_Collections_IEnumerator_TypeInfo) {
                            puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                            goto LAB_033ac55c;
                          }
                          uVar20 = uVar20 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar20 != 0);
                      }
                      puVar10 = (undefined8 *)
                                FUN_01b81914(plVar15,System_Collections_IEnumerator_TypeInfo,0);
LAB_033ac55c:
                      uVar20 = (*(code *)*puVar10)(plVar15,puVar10[1]);
                      if ((uVar20 & 1) != 0) {
                        lVar17 = *plVar15;
                        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar21 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                              puVar10 = (undefined8 *)(lVar17 + (long)(*piVar21 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_033ac5bc;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar15,System_Collections_IEnumerator_TypeInfo,1);
LAB_033ac5bc:
                        pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar15,puVar10[1]);
                        if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                          if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
                             ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(pSVar11);
                          }
                        }
                        bVar3 = EIABCPKDEBD__LGKNNMNPKGD(pSVar11,(MethodInfo *)0x0);
                        if (!bVar3) {
                          __this_01 = (JMDPBFOCHHP_EEJFKIEGDPH_o *)
                                      thunk_FUN_01bda818(JMDPBFOCHHP_EEJFKIEGDPH_TypeInfo);
                          JMDPBFOCHHP_EEJFKIEGDPH___ctor(__this_01,(MethodInfo *)0x0);
                          if (pSVar11 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_9653,(MethodInfo *)0x0);
                          uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                          if (__this_01 == (JMDPBFOCHHP_EEJFKIEGDPH_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          (__this_01->fields).NOPGBJNLFHM = uVar5;
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_10346,(MethodInfo *)0x0);
                          uVar5 = EIABCPKDEBD__FECKAJHFDJM(pSVar8,0,(MethodInfo *)0x0);
                          (__this_01->fields).BAAELBFKBAC = uVar5;
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_8669,(MethodInfo *)0x0);
                          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                          (__this_01->fields).KHIFPLJPKHN = pSVar9;
                          thunk_FUN_01c20e04();
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_11234,(MethodInfo *)0x0);
                          pSVar9 = EIABCPKDEBD__JPKEHIBGOEM
                                             (pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                          (__this_01->fields).ANBCIPKCNPC = pSVar9;
                          thunk_FUN_01c20e04();
                          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                                   (*(pSVar11->klass->vtable)._16_get_Attributes.methodPtr)
                                             (pSVar11,(pSVar11->klass->vtable)._16_get_Attributes.
                                                      method);
                          if (pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                             (pSVar7,StringLiteral_10429,(MethodInfo *)0x0);
                          bVar3 = EIABCPKDEBD__FMBMNDIGLIG(pSVar8,false,(MethodInfo *)0x0);
                          (__this_01->fields).IINMNOMNONO = bVar3;
                          lVar17 = 
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_EEJFKIEGDPH>_Add__;
                          __this_02 = (__this_00->fields).GPNNHMIJLGL;
                          if (__this_02 ==
                              (System_Collections_Generic_List_JMDPBFOCHHP_EEJFKIEGDPH__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          pJVar18 = (__this_02->fields)._items;
                          (__this_02->fields)._version = (__this_02->fields)._version + 1;
                          if (pJVar18 == (JMDPBFOCHHP_EEJFKIEGDPH_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_01bab8c8();
                          }
                          uVar2 = (__this_02->fields)._size;
                          if (uVar2 < (uint)pJVar18->max_length) {
                            (__this_02->fields)._size = uVar2 + 1;
                            pJVar18->m_Items[(int)uVar2] = __this_01;
                            thunk_FUN_01c20e04(pJVar18->m_Items + (int)uVar2,__this_01);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,
                                       (Il2CppObject *)__this_01,
                                       *(MethodInfo_26E4DAC **)
                                        (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                        goto LAB_033ac510;
                      }
                      plVar15 = (long *)thunk_FUN_01bda71c(plVar15,System_IDisposable_TypeInfo);
                      if (plVar15 != (long *)0x0) {
                        lVar17 = *plVar15;
                        uVar20 = (ulong)*(ushort *)(lVar17 + 0x12e);
                        if (uVar20 != 0) {
                          piVar21 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
                          do {
                            if (*(System_IDisposable_c **)(piVar21 + -2) ==
                                System_IDisposable_TypeInfo) {
                              puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
                              goto LAB_033ac838;
                            }
                            uVar20 = uVar20 - 1;
                            piVar21 = piVar21 + 4;
                          } while (uVar20 != 0);
                        }
                        puVar10 = (undefined8 *)FUN_01b81914(plVar15,System_IDisposable_TypeInfo,0);
LAB_033ac838:
                        (*(code *)*puVar10)(plVar15,puVar10[1]);
                      }
                      lVar17 = Method_System_Collections_Generic_List<JMDPBFOCHHP_CKEMIAEPGKD>_Add__
                      ;
                      __this_03 = (__this->fields).BJOLIBMAAAM;
                      if (__this_03 ==
                          (System_Collections_Generic_List_JMDPBFOCHHP_CKEMIAEPGKD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      pJVar19 = (__this_03->fields)._items;
                      (__this_03->fields)._version = (__this_03->fields)._version + 1;
                      if (pJVar19 == (JMDPBFOCHHP_CKEMIAEPGKD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      uVar2 = (__this_03->fields)._size;
                      if (uVar2 < (uint)pJVar19->max_length) {
                        (__this_03->fields)._size = uVar2 + 1;
                        pJVar19->m_Items[(int)uVar2] = __this_00;
                        thunk_FUN_01c20e04(pJVar19->m_Items + (int)uVar2,__this_00);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_03,
                                   (Il2CppObject *)__this_00,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar20 = uVar20 - 1;
    piVar21 = piVar21 + 4;
    if (uVar20 == 0) break;
LAB_033aca14:
    if (*(System_IDisposable_c **)(piVar21 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar17 + (long)*piVar21 * 0x10 + 0x138);
      goto LAB_033aca50;
    }
  }
LAB_033aca2c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_033aca50:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  return __this;
}


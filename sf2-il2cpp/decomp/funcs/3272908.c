// AJMOIOIBPGP$$CPPMCNNDKHA @ RVA 0x3272908

/* WARNING: Removing unreachable block (ram,0x03372e40) */
/* WARNING: Removing unreachable block (ram,0x03372ec8) */

void AJMOIOIBPGP__CPPMCNNDKHA(AJMOIOIBPGP_o *__this,MethodInfo *method)

{
  ACHLOMELAJE_o *BHENDAGDGME;
  NCNJEIBHGBH_o *LDPDIEKENKC;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  OPGMEHFEJJJ_o *__this_00;
  System_Func_HOOAAGABMBL__bool__o **ppSVar4;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  OPNMPAJKDMI_o *item;
  System_Collections_Generic_List_OPNMPAJKDMI__o *pSVar9;
  System_String_o *JLNPKGGFFDD;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  DOPEEDABNEK_o *pDVar10;
  System_Collections_Generic_IEnumerable_TSource__c *pSVar11;
  long lVar12;
  OPNMPAJKDMI_array *pOVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  OPGMEHFEJJJ_o **ppOVar17;
  System_Func_HOOAAGABMBL__bool__o *predicate;
  
  if ((DAT_0456724b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OPNMPAJKDMI>_get_Count__);
    FUN_01bab630(&OPGMEHFEJJJ_TypeInfo);
    FUN_01bab630(&Method_AJMOIOIBPGP_<>c_HMAIFPHKPGF__);
    FUN_01bab630(&AJMOIOIBPGP_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_854);
    FUN_01bab630(&StringLiteral_4872);
    FUN_01bab630(&StringLiteral_4873);
    DAT_0456724b = 1;
    method = extraout_x1;
  }
  ppOVar17 = &(__this->fields).PJAKDICKNKA;
  if (*ppOVar17 == (OPGMEHFEJJJ_o *)0x0) {
    BHENDAGDGME = (__this->fields).OKNKKHGBECG;
    LDPDIEKENKC = (__this->fields).KMGFNKKPGIH;
    __this_00 = (OPGMEHFEJJJ_o *)thunk_FUN_01bda818(OPGMEHFEJJJ_TypeInfo,method);
    OPGMEHFEJJJ___ctor(__this_00,BHENDAGDGME,LDPDIEKENKC,(MethodInfo *)0x0);
    (__this->fields).PJAKDICKNKA = __this_00;
    thunk_FUN_01c20e04(ppOVar17,__this_00);
    method = extraout_x1_00;
  }
  pDVar10 = (__this->fields).DPOPJKJLDEE;
  if (pDVar10 != (DOPEEDABNEK_o *)0x0) {
    source = (pDVar10->fields).JHGBLBKPIBK;
    if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_01;
    }
    predicate = AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__28_0;
    if (predicate == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
      if ((AJMOIOIBPGP_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method = extraout_x1_02;
      }
      predicate = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo,method);
      System_Func<object,_bool>___ctor();
      ppSVar4 = &AJMOIOIBPGP_<>c_TypeInfo->static_fields->__9__28_0;
      *ppSVar4 = predicate;
      thunk_FUN_01c20e04(ppSVar4,predicate);
    }
    pSVar5 = System_Linq_Enumerable__Where<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_Where<HOOAAGABMBL>__);
    if (pSVar5 != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
      pSVar11 = pSVar5->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar15 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
            pVVar6 = pSVar11->vtable + *piVar15;
            goto LAB_03372b24;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_03372b24:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03372bb4;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_03372bb4:
        uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03372e34;
          lVar12 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_03372e0c;
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03372df4;
        }
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar16 + -2) ==
                System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_03372c10;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0)
        ;
LAB_03372c10:
        IKKAMAMLIKA = (HOOAAGABMBL_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (*ppOVar17 == (OPGMEHFEJJJ_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = OPGMEHFEJJJ__IDCNCEELNDB(*ppOVar17,IKKAMAMLIKA,(MethodInfo *)0x0);
        if (item == (OPNMPAJKDMI_o *)0x0) {
          if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          JLNPKGGFFDD = System_String__Concat
                                  (StringLiteral_4873,
                                   (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,
                                   StringLiteral_854,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
        }
        else {
          iVar3 = (*(item->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                            (item,(item->klass->vtable)._14_NHGGBEACKBD.method);
          lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
          if (iVar3 == 0) {
            pSVar9 = (__this->fields).FHPIEPONJFG;
            if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pOVar13 = (pSVar9->fields)._items;
            (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
            if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar2 = (pSVar9->fields)._size;
            if (uVar2 < (uint)pOVar13->max_length) {
              (pSVar9->fields)._size = uVar2 + 1;
              pOVar13->m_Items[(int)uVar2] = item;
              thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70)
                        );
            }
          }
          else {
            iVar3 = (*(item->klass->vtable)._14_NHGGBEACKBD.methodPtr)
                              (item,(item->klass->vtable)._14_NHGGBEACKBD.method);
            lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
            if (iVar3 == 1) {
              pSVar9 = (__this->fields).KMBLPHNJINH;
              if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pOVar13 = (pSVar9->fields)._items;
              (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
              if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pOVar13->max_length) {
                (pSVar9->fields)._size = uVar2 + 1;
                pOVar13->m_Items[(int)uVar2] = item;
                thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          lVar12 = Method_System_Collections_Generic_List<OPNMPAJKDMI>_Add__;
          pSVar9 = (__this->fields).KALGMNLLLNO;
          if (pSVar9 == (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar13 = (pSVar9->fields)._items;
          (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
          if (pOVar13 == (OPNMPAJKDMI_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar9->fields)._size;
          if (uVar2 < (uint)pOVar13->max_length) {
            (pSVar9->fields)._size = uVar2 + 1;
            pOVar13->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pOVar13->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
  }
  goto LAB_03372ec0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_03372df4:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03372e28;
    }
  }
LAB_03372e0c:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03372e28:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03372e34:
  pSVar9 = (__this->fields).KALGMNLLLNO;
  if (pSVar9 != (System_Collections_Generic_List_OPNMPAJKDMI__o *)0x0) {
    if ((pSVar9->fields)._size == 0) {
      KFJJHMDIFIG__AFEFCBEAJIN((Il2CppObject *)__this,StringLiteral_4872,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03372ec0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


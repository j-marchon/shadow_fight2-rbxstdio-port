// AJMOIOIBPGP$$GGMPJNLIHHM @ RVA 0x32732C4

/* WARNING: Removing unreachable block (ram,0x03373954) */

void AJMOIOIBPGP__GGMPJNLIHHM(AJMOIOIBPGP_o *__this,OPNMPAJKDMI_o *NLFMDIGKNGP,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  int32_t iVar3;
  LPAPAMPGDFN_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  POGBKGFBOLC_o *PLJKGEJHILJ;
  GGHCLMEFIGO_o *__this_01;
  IGFGDDANEPE_o *__this_02;
  DOPEEDABNEK_o *__this_03;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  System_String_array *pSVar9;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  ACHLOMELAJE_o *pAVar10;
  System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__c *pSVar11;
  long lVar12;
  System_Collections_Generic_List_PKKLIJLIKGF__o *LDAIPGBJEOG;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  int32_t local_64;
  
  if ((DAT_0456723a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_807);
    FUN_01bab630(&StringLiteral_821);
    FUN_01bab630(&StringLiteral_822);
    FUN_01bab630(&StringLiteral_4305);
    FUN_01bab630(&StringLiteral_4304);
    FUN_01bab630(&StringLiteral_808);
    FUN_01bab630(&StringLiteral_855);
    DAT_0456723a = 1;
  }
  if (NLFMDIGKNGP == (OPNMPAJKDMI_o *)0x0) {
    return;
  }
  pAVar10 = (__this->fields).OKNKKHGBECG;
  if ((pAVar10 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar10->fields).LMCDOMHENMC, __this_00 != (LPAPAMPGDFN_o *)0x0)) {
    bVar2 = LPAPAMPGDFN__LBMNAEJPNNJ(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat(StringLiteral_4305,pSVar4,StringLiteral_808,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
      return;
    }
    local_64 = 0;
    pSVar5 = OPNMPAJKDMI__HOBICLIEIIJ(NLFMDIGKNGP,(MethodInfo *)0x0);
    if (pSVar5 != (System_Collections_Generic_IReadOnlyList_POGBKGFBOLC__o *)0x0) {
      pSVar11 = pSVar5->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo) {
            pVVar6 = pSVar11->vtable + *piVar14;
            goto LAB_0337346c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar5,System_Collections_Generic_IEnumerable<POGBKGFBOLC>_TypeInfo,0);
LAB_0337346c:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_033734f4;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_033734f4:
        uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar13 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar12 = *plVar7;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar13 == 0) goto LAB_033738ac;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03373894;
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_POGBKGFBOLC__c **)(piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03373550;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<POGBKGFBOLC>_TypeInfo,0)
        ;
LAB_03373550:
        PLJKGEJHILJ = (POGBKGFBOLC_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        pAVar10 = (__this->fields).OKNKKHGBECG;
        if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (PLJKGEJHILJ == (POGBKGFBOLC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (pAVar10->fields).OIDPLCLELEN;
        if (__this_01 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = GGHCLMEFIGO__JNFIBDBHNOA
                              (__this_01,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                               (MethodInfo *)0x0);
        if ((__this_02 == (IGFGDDANEPE_o *)0x0) ||
           (iVar3 = IGFGDDANEPE__LDJLMEFOMLG(__this_02,(MethodInfo *)0x0), iVar3 < 1)) {
          __this_03 = (__this->fields).DPOPJKJLDEE;
          if (__this_03 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          IKKAMAMLIKA = DOPEEDABNEK__CKKIPBAIEMN
                                  (__this_03,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                                   (MethodInfo *)0x0);
          if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
            pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
            if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[0] = StringLiteral_4304;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[1] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[2] = StringLiteral_822;
            thunk_FUN_01c20e04();
            pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
            if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[3] = pSVar4;
            thunk_FUN_01c20e04();
            if ((uint)pSVar9->max_length < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar9->m_Items[4] = StringLiteral_855;
            thunk_FUN_01c20e04();
            pSVar4 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
            KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
          }
          else {
            pAVar10 = (__this->fields).OKNKKHGBECG;
            if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar2 = ACHLOMELAJE__NIEKNLDMABC
                              (pAVar10,(IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField,
                               (MethodInfo *)0x0);
            if (bVar2) {
              pSVar9 = (System_String_array *)FUN_01bab718(string___TypeInfo,7);
              if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if ((int)pSVar9->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[0] = StringLiteral_4305;
              thunk_FUN_01c20e04();
              pSVar4 = OPNMPAJKDMI__KCHJCGEMCGE(NLFMDIGKNGP,(MethodInfo *)0x0);
              if ((uint)pSVar9->max_length < 2) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[1] = pSVar4;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[2] = StringLiteral_807;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[3] = (PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[4] = StringLiteral_821;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[5] = (IKKAMAMLIKA->fields)._ILMMODKJGFK_k__BackingField;
              thunk_FUN_01c20e04();
              if ((uint)pSVar9->max_length < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
              pSVar9->m_Items[6] = StringLiteral_855;
              thunk_FUN_01c20e04();
              pSVar4 = System_String__Concat(pSVar9,(MethodInfo *)0x0);
              KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar4,(MethodInfo *)0x0);
            }
            else {
              pAVar10 = (__this->fields).OKNKKHGBECG;
              if (pAVar10 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar3 = ACHLOMELAJE__EOEAKGGDBFH(pAVar10,(MethodInfo *)0x0);
              in_x5 = (MethodInfo *)0x0;
              AMIINPEKKFB__CHENJHPJCKE(IKKAMAMLIKA,iVar3 * 100 + 0xe6,1,true,true,(MethodInfo *)0x0)
              ;
              LDAIPGBJEOG = (PLJKGEJHILJ->fields)._OADOOFBKPEE_k__BackingField;
              if (LDAIPGBJEOG == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (0 < (LDAIPGBJEOG->fields)._size) {
                AMIINPEKKFB__NKGDNFCCFCD(IKKAMAMLIKA,LDAIPGBJEOG,(MethodInfo *)0x0);
              }
              AJMOIOIBPGP__HKILPHEEBJA
                        (__this,NLFMDIGKNGP,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                         &local_64,true,in_x5);
              AMIINPEKKFB__PFPPJAJFKDL((NCCFNKMICGK_o *)NLFMDIGKNGP,IKKAMAMLIKA,(MethodInfo *)0x0);
            }
          }
        }
        else {
          method_00 = (MethodInfo *)0x0;
          AJMOIOIBPGP__HKILPHEEBJA
                    (__this,NLFMDIGKNGP,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,&local_64
                     ,false,in_x5);
          AJMOIOIBPGP__HPNAOBPMDMP(__this,NLFMDIGKNGP,PLJKGEJHILJ,__this_02,method_00);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_03373894:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_033738c8;
    }
  }
LAB_033738ac:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_033738c8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}

